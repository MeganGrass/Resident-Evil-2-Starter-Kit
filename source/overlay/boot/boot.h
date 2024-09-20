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

#include "MESSAGE.H"

#if _DEBUG
#include "STRINGS.H"
#endif

struct {
	VOID(*func)();
} Boot_tbl[] = {
	{ Boot_Init },
	{ Boot_Logo },
	{ Boot_Title },
	{ Boot_New },
	{ Boot_Load },
	{ Boot_Option },
	{ Boot_Config },
	{ Boot_Sound },
	{ Boot_Exit },
#if _DEBUG
	{ Boot_Debug },
	{ Boot_Room_Jump },
#endif
};

#define BOOT_MENU_INIT			0	// Boot_Init
#define BOOT_MENU_LOGO			1	// Boot_Logo
#define BOOT_MENU_TITLE			2	// Boot_Title
#define BOOT_MENU_NEW			3	// Boot_New
#define BOOT_MENU_LOAD			4	// Boot_Load
#define BOOT_MENU_OPTION		5	// Boot_Option
#define BOOT_MENU_CONFIG		6	// Boot_Config
#define BOOT_MENU_SOUND			7	// Boot_Sound
#define BOOT_MENU_EXIT			8	// Boot_Exit
#ifdef _DEBUG
#define BOOT_MENU_DEBUG			9	// Boot_Debug
#define BOOT_MENU_ROOM_JUMP		10	// Boot_Room_Jump
#endif

MENU_WORK Menu;

SHORT Normal_game_life[] = { 200, 200, 200, 200, 200, 300, 300 };	// Incomplete, guesswork for everything but PL00

SHORT Spy_game_life[] = { 200, 200, 200, 200, 400, 300, 300 };		// Incomplete, guesswork for everything but PL0C and PL0D

SHORT Ex_battle_life[] = { 100, 100, 100, 100, 100, 300, 0 };		// Incomplete, vanilla table is missing data for PL0F

SHORT KeyTypeJP[] = {
	PAD_UP,			// KEY_UP
	PAD_RIGHT,		// KEY_RIGHT
	PAD_DOWN,		// KEY_DOWN
	PAD_LEFT,		// KEY_LEFT
	PAD_UP,			// KEY_AIM_UP
	PAD_DOWN,		// KEY_AIM_DOWN
	PAD_SQUARE,		// KEY_AIM_FIRE
	PAD_SQUARE,		// KEY_INSPECT
	PAD_R1,			// KEY_AIM
	PAD_X,			// KEY_RUN
	PAD_LEFT,		// KEY_PREV
	PAD_RIGHT,		// KEY_NEXT
	PAD_SQUARE,		// KEY_CONFIRM
	PAD_TRIANGLE,	// KEY_CANCEL
	PAD_CIRCLE,		// KEY_STATUS
	PAD_NULL		// KEY_NULL
};

SHORT KeyTypeUS[] = {
	PAD_UP,			// KEY_UP
	PAD_RIGHT,		// KEY_RIGHT
	PAD_DOWN,		// KEY_DOWN
	PAD_LEFT,		// KEY_LEFT
	PAD_UP,			// KEY_AIM_UP
	PAD_DOWN,		// KEY_AIM_DOWN
	PAD_X,			// KEY_AIM_FIRE
	PAD_X,			// KEY_INSPECT
	PAD_R1,			// KEY_AIM
	PAD_SQUARE,		// KEY_RUN
	PAD_LEFT,		// KEY_PREV
	PAD_RIGHT,		// KEY_NEXT
	PAD_X,			// KEY_CONFIRM
	PAD_TRIANGLE,	// KEY_CANCEL
	PAD_CIRCLE,		// KEY_STATUS
	PAD_NULL		// KEY_NULL
};

#if _DEBUG && DEBUG_ALL_ITEMS
UCHAR Debug_item_boxwork[64] = {
	1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,	// Weapons
	30,													// Ink Ribbon
	31,													// Small Key
	36,													// Anti-Virus Bomb
	50,													// Valve Handle
	51,51,												// Red Jewel
	52,													// Red Keycard
	53,													// Blue Keycard
	54,55,58,											// Stone Parts
	59,60,61,62,										// Chess Plugs
	66,													// C4+Detonator
	67,													// Crank
	68,69,70,80,										// Film
	71,													// Unicorn Medal
	72,73,												// Wolf & Eagle Medals
	74,													// Gear Cogwheel
	75,													// Manhole Opener
	77,													// Main Shaft Insert
	81,													// Anti-Virus
	84,85,												// Joint S & N Plugs
	86,86,												// Cord
	63,83,88,89,90,91,92,93,94,95,96,97,98				// Keys
};
#endif
