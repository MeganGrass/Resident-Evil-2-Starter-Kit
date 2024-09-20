/*
*
*	Megan Grass
*	March 27, 2014
*
*
*	TODO:
*
*/


#include "..\\..\\BIO2\\BIO2.H"

#include "..\\..\\CUSTOM\\CUSTOM.H"

#include "..\\..\\COMMON\\COMMON.H"

#include "PROTOTYPE.H"

struct {
	VOID(*func)();
} Debug_tbl[] = {
	{ Debug_Main },
	{ Debug_Room_Jump },
	{ Debug_Option },
	{ Debug_Controller_Test },
	{ Debug_Sound_Test },
	{ Debug_Movie_Test },
	{ Debug_Flag_Test },
	{ Debug_Event_Test },
	{ Debug_Message_Test },
	{ Debug_System_Reset },
	{ Debug_Exit },
	{ Debug_Flag_Editor },
};

#define DEBUG_MENU_MAIN				0	// Debug_Main
#define DEBUG_MENU_ROOM_JUMP		1	// Debug_Room_Jump
#define DEBUG_MENU_DEBUG_OPTION		2	// Debug_Option
#define DEBUG_MENU_CONTROLLER_TEST	3	// Debug_Controller_Test
#define DEBUG_MENU_SOUND_TEST		4	// Debug_Sound_Test
#define DEBUG_MENU_MOVIE_TEST		5	// Debug_Movie_Test
#define DEBUG_MENU_FLAG_TEST		6	// Debug_Flag_Test
#define DEBUG_MENU_EVENT_TEST		7	// Debug_Event_Test
#define DEBUG_MENU_MESSAGE_TEST		8	// Debug_Message_Test
#define DEBUG_MENU_SYS_RESET		9	// Debug_System_Reset
#define DEBUG_MENU_EXIT				10	// Debug_Exit
#define DEBUG_MENU_FLAG_EDITOR		11	// Debug_Flag_Editor

MENU_WORK Menu;

#define FLAG_TEST_COUNT		34

typedef struct tagFLAG_INFO
{
	ULONG* Pointer;		// Pointer to Flag
	UCHAR Type;			// 0=8bit, 1=16bit, 2=32bit
	UCHAR ArrayLen;		// Element Count
	UCHAR bDispBits;	// 0=Edit directly, 1=Display as bit array
	UCHAR padding;		// nothing
} FLAG_INFO;

FLAG_INFO Flag_table[FLAG_TEST_COUNT] = {
	{ (ULONG*)0x800cfb74, 2, 0, 1, 0 },		// G.System_flg
	{ (ULONG*)0x800cfbd8, 2, 0, 1, 0 },		// G.Status_flg
	{ (ULONG*)0x800cfbdc, 2, 0, 1, 0 },		// G.Stop_flg
	{ (ULONG*)0x800cfbe0, 2, 4, 1, 0 },		// G.Use_flg
	{ (ULONG*)0x800cfb70, 2, 0, 1, 0 },		// G.Rbj_set_flg
	{ (ULONG*)0x800cfb78, 2, 0, 1, 0 },		// G.Unknown_Flg	// never referenced?
	{ (ULONG*)0x800d4834, 2, 8, 1, 0 },		// G.SaveData.Scenario_flg
	{ (ULONG*)0x800d4854, 2, 8, 1, 0 },		// G.SaveData.Common_flg
	{ (ULONG*)0x800d4874, 2, 2, 1, 0 },		// G.SaveData.Room_flg
	{ (ULONG*)0x800cfbf6, 1, 0, 1, 0 },		// G.Room_player_flg
	{ (ULONG*)0x800cfbf4, 1, 0, 1, 0 },		// G.Room_enemy_flg
	{ (ULONG*)0x800d487c, 2, 8, 1, 0 },		// G.SaveData.Enemy_flg
	{ (ULONG*)0x800d489c, 2, 8, 1, 0 },		// G.SaveData.Enemy_flg2
	{ (ULONG*)0x800d48bc, 2, 8, 1, 0 },		// G.SaveData.Item_flg
	{ (ULONG*)0x800d48dc, 2, 4, 1, 0 },		// G.SaveData.Item_flg2
	{ (ULONG*)0x800d48ec, 2, 7, 1, 0 },		// G.SaveData.Item_c_flg
	{ (ULONG*)0x800d490c, 2, 4, 1, 0 },		// G.SaveData.Map_flg
	{ (ULONG*)0x800d4908, 2, 0, 1, 0 },		// G.SaveData.Map_o_flg
	{ (ULONG*)0x800d491c, 2, 2, 1, 0 },		// G.SaveData.Map_c_flg
	{ (ULONG*)0x800d4924, 2, 0, 1, 0 },		// G.SaveData.Map_i_flg
	{ (ULONG*)0x800d4a28, 2, 0, 1, 0 },		// G.SaveData.File_flg		// never referenced?
	{ (ULONG*)0x800d4b68, 0, 24, 0, 0 },	// G.SaveData.File_tag_bk
	{ (ULONG*)0x800d4a34, 2, 2, 1, 0 },		// G.SaveData.Key_flg
	{ (ULONG*)0x800d4a2c, 2, 2, 1, 0 },		// G.SaveData.Zapping_flg
	{ (ULONG*)0x800d47ec, 1, 0, 0, 0 },		// G.SaveData.F_atari
	{ (ULONG*)0x800d47ee, 1, 0, 0, 0 },		// G.SaveData.U_atari
	{ (ULONG*)0x800d47f0, 1, 0, 0, 0 },		// G.SaveData.Use_id
	{ (ULONG*)0x800d47f2, 1, 0, 0, 0 },		// G.SaveData.Get_id
	{ (ULONG*)0x800d47f4, 1, 8, 1, 0 },		// G.SaveData.Sce_work
	{ (ULONG*)0x800d4804, 1, 4, 1, 0 },		// G.SaveData.DSce_work
	{ (ULONG*)0x800d480c, 1, 8, 1, 0 },		// G.SaveData.Sce_tmp_work
	{ (ULONG*)0x800d46cc, 2, 0, 1, 0 },		// G.SaveData.Weapon_mugen
	{ (ULONG*)0x800cfb7d, 0, 0, 0, 0 },		// G.Mirror_flg
	{ (ULONG*)0x800d4496, 1, 0, 0, 0 },		// G.Scrl_flg
};

CONST CHAR* FlagStr[FLAG_TEST_COUNT] = {
	"SYSTEM",
	"STATUS",
	"STOP",
	"USE",
	"RBJ_SET",
	"UNKNOWN",
	"SCENARIO",
	"COMMON",
	"ROOM",
	"ROOM_PLAYER",
	"ROOM_ENEMY",
	"ENEMY",
	"ENEMY2",
	"ITEM",
	"ITEM2",
	"ITEM_C",
	"MAP",
	"MAP_O",
	"MAP_C",
	"MAP_I",
	"FILE",
	"FILE_TAG",
	"KEY",
	"ZAPPING",
	"F_ATARI",
	"U_ATARI",
	"USE_ID",
	"GET_ID",
	"SCE_WORK",
	"DSCE_WORK",
	"SCE_TMP_WORK",
	"WEAPON_MUGEN",
	"MIRROR",
	"SCRL",
};

CONST CHAR* OnOffStr[2] = {
	"0",
	"1"
};
