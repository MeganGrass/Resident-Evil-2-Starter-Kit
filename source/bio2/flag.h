

/*
*	Preprocessor
*/
#define GAME_REGION					1			// 0=JP, 1=Other	// used only for gamepad configurations


/*
*	Snd_se_stad
*/
#define SOUND_CORE_CURSOR			0x04040000
#define SOUND_CORE_CANCEL			0x04050000
#define SOUND_CORE_CONFIRM			0x04060000


/*
*	Bg_set_mode
*/
#define BG_MODE_CLEAR				2			// Clear screen using TILE structure (Bg_set_mode() function sets this)


/*
*	G.System_flg
*/
#define SYS_PLAYER					0x80000000	// OFF=PL0, ON=PL1
#define SYS_SPAD_STACK				0x10000000	// Re/Set SpadStack
#define SYS_CONFIG					0x08000000	// Configuration (CONFIG.BIN)
#define SYS_GAME_OVER				0x04000000	// Game Over (DIEDEMO.BIN)
#define SYS_DOOR_PROCESS			0x02000000	// Door_main() is parsing function table (Door_proc_tbl)
#define SYS_ZAPPING					0x01000000	// Character Change, Ex Battle (used before in-game to determine)
// 0x00400000	// In Bio2 Beta, enables Debug_menu() in main()		// untested in retail
#define SYS_ENDING					0x00200000	// End Game (ENDING.BIN)
#define SYS_PSP_TRANS				0x00100000	// Camera Sprite On/Off - Psp_trans() function
#define SYS_ARRANGE					0x00080000	// Arrange Mode On/Off
#define SYS_SAVE_GAME				0x00040000	// Save Game (MEMCARD.BIN)
#define SYS_LOAD_GAME				0x00020000	// Load Game
#define SYS_BACKGROUND				0x00010000	// Background On/Off
#define SYS_XA_MOVIE				0x00008000	// XA Movie is currently streaming
#define SYS_DOOR_INIT				0x00004000	// Initialize Door Routine - Set_door() function	// Also set to true before calling Task_execute(1,Status) and Task_lexecute(1,4), the latter being CONFIG.BIN
#define SYS_DEMO_MODE				0x00002000	// Demo Mode On/Off
#define SYS_RESET					0x00001000	// Soft Game Reset
#define SYS_LANG_MAIN				0x00000800	// Japanese
#define SYS_STR_MOVIE				0x00000200	// STR Movie is currently streaming		// if not true, Main.Bg_chg_flg is set to 0 in Swap_Cbuff
// 0x80			// In Bio2 Beta, enabled when Debug_menu() is started, disabled when Debug_menu() is ended		// causes game to reboot upon menu exit or area jump
#define SYS_LANG_SUB				0x00000040	// Other
#define SYS_EASY_MODE				0x00000020	// Easy Mode On/Off
#define SYS_4TH_SURVIVOR			0x00000010	// 4th Survivor On/Off
#define SYS_TIMER					0x00000008	// Timer On/Off
#define SYS_TIMER_EXPIRED			0x00000004	// Timer has expired (0:00)
#define SYS_TOFU_SURVIVOR			0x00000001	// To-Fu Survivor On/Off


/*
*	G.Status_flg
*/
#define STAT_PLAYER					0x80000000	// OFF=PL0, ON=PL1
#define STAT_SCENARIO_B				0x40000000	// OFF=A, ON=B
#define STAT_SUB_PLAYER				0x10000000	// Partner On/Off
#define STAT_TIMER					0x08000000	// Timer On/Off
#define STAT_EASY_MODE				0x04000000	// Easy Mode On/Off
#define STAT_4TH_SURVIVOR			0x02000000	// 4th Survivor On/Off
#define STAT_PAUSE					0x01000000	// Pause On/Off
#define STAT_INF_AMMO				0x00800000	// Infinite Ammo On/Off
#define STAT_INSPECT				0x00200000	// Player pressed Check/Inspect button On/Off
#define STAT_AIM_ROCKET				0x00040000	// Rocket Launcher Auto-Aim On/Off
#define STAT_MIRROR_MATRIX			0x00010000	// Mirror Matrix On/Off (Mirror Reflection)
#define STAT_STATUS_SCREEN			0x00008000	// Status Screen On/Off
#define STAT_AUTO_AIM				0x00000800	// Auto-Aim On/Off
#define STAT_CAM_LOCK				0x00000100	// Camera Lock On/Off
#define STAT_XA_VOICE				0x00000020	// XA Voice is currently streaming
#define STAT_CINESCO				0x00000010	// Letterbox Mode On/Off (For Cutscenes)
#define STAT_SHAKE_SLOW				0x00000008	// Slow Screen Shake On/Off
#define STAT_SHAKE_FAST				0x00000004	// Fast Screen Shake On/Off
#define STAT_RELOAD					0x00000001	// Player is reloading weapon