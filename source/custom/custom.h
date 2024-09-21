/*
*
*	Megan Grass
*	March 27, 2014
*
*
*	TODO:
*
*/

#include "CONTROLLER.H"

#include "PRINT.H"

#include "FILECODE.H"

#include "LOADTASK.H"

// Preprocessor
#define _DEBUG					TRUE			// Enable debugging utilities
#define COPYRIGHT_ON_BOOT		FALSE			// Display copyright on boot
#define WARNING_ON_BOOT			FALSE			// Display violence warning screen on boot
#define OPENING_ON_BOOT			FALSE			// Display opening cutscene on scenario start
#define MESSAGE_ON_BOOT			FALSE			// Display on-screen message on scenario start

// Debug Preprocessor
#define DEBUG_QUICK_LOAD		FALSE			// Room Jump on boot
#define DEBUG_INF_HEALTH		TRUE			// Infinite Health
#define DEBUG_INF_AMMO			FALSE			// Infinite Ammo
#define DEBUG_MAX_STORAGE		TRUE			// Max item slots in inventory
#define DEBUG_ALL_ITEMS			TRUE			// All items in storage box
#define DEBUG_ALL_FILES			TRUE			// All files unlocked

// Flag
#define DEBUG_AUTO_AIM			(1 << 0)		// Auto-Aim was requested on boot
#define DEBUG_AREA_JUMP			(1 << 1)		// Room Jump was selected from Debug Menu
#define DEBUG_MOVIE_TEST		(1 << 2)		// Movie Test was selected from Debug Menu
#define DEBUG_MESSAGE_TEST		(1 << 3)		// Message Test was selected from Debug Menu
#define DEBUG_EVENT_TEST		(1 << 4)		// Event Test was selected from Debug Menu
#define DEBUG_PRINT_CUT			(1 << 29)		// Print camera cut number
#define DEBUG_PRINT_PLPOS		(1 << 30)		// Print player position
#define DEBUG_PRINT_PLROT		(1 << 31)		// Print player rotation

// Buffer Areas
#define ItoxBuffer				0x800107C0		// CHAR[8]		itox buffer

// CDX Buffer Areas		// these needs to be properly renamed
#define pFileIndex				0x800988A4		// newfpos[306]		// 0x800988A4 - 0x80099234
#define pBssIndex				0x80099254		// BSS LBA Index
#define pBgmTable				0x800993D4		// BGM ID Index
#define pRdtIndex				0x80099434		// RDT LBA Index
#define pPlwIndex				0x800995B4		// PLW LBA Index (Player ID at PlwArchiveTbl+0xA0)
#define pPldIndex				0x8009965C		// PLD LBA Index
#define pPldChIndex				0x800996DC		// PLD CH LBA Index (Currently unused)
#define pSndMainIndex			0x8009975C		// BGM MAIN LBA Index
#define pSndSubIndex			0x8009995C		// BGM SUB LBA Index
#define pDo2Index				0x80099B5C		// DO2 LBA Index
#define pSndArmsIndex			0x80099D5C		// ARMS LBA Index
#define pSndCoreIndex			0x80099E9C		// CORE LBA Index
#define pXasTable				0x80099FFC		// XA Sector Table

// G.SaveData.Save_area
enum BIO2_SAVE_AREA {
	SAVE_AREA_WAITING_ROOM,
	SAVE_AREA_HALL,
	SAVE_AREA_DARK_ROOM,
	SAVE_AREA_STORE_ROOM_L,
	SAVE_AREA_STORE_ROOM_R,
	SAVE_AREA_CONTROL_ROOM_1,
	SAVE_AREA_CONTROL_ROOM_2,
	SAVE_AREA_WATER_POOL,
	SAVE_AREA_FACTORY,
	SAVE_AREA_PUMP_ROOM,
	SAVE_AREA_SECURITY_ROOM,
	SAVE_AREA_MONITOR_ROOM,
	SAVE_AREA_GUN_SHOP,
	SAVE_AREA_CABIN,
	SAVE_AREA_TRAIN,
	SAVE_AREA_SCENARIO_1ST,
	SAVE_AREA_SCENARIO_2ND,
	SAVE_AREA_4TH_SURVIVOR,
	SAVE_AREA_DO_NOT_SAVE,
	SAVE_AREA_NOTHING,
	SAVE_AREA_EXTREME_BATTLE
};

typedef struct newfpos
{
	ULONG size;
	ULONG sector;
};

typedef struct tagROOM_INFO
{
	SHORT Cdir_y;
	SHORT Pos_x;
	SHORT Pos_z;
	USHORT nFloor;
	CHAR Name[33];
};

typedef struct tagMENU_WORK
{
	UCHAR Func_no;

	INT Cursor_main;

#if _DEBUG
	INT Cursor_flag;

	USHORT Wnd_col;
	USHORT Wnd_x;
	USHORT Wnd_y;
	USHORT Wnd_w;
	USHORT Wnd_h;

	TILE Fade[2];
	DR_MODE Dm[2];
#endif

} MENU_WORK;

extern "C" {

	extern CHAR BuildDate[16];				// 0x80010000	// build date

	extern ULONG CdxLbaBin;					// 0x80010010	// pointer to newfpos[BIN_CDX]
	extern ULONG CdxLbaBss;					// 0x80010014	// pointer to newfpos[BSS*_CDX]
	extern ULONG CdxLbaDat;					// 0x80010018	// pointer to newfpos[DAT_CDX]
	extern ULONG CdxLbaDo2;					// 0x8001001C	// pointer to newfpos[DO2_CDX]
	extern ULONG CdxLbaEmd0;				// 0x80010020	// pointer to newfpos[EMD00_CDX]
	extern ULONG CdxLbaEmd1;				// 0x80010024	// pointer to newfpos[EMD01_CDX]
	extern ULONG CdxLbaPld;					// 0x80010028	// pointer to newfpos[PLD_CDX]
	extern ULONG CdxLbaPlw;					// 0x8001002C	// pointer to newfpos[PLW*_CDX]
	extern ULONG CdxLbaSndArms;				// 0x80010030	// pointer to newfpos[SNDARMS_CDX]
	extern ULONG CdxLbaSndCore;				// 0x80010034	// pointer to newfpos[SNDCORE_CDX]
	extern ULONG CdxLbaSndEmd;				// 0x80010038	// pointer to newfpos[SNDEMD_CDX]
	extern ULONG CdxLbaSndMain;				// 0x8001003C	// pointer to newfpos[SNDMAIN_CDX]
	extern ULONG CdxLbaSndSub;				// 0x80010040	// pointer to newfpos[SNDSUB_CDX]
	extern ULONG CdxLbaRdt;					// 0x80010044	// pointer to newfpos[STG*_CDX]
	extern ULONG CdxLbaXa;					// 0x80010048	// pointer to newfpos[XA*_CDX]
	extern ULONG CdxLbaStr;					// 0x8001004C	// pointer to newfpos[STR_CDX]

	extern UCHAR SysDisk;					// 0x80010050	// disk (0=Pl0, 1=Pl0, 2=Ex-Battle)
	extern UCHAR SysScenario;				// 0x80010051	// scenario (0=A, 1=B, 2=4th Survivor, 3=Ex-Battle)
	extern UCHAR SysController;				// 0x80010052	// controller Type (0=JP, 1=WESTERN)
	extern UCHAR SysLanguage;				// 0x80010053	// language (0=MAIN, 1=SUB)

	extern ULONG DebugFlag;					// 0x80010054	// flags
	extern ULONG DebugValue;				// 0x80010058	// buffer

	extern ULONG CdReadMode;				// 0x8001005C	// Cd_read "Mode" parameter, used in CdReadEx		// need to reimplement this now that Cd_read_s has been rewritten in C

	ULONG CdReadEx(ULONG Sector, ULONG Size, ULONG* Address, UINT Parse);
	VOID SetDisk(VOID);
	VOID LoadPlwTable(VOID);

}
