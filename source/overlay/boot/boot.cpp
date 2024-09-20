/*
*
*	Megan Grass
*	March 27, 2014
*
*/

#include "BOOT.H"

VOID Boot(VOID)
{
	do {
		(*Boot_tbl[Menu.Func_no].func)();
		Task_sleep(1);
	} while (true);
}

VOID Boot_Game_Set(VOID)
{
	USHORT* pKeyType = 0;

	Game.Doordemo_flg = 0x03;
	UnknownPadInfoByte = 1;
	Main.Scrl_type = 0;
	Bg_set_mode(BG_MODE_CLEAR, 0x00000000);
	Fade_off(0);
	G.SaveData.Stereo = (G.SaveData.Stereo | G.Sound_mode) & 1;

	// TEMPORARY
	G.SaveData.Pl_id = G.Player.Id;
	G.Player.Life = 200;
	G.SaveData.Pl_life = 200;
	G.Player.Max_life = 200;	// needs table	// This value is set in Player_set() -- might need to scrub it from there
	G.SaveData.Vol_Bgm = 100;
	G.SaveData.Vol_Se = 100;


	/*
	*	Attract Mode (incomplete)
	*/
	if ((G.System_flg & SYS_DEMO_MODE) != 0)
	{
		G.Pl_poison_timer = 0;
		G.Pl_poison_down = 0;
		G.Player.Old_x = G.Player.Pos_x;
		G.Player.Sca_old_x = G.Player.Pos_z;
		G.Player.Old_z = G.Player.Pos_z;
		G.Player.Ground = G.Player.Pos_y;
		G.SaveData.Key_idx = Main.Key_idx;
		Cd_read(PDEMO00_DAT, (ULONG*)&Demo, 0, 0);	// temp
		G.System_flg = G.System_flg & 0xffffffdf;
		G.SaveData.Max_item_num = 8;
		G.Status_flg = G.Status_flg & 0xfbffffff;
		G.SaveData.Stage_no = (SHORT)Demo.Stage_no;
		G.Player.Pos_x = (LONG)Demo.Pos_x;
		G.Player.Pos_y = (LONG)Demo.Pos_y;
		G.Player.Pos_z = (LONG)Demo.Pos_z;
		G.SaveData.Room_no = (SHORT)Demo.Room_no;
		G.SaveData.Cut_no = (SHORT)Demo.Cut_no;
		G.SaveData.Equip_id = Demo.Equip_id;
		St.Equip_item_id = Demo.Equip_id;
		G.SaveData.Equip_no = Demo.Equip_no;
		St.Equip_item_no = Demo.Equip_no;
		G.Player.Id = Demo.Player_id;
		G.Player.Cdir_y = Demo.Cdir_y;
		G.Player.nFloor = -(char)((int)Demo.Pos_y / 1800);
		Memcpy(G.SaveData.Item_work, Demo.Item_wk, 0x2C);
		G.SaveData.Pl_life = 200;
		Main.Padoff_stop_flg[1][1] = 0;
		Key_idx_bak = G.SaveData.Key_idx;
		G.SaveData.Key_idx = Demo.Key_idx;
		G.SaveData.Room_no_old = 0xff;
		G.Player.Life = G.SaveData.Pl_life;
		Boot_Game_Init();
		return;
	}


	/*
	*	Clear
	*/
	G.System_flg = 0;
	G.Status_flg = 0;


	/*
	*	G.SaveData.Player_life	// 0=PL0, 1=PL1, 2=RDT, 3=RDT, 4=Ex-Battle
	*	Used for loading player avatars?
	*/
	switch (G.Player.Id)
	{
	case 0x00:
	case 0x02:
	case 0x04:
	case 0x06:
	case 0x08:
	case 0x0A:
	case 0x0C:
	case 0x0D:
	case 0x0E:
		G.SaveData.Player_life = 0;
		break;
	case 0x01:
	case 0x03:
	case 0x05:
	case 0x07:
	case 0x09:
	case 0x0F:
		G.SaveData.Player_life = 1;
		break;
	case 0x0B:
		G.SaveData.Player_life = 4;
		break;
	}


	/*
	*	Language
	*/
	switch (SysLanguage)
	{
	case 0:
		G.System_flg |= SYS_LANG_MAIN;
		break;
	case 1:
		G.System_flg |= SYS_LANG_SUB;
		break;
	}


	/*
	*	Difficulty
	*/
	if ((G.System_flg & SYS_ARRANGE) != 0)
	{
		G.Status_flg |= STAT_INF_AMMO;
	}

	if ((G.System_flg & SYS_EASY_MODE) != 0)
	{
		G.Status_flg |= STAT_EASY_MODE;
	}


	/*
	*	Disk
	*/
	switch (SysDisk)
	{
	case 0:
		break;
	case 1:
		G.System_flg |= SYS_PLAYER;
		G.Status_flg |= STAT_PLAYER;
		break;
	case 3:
		break;
	}

	SetDisk();


	/*
	*	Scenario
	*/
	switch (SysScenario)
	{
	case 0:
		G.SaveData.Save_area = SAVE_AREA_SCENARIO_1ST;
		break;
	case 1:
		G.SaveData.Save_area = SAVE_AREA_SCENARIO_2ND;
		G.Status_flg |= STAT_SCENARIO_B;
		break;
	case 2:
		G.SaveData.Save_area = SAVE_AREA_4TH_SURVIVOR;
		G.System_flg |= SYS_TIMER;
		G.Status_flg |= STAT_4TH_SURVIVOR;
		switch (G.Player.Id)
		{
		case 0x0D:
			G.System_flg |= SYS_TOFU_SURVIVOR;
			G.Player.Life = 400;
			break;
		default:
			G.Player.Life = 200;
			break;
		}
		G.SaveData.Count_down_timer = 5999;
		G.SaveData.Sce_timer = 5999;
		break;
	case 3:
		G.SaveData.Save_area = SAVE_AREA_EXTREME_BATTLE;
		G.System_flg |= SYS_ZAPPING;
		//Flg_on(G.SaveData.Zapping_flg, 0x3F);
		//G.Font_type = 9;
		SHORT* pExBattleLife = (SHORT*)Ex_battle_life;
		switch (G.Player.Id)
		{
		case 0x00:
		case 0x02:
		case 0x04:
		case 0x06:
		case 0x08:
		case 0x0A:
			pExBattleLife = (SHORT*)Ex_battle_life[0];
			break;
		case 0x01:
		case 0x03:
		case 0x05:
		case 0x07:
		case 0x09:
			pExBattleLife = (SHORT*)Ex_battle_life[1];
			break;
		case 0x0B:
			pExBattleLife = (SHORT*)Ex_battle_life[2];
			break;
		case 0x0C:
			pExBattleLife = (SHORT*)Ex_battle_life[3];
			break;
		case 0x0D:
			pExBattleLife = (SHORT*)Ex_battle_life[4];
			break;
		case 0x0E:
		case 0x0F:
			pExBattleLife = (SHORT*)Ex_battle_life[5];
			break;
		}
		G.SaveData.Player_life = *pExBattleLife;
		G.Player.Life = 200;
		FUN_800529fc();
		break;
	}


	/*
	*	Controller Type
	*/
	switch (SysController)
	{
	case 0:
		pKeyType = (USHORT*)KeyTypeJP;
		break;
	case 1:
		pKeyType = (USHORT*)KeyTypeUS;
		break;
	}
	for (INT i = 0; i < 3; i++)
	{
		for (INT x = 0; x < 16; x++)
		{
			Key_type[i][x] = pKeyType[x];
		}
	}


	/*
	*	Status Storage
	*/
#if _DEBUG && DEBUG_MAX_STORAGE
	G.SaveData.Max_item_num = 10;
#else
	G.SaveData.Max_item_num = 8;
#endif

	for (INT i = 0; i < 11; i++)
	{
		switch (G.Player.Id)
		{
		case 0x00:
		case 0x02:
		case 0x04:
		case 0x06:
		case 0x08:
		case 0x0A:
			if ((G.System_flg & SYS_ZAPPING) == 0)
			{
				Set_iwork(i, init_item_tbl_Leon[i][0], init_item_tbl_Leon[i][1], init_item_tbl_Leon[i][2]);
			}
			else
			{
				Set_iwork(i, init_item_tbl_Leon_Ex[i][0], init_item_tbl_Leon_Ex[i][1], init_item_tbl_Leon_Ex[i][2]);
			}
			break;
		case 0x01:
		case 0x03:
		case 0x05:
		case 0x07:
		case 0x09:
			if ((G.System_flg & SYS_ZAPPING) == 0)
			{
				Set_iwork(i, init_item_tbl_Claire[i][0], init_item_tbl_Claire[i][1], init_item_tbl_Claire[i][2]);
			}
			else
			{
				Set_iwork(i, init_item_tbl_Claire_Ex[i][0], init_item_tbl_Claire_Ex[i][1], init_item_tbl_Claire_Ex[i][2]);
			}
			break;
		case 0x0B:
			Set_iwork(i, init_item_tbl_Chris_Ex[i][0], init_item_tbl_Chris_Ex[i][1], init_item_tbl_Chris_Ex[i][2]);
			break;
		case 0x0C:
			Set_iwork(i, init_item_tbl_Hunk[i][0], init_item_tbl_Hunk[i][1], init_item_tbl_Hunk[i][2]);
			break;
		case 0x0D:
			Set_iwork(i, init_item_tbl_ToFu[i][0], init_item_tbl_ToFu[i][1], init_item_tbl_ToFu[i][2]);
			break;
		case 0x0E:
			if ((G.System_flg & SYS_ZAPPING) == 0)
			{
				Set_iwork(i, init_item_tbl_Ada[i][0], init_item_tbl_Ada[i][1], init_item_tbl_Ada[i][2]);
			}
			else
			{
				Set_iwork(i, init_item_tbl_Ada_Ex[i][0], init_item_tbl_Ada_Ex[i][1], init_item_tbl_Ada_Ex[i][2]);
			}
			break;
		case 0x0F:
			Set_iwork(i, init_item_tbl_Sherry[i][0], init_item_tbl_Sherry[i][1], init_item_tbl_Sherry[i][2]);
			break;
		}
	}


	/*
	*	Item Box Storage
	*/
#if _DEBUG && DEBUG_ALL_ITEMS
	UCHAR iItem = 1;
	for (INT i = 0; i < 64; i++, iItem++)
	{
		G.SaveData.Item_boxwork[i].Id = Debug_item_boxwork[iItem];
		G.SaveData.Item_boxwork[i].Num = Item_data_tbl[iItem].Item_max;
		G.SaveData.Item_boxwork[i].Size = 0;
	}
#endif


	/*
	*	Weapon
	*/
	LoadPlwTable();

	G.SaveData.Equip_no = St.Equip_item_no = 0x80;
	G.SaveData.Equip_id = St.Equip_item_id = 0;

	for (INT i = 0; i < 10; i++)
	{
		LONG iSearch = Search_item_id(G.SaveData.Item_work[i].Id);
		if ((iSearch != -1) && (G.SaveData.Item_work[i].Id != 0) && (G.SaveData.Item_work[i].Id <= 19))
		{
			G.SaveData.Equip_no = St.Equip_item_no = iSearch;
			G.SaveData.Equip_id = St.Equip_item_id = G.SaveData.Item_work[i].Id;
			break;
		}
	}

#if _DEBUG && DEBUG_INF_AMMO
	G.Sound_mode |= 0x20;
#endif

	if ((G.Sound_mode & 0x20) == 0)
	{
		G.SaveData.Weapon_mugen &= 0x2001;
	}
	else
	{
		G.SaveData.Weapon_mugen |= 0xFFFFDF00;
	}


	/*
	*	SELECT.BIN
	*/
	/*if ((G.System_flg & SYS_ZAPPING) != 0)
	{
		Task_lexecute(1, LOAD_TASK_SELECT);
	}*/

	Task_sleep(1);


	/*
	*	OPENING.BIN
	*/
#if OPENING_ON_BOOT
	if ((G.System_flg & (SYS_ZAPPING | SYS_DEMO_MODE | SYS_TIMER)) == 0)
	{
		Task_lexecute(1, LOAD_TASK_OPENING);
		Task_sleep(1);
	}
#endif


	/*
	*	Message
	*/
#if MESSAGE_ON_BOOT
	ULONG pOpenMessage = 0;
	if ((G.System_flg & SYS_LOAD_GAME) != 0)
	{
		pOpenMessage = (ULONG)OpenMessage02;			// Load Game
	}
	else if ((G.System_flg & SYS_DEMO_MODE) != 0)
	{
		pOpenMessage = (ULONG)OpenMessage03;			// Attract Mode
	}
	else if (SysDisk == 2)
	{
		pOpenMessage = (ULONG)OpenMessage05;			// Ex-Battle
	}
	else
	{
		if ((G.System_flg & SYS_TIMER) != 0)
		{
			pOpenMessage = (ULONG)OpenMessage04;		// 4th Survivor
		}
		else if ((G.Status_flg & STAT_SCENARIO_B) == 0)
		{
			pOpenMessage = (ULONG)OpenMessage00;		// Scenario A
		}
		else
		{
			pOpenMessage = (ULONG)OpenMessage01;		// Scenario B
		}
	}
	Mess_set(0xB40000, 0x4C02, pOpenMessage, 0);
#endif


	/*
	*	The Status_init() function heavily modifies the item box inventory and other variables, so relevant code is here and its never called
	*/
#if !DEBUG_INF_AMMO
	//Flg_on(&G.SaveData.Weapon_mugen, 0x12);	// Need to figure out what this flag does
#endif

	//Flg_off(G.SaveData.Common_flg, 0x7E);	// Need to figure out what this flag does

	for (UCHAR i = 0; i < 24; i++)	// maybe 23, special conditions for [0]
	{
#if DEBUG_ALL_FILES
		G.SaveData.File_tag_bk[i] = i;
#else
		G.SaveData.File_tag_bk[i] = (UCHAR)0xFF;
#endif
	}

	if ((G.Status_flg & STAT_EASY_MODE) != 0)
	{
		if (((G.System_flg & SYS_ENDING) == 0) && ((G.Status_flg & STAT_SCENARIO_B) == 0))		// not sure what SYS_ENDING is doing here, probably has multiple uses
		{
			File_data[46].Page_max = 1;
			File_data[46].Back_h = 0;
			G.SaveData.File_tag_bk[0] = 0x17;
		}
	}


	/*
	*	Initialize
	*/
	Boot_Game_Init();

}
VOID Boot_Game_Init(VOID)
{
	//Status_init();		// this function modifies the itembox inventory
	Status_init_m();		// the beginning of this function needs to be patched in assembly to load the correct ST*.TIM file ...or the function can be rewritten entirely in C

#if _DEBUG
	/*
	*	Auto-aim is disabled if G.SaveData.Key_idx is not equal to 2 (Control Type is not "C") in the Status_init_m function
	*/
	if ((DebugFlag & DEBUG_AUTO_AIM) && ((G.SaveData.Weapon_mugen & 1) != 0))
	{
		G.SaveData.Weapon_mugen ^= 1;
	}
#endif

	UCHAR core_type_no = 0;
	switch (G.Player.Id)
	{
	case 0x00:
	case 0x02:
	case 0x04:
	case 0x06:
	case 0x08:
	case 0x0A:
		core_type_no = 0x00;
		break;
	case 0x01:
	case 0x03:
	case 0x05:
	case 0x07:
	case 0x09:
		core_type_no = 0x01;
		break;
	case 0x0B:
		core_type_no = 0x0B;
		break;
	case 0x0C:
		core_type_no = 0x0C;
		break;
	case 0x0D:
		core_type_no = 0x0D;
		break;
	case 0x0E:
		core_type_no = 0x0E;
		break;
	case 0x0F:
		core_type_no = 0x0F;
		break;
	}
	Snd_sys_core_set(core_type_no, 0x04);

	Snd_sys_init_sub2();

	Esp_init_C();

	Em_move_tbl_set();

	Set_stage();

	G.pEnemy[0] = (ENEMY_WORK*)&G.Player;

	G.Player.Be_flg = 1;

	G.pFree_work = G.pFree_work_head;

	SetSpadStack();

	Player_set((ENEMY_WORK*)&G.Player);

	ResetSpadStack();

	Spl_set();

	Kage_work_init();

	Kage_work9_init();

	Sce_test_init();

	Set_room();

	while ((0x800E873C & 0x80) != 0)
	{
		Task_sleep(1);
	}

	G.System_flg |= 0x40000000;		// need to figure out what this flag is for

	G.Game_time_offset = VSync(-1);

	Main.Vloop = 0x02;

	Bg_set_mode(0, 0);

	Main.Bg_chg_flg = 0x01;

	Cut_change(G.SaveData.Cut_no);

	Cut_check(1);

	UnknownPadInfoByte = 0;

}

VOID Boot_Init(VOID)
{
	Boot_File_System();

	DebugValue = 0;

	// TEMPORARY
	SysLanguage = 1;
	SysController = 1;

	Pad_rep_set(0xF000, 0x60A);

	Snd_sys_init2();

	Snd_sys_core_set(0x11, 0);

	Snd_sys_init_sub2();

	Main.Padoff_stop_flg[0][1] = 2;

	Task_sleep(1);

	/*
	*	In vanilla, this variable was set in the STAGE.BIN overlays
	*	These overlays are no longer used and it only needs to be set here once
	*/
	G.pXa_sector = (USHORT*)pXasTable;

	Menu.Func_no = BOOT_MENU_LOGO;
}
VOID Boot_Logo(VOID)
{
	//Init_movie_work(0);
	//while ((G.System_flg & SYS_STR_MOVIE) != 0) { Task_sleep(1); }

	SetGeomOffset(160, 120);

	Main.Padoff_stop_flg[0][1] = 1;

#if COPYRIGHT_ON_BOOT
	Main.Scrl_type = 0;

	Bg_set_mode(2, 0);

	for (INT Timer = 360; Timer != 0; Timer--)
	{
		Print8(0x11, 0x6C, NULL, NULL, (UCHAR*)"All rights, including the copyrights");
		Print8(0x11, 0x74, NULL, NULL, (UCHAR*)"of game, scenario, music and program");
		Print8(0x11, 0x7C, NULL, NULL, (UCHAR*)"are reserved by CAPCOM Co., Ltd.");
		Task_sleep(1);
	}

	for (INT Timer = 60; Timer != 0; Timer--) { Task_sleep(1); }
#endif

	Main.Scrl_type = 1;

#if WARNING_ON_BOOT
	Bg_set_mode(0, 0);

	while (Cd_read(GWARNING_TIM, (ULONG*)TIMFile, 0, 0) == 0xFFFFFFFF) {}

	FadeIn();

	for (INT Timer = 240; Timer != 0; Timer--) { Task_sleep(1); }

	FadeOut();

	for (INT Timer = 60; Timer != 0; Timer--) { Task_sleep(1); }
#endif

	Bg_set_mode(0, 0);

	while (Cd_read(TIT_BG_TIM, (ULONG*)TIMFile, 0, 0) == 0xFFFFFFFF) { }

	FadeIn();

	Main.Padoff_stop_flg[0][1] = 0;

	G.pFree_work = (UCHAR*)0x8011A000;		// This is specifically set for Sound Test (*.bgm) and INIT_TBL.DAT, but could be used for anything

	Menu.Func_no = BOOT_MENU_TITLE;
}
VOID Boot_Title(VOID)
{
	INT iSelection = Menu.Cursor_main;
	INT iTimer = 0;

	ResetPad();

#if DEBUG_QUICK_LOAD
	Menu.Func_no = BOOT_MENU_ROOM_JUMP;
	return;
#endif

	do {

		if (iTimer > 1800)
		{
			FadeOut();
			G.System_flg |= SYS_DEMO_MODE;
			Menu.Func_no = BOOT_MENU_EXIT;
			break;
		}

		Print(CalcPrintX(8), 0x70, iSelection == 0 ? PRINT_GREEN : PRINT_GREY, NULL, (UCHAR*)"New Game");
		Print(CalcPrintX(9), 0x80, iSelection == 1 ? PRINT_GREEN : PRINT_GREY, NULL, (UCHAR*)"Load Game");
		Print(CalcPrintX(12), 0x90, iSelection == 2 ? PRINT_GREEN : PRINT_GREY, NULL, (UCHAR*)"Configuration");
		Print(CalcPrintX(10), 0xA0, iSelection == 3 ? PRINT_GREEN : PRINT_GREY, NULL, (UCHAR*)"Sound Test");
		Print(CalcPrintX(9), 0xB0, iSelection == 4 ? PRINT_GREEN : PRINT_GREY, NULL, (UCHAR*)"Copyright");
		Print8(0x65, 0xD0, PRINT_GREY, NULL, (UCHAR*)BuildDate);

		if (G.Padd1_trg & PAD_UP)
		{
			Snd_se_stad(SOUND_CORE_CURSOR, NULL);
			MenuCursor(iSelection, 0, 4, FALSE);
		}
		if (G.Padd1_trg & PAD_DOWN)
		{
			Snd_se_stad(SOUND_CORE_CURSOR, NULL);
			MenuCursor(iSelection, 0, 4, TRUE);
		}
		if (G.Padd1_trg & PAD_CONFIRM)
		{
			Menu.Cursor_main = iSelection;

			// Vibration
			FUN_8003947c(7, 0);
			FUN_80039514(9, 0xFF, 0);
			FUN_800395b8(4, 0xFF, 0x3C, 10);

			Snd_se_stad(SOUND_CORE_CONFIRM, NULL);

			if (iSelection == 0) { break; }
			if (iSelection == 1) { break; }
			if (iSelection == 2) { break; }
			if (iSelection == 3) { break; }
			if (iSelection == 4)
			{
				FadeOut();
				Main.Scrl_type = 0;
				for (INT Timer = 360; Timer != 0; Timer--)
				{
					Print8(0x11, 0x6C, NULL, NULL, (UCHAR*)"All rights, including the copyrights");
					Print8(0x11, 0x74, NULL, NULL, (UCHAR*)"of game, scenario, music and program");
					Print8(0x11, 0x7C, NULL, NULL, (UCHAR*)"are reserved by CAPCOM Co., Ltd.");
					Task_sleep(1);
				}
				Main.Scrl_type = 1;
				Bg_set_mode(0, 0);
				FadeIn();
			}
		}

		iTimer++;

		if (Menu.Func_no == BOOT_MENU_EXIT) { break; }

		Task_sleep(1);

	} while (true);

	if (Menu.Func_no != BOOT_MENU_EXIT)
	{
		switch (iSelection)
		{
		case 0:
			Menu.Func_no = BOOT_MENU_NEW;
			break;
		case 1:
			Menu.Func_no = BOOT_MENU_LOAD;
			break;
		case 2:
			Menu.Func_no = BOOT_MENU_CONFIG;
			break;
		case 3:
			Menu.Func_no = BOOT_MENU_SOUND;
			break;
		default:
			Menu.Func_no = BOOT_MENU_TITLE;
			break;
		}
	}

}
VOID Boot_New(VOID)
{
#if _DEBUG
	Menu.Func_no = BOOT_MENU_DEBUG;
	return;
#endif

	// place holder
	Menu.Func_no = BOOT_MENU_DEBUG;
}
VOID Boot_Load(VOID)
{
	Menu.Func_no = BOOT_MENU_TITLE;
}
VOID Boot_Option(VOID)
{
	Menu.Func_no = BOOT_MENU_TITLE;
}
VOID Boot_Config(VOID)
{
	Menu.Func_no = BOOT_MENU_TITLE;
}
VOID Boot_Sound(VOID)
{
	INT iSelection = 0;
	ULONG bDataReady = 0;

	pBgm = (BGMCTR*)pBgmTable;

	INT iMain = pBgm->Main = 0xFF;
	INT iSub = pBgm->Sub = 0xFF;

	G.SaveData.Stage_no = 0;
	G.SaveData.Room_no = 0;

	ResetPad();

	do {

		Print8(0x80, 0xA0, iSelection == 0 ? PRINT_GREEN : PRINT_GREY, NULL, (UCHAR*)"MAIN");			Print8(0xB8, 0xA0, PRINT_GREY, NULL, (UCHAR*)itox(iMain, (CHAR*)ItoxBuffer, 2));
		Print8(0x84, 0xA8, iSelection == 1 ? PRINT_GREEN : PRINT_GREY, NULL, (UCHAR*)"SUB");			Print8(0xB8, 0xA8, PRINT_GREY, NULL, (UCHAR*)itox(iSub, (CHAR*)ItoxBuffer, 2));
		Print8(0x88, 0xB8, PRINT_GREY, NULL, (UCHAR*)"\x7b Play");
		Print8(0x88, 0xC0, PRINT_GREY, NULL, (UCHAR*)"\x7c Null");
		Print8(0x88, 0xC8, PRINT_GREY, NULL, (UCHAR*)"\x7d Stop");
		Print8(0x88, 0xD0, PRINT_GREY, NULL, (UCHAR*)"\x60 Exit");

		if (G.Padd1_trg & PAD_LEFT)
		{
			if (iSelection == 0) { MenuCursor(iMain, 0x00, 0x3F, FALSE); }
			if (iSelection == 1) { MenuCursor(iSub, 0x00, 0x3F, FALSE); }
		}
		if (G.Padd1_trg & PAD_RIGHT)
		{
			if (iSelection == 0) { MenuCursor(iMain, 0x00, 0x3F, TRUE); }
			if (iSelection == 1) { MenuCursor(iSub, 0x00, 0x3F, TRUE); }
		}
		if (G.Padd1_trg & PAD_UP)
		{
			Snd_se_stad(SOUND_CORE_CURSOR, NULL);
			MenuCursor(iSelection, 0, 1, FALSE);
		}
		if (G.Padd1_trg & PAD_DOWN)
		{
			Snd_se_stad(SOUND_CORE_CURSOR, NULL);
			MenuCursor(iSelection, 0, 1, TRUE);
		}
		if (G.Padd1_trg & PAD_CONFIRM)
		{
			pBgm->Main = (UCHAR)iMain;
			pBgm->Sub = (UCHAR)iSub;
			bDataReady = TRUE;
		}
		if (G.Padd1_trg & PAD_TRIANGLE)
		{
			pBgm->Main = Bgm.Main = iMain = 0xFF;
			pBgm->Sub = Bgm.Sub = iSub = 0xFF;
			bDataReady = TRUE;
		}
		if (G.Padd1_trg & PAD_CIRCLE)
		{
			pBgm->Main = Bgm.Main = 0xFF;
			pBgm->Sub = Bgm.Sub = 0xFF;
			bDataReady = TRUE;
		}
		if (G.Padd1_trg & PAD_CANCEL)
		{
			pBgm->Main = Bgm.Main = 0xFF;
			pBgm->Sub = Bgm.Sub = 0xFF;
			Menu.Func_no = BOOT_MENU_TITLE;
			bDataReady = TRUE;
			break;
		}

		if (bDataReady)
		{
			bDataReady = FALSE;
			Snd_bgm_ck();
			Snd_bgm_set();
			Snd_bgm_play_ck();
		}

		Task_sleep(1);

	} while (true);

}
VOID Boot_Exit(VOID)
{
	FadeOut();
	Task_chain(Game_loop);
}

VOID Boot_File_System(VOID)
{
	USHORT* pSector = NULL;
	USHORT Sector = NULL;
	USHORT Sec_high = NULL;
	USHORT* File_no = NULL;

	// Establish Dynamic Pointers
	CdxLbaBss = (pFileIndex + (BSS01_CDX * 8));
	CdxLbaDo2 = (pFileIndex + (DO2_CDX * 8));
	CdxLbaEmd0 = (pFileIndex + (EMD00_CDX * 8));
	CdxLbaEmd1 = (pFileIndex + (EMD01_CDX * 8));
	CdxLbaPld = (pFileIndex + (PLD_CDX * 8));
	CdxLbaPlw = (pFileIndex + (PLW00_CDX * 8));
	CdxLbaSndArms = (pFileIndex + (SNDARMS_CDX * 8));
	CdxLbaSndCore = (pFileIndex + (SNDCORE_CDX * 8));
	CdxLbaSndEmd = (pFileIndex + (SNDEMD_CDX * 8));
	CdxLbaSndMain = (pFileIndex + (SNDMAIN_CDX * 8));
	CdxLbaSndSub = (pFileIndex + (SNDSUB_CDX * 8));
	CdxLbaRdt = (pFileIndex + (STG0001_CDX * 8));

	// Load and parse essential CDX headers
	CdReadEx(*(ULONG*)(CdxLbaDo2 + 4), 0x200, (ULONG*)pDo2Index, 64);
	CdReadEx(*(ULONG*)(CdxLbaPld + 4), 0x100, (ULONG*)pPldIndex, 32);
	CdReadEx(*(ULONG*)(CdxLbaSndArms + 4), 0x140, (ULONG*)pSndArmsIndex, 40);
	CdReadEx(*(ULONG*)(CdxLbaSndCore + 4), 0x160, (ULONG*)pSndCoreIndex, 44);
	CdReadEx(*(ULONG*)(CdxLbaSndMain + 4), 0x200, (ULONG*)pSndMainIndex, 64);
	CdReadEx(*(ULONG*)(CdxLbaSndSub + 4), 0x200, (ULONG*)pSndSubIndex, 64);

	// CDEMD0
	Sector = (((EMD00_CDX * 8) + (pFileIndex ^ 0x80000000)) + 4);
	Sec_high = (((EMD00_CDX * 8) + (pFileIndex ^ 0x80000000)) + 6);
	pSector = (USHORT*)0x8001B89C;		// Em_bin_load
	*(USHORT*)pSector = Sector;
	pSector = (USHORT*)0x8001B8E4;		// Em_bin_load
	*(USHORT*)pSector = Sec_high;
	//pSector = (USHORT*)0x8001B9F4;		// Function @ 0x8001B934
	//*(USHORT*)pSector = Sector;
	//pSector = (USHORT*)0x8001B9EC;		// Function @ 0x8001B934
	//*(USHORT*)pSector = Sec_high;
	File_no = (USHORT*)0x8001B86C;		// Em_bin_load
	*(USHORT*)File_no = EMD00_CDX;
	File_no = (USHORT*)0x8001B90C;		// Em_bin_load
	*(USHORT*)File_no = EMD00_CDX;
	//File_no = (USHORT*)0x8001B960;		// Function @ 0x8001B934
	//*(USHORT*)File_no = EMD00_CDX;
	//File_no = (USHORT*)0x8001B990;		// Function @ 0x8001B934
	//*(USHORT*)File_no = EMD00_CDX;
	//File_no = (USHORT*)0x8001B9AC;		// Function @ 0x8001B934
	//*(USHORT*)File_no = EMD00_CDX;

	// CDEMD1
	//Sector = (((EMD01_CDX * 8) + (pFileIndex ^ 0x80000000)) + 4);
	//Sec_high = (((EMD01_CDX * 8) + (pFileIndex ^ 0x80000000)) + 6);
	//pSector = (USHORT*)0x8001BA78;		// Function @ 0x8001B934
	//*(USHORT*)pSector = Sector;
	//pSector = (USHORT*)0x8001BA70;		// Function @ 0x8001B934
	//*(USHORT*)pSector = Sec_high;
	//File_no = (USHORT*)0x8001B974;		// Function @ 0x8001B934
	//*(USHORT*)File_no = EMD01_CDX;
	//File_no = (USHORT*)0x8001B98c;		// Function @ 0x8001B934
	//*(USHORT*)File_no = EMD01_CDX;
	//File_no = (USHORT*)0x8001Ba2c;		// Function @ 0x8001B934
	//*(USHORT*)File_no = EMD01_CDX;

	// EMD Sound
	Sector = (((SNDEMD_CDX * 8) + (pFileIndex ^ 0x80000000)) + 4);
	Sec_high = (((SNDEMD_CDX * 8) + (pFileIndex ^ 0x80000000)) + 6);
	pSector = (USHORT*)0x8005A164;		// Snd_sys_enem_set
	*(USHORT*)pSector = Sector;
	pSector = (USHORT*)0x8005A290;		// Snd_sys_enem_set
	*(USHORT*)pSector = Sector;
	pSector = (USHORT*)0x8005A15C;		// Snd_sys_enem_set
	*(USHORT*)pSector = Sec_high;
	pSector = (USHORT*)0x8005A288;		// Snd_sys_enem_set
	*(USHORT*)pSector = Sec_high;
	File_no = (USHORT*)0x8005A128;		// Snd_sys_enem_set
	*(USHORT*)File_no = SNDEMD_CDX;
	File_no = (USHORT*)0x8005A14c;		// Snd_sys_enem_set
	*(USHORT*)File_no = SNDEMD_CDX;
	File_no = (USHORT*)0x8005A228;		// Snd_sys_enem_set
	*(USHORT*)File_no = SNDEMD_CDX;
	File_no = (USHORT*)0x8005A278;		// Snd_sys_enem_set
	*(USHORT*)File_no = SNDEMD_CDX;

}

#if _DEBUG
VOID Boot_Debug(VOID)
{
	INT iSelection = 0;

	INT iPlayer = G.Player.Id;
	INT iDisk = SysDisk;
	INT iScenario = SysScenario;
	INT iController = SysController;
	INT iLanguage = SysLanguage;
	INT iAutoAim = !((DebugFlag & DEBUG_AUTO_AIM) != DEBUG_AUTO_AIM);
	INT iWeapon = DebugValue;

	ResetPad();

	Fade_set(0x200, 0x400, 7, 0);

	do {

		Fade_adjust(0, 0x7C00, 0, 0);

		Print(0x30, 0x30, iSelection == 0 ? PRINT_GREEN : PRINT_GREY, NULL, (UCHAR*)"Player");			Print(0xA0, 0x30, PRINT_GREY, NULL, (UCHAR*)PlayerStr[iPlayer]);
		Print(0x30, 0x40, iSelection == 1 ? PRINT_GREEN : PRINT_GREY, NULL, (UCHAR*)"Weapon");			Print(0xA0, 0x40, PRINT_GREY, NULL, (UCHAR*)WeaponStr[iWeapon]);
		Print(0x30, 0x50, iSelection == 2 ? PRINT_GREEN : PRINT_GREY, NULL, (UCHAR*)"Language");		Print(0xA0, 0x50, PRINT_GREY, NULL, (UCHAR*)LanguageStr[iLanguage]);
		Print(0x30, 0x60, iSelection == 3 ? PRINT_GREEN : PRINT_GREY, NULL, (UCHAR*)"Controller");		Print(0xA0, 0x60, PRINT_GREY, NULL, (UCHAR*)ControllerStr[iController]);
		Print(0x30, 0x70, iSelection == 4 ? PRINT_GREEN : PRINT_GREY, NULL, (UCHAR*)"Auto Aim");		Print(0xA0, 0x70, PRINT_GREY, NULL, (UCHAR*)OnOffStr[iAutoAim]);
		Print(0x30, 0x80, iSelection == 5 ? PRINT_GREEN : PRINT_GREY, NULL, (UCHAR*)"Scenario");		Print(0xA0, 0x80, PRINT_GREY, NULL, (UCHAR*)ScenarioStr[iScenario]);
		Print(0x30, 0x90, iSelection == 6 ? PRINT_GREEN : PRINT_GREY, NULL, (UCHAR*)"Disk");			Print(0xA0, 0x90, PRINT_GREY, NULL, (UCHAR*)DiskStr[iDisk]);
		Print8(0x7C, 0xC8, PRINT_GREY, NULL, (UCHAR*)"\x7B Confirm");
		Print8(0x80, 0xD0, PRINT_GREY, NULL, (UCHAR*)"\x60 Cancel");

		if ((iSelection == 5) && (iScenario == 2))
		{
			Print8(0x80, 0xC0, PRINT_GREY, NULL, (UCHAR*)"L1/R1 L2/R2 Timer");
		}

		if (G.Padd1_trg & PAD_UP)
		{
			Snd_se_stad(SOUND_CORE_CURSOR, NULL);
			MenuCursor(iSelection, 0, 6, FALSE);
		}
		if (G.Padd1_trg & PAD_DOWN)
		{
			Snd_se_stad(SOUND_CORE_CURSOR, NULL);
			MenuCursor(iSelection, 0, 6, TRUE);
		}
		if (G.Padd1_trg & PAD_LEFT)
		{
			if (iSelection == 0) { MenuCursor(iPlayer, 0x00, 0x0F, FALSE); }
			if (iSelection == 1) { MenuCursor(iWeapon, 0x00, 0x13, FALSE); }
			if (iSelection == 2) { MenuCursor(iLanguage, 0x00, 0x01, FALSE); }
			if (iSelection == 3) { MenuCursor(iController, 0x00, 0x01, FALSE); }
			if (iSelection == 4) { MenuCursor(iAutoAim, 0x00, 0x01, FALSE); }
			if (iSelection == 5) { MenuCursor(iScenario, 0x00, 0x03, FALSE); }
			if (iSelection == 6) { MenuCursor(iDisk, 0x00, 0x02, FALSE); }
		}
		if (G.Padd1_trg & PAD_RIGHT)
		{
			if (iSelection == 0) { MenuCursor(iPlayer, 0x00, 0x0F, TRUE); }
			if (iSelection == 1) { MenuCursor(iWeapon, 0x00, 0x13, TRUE); }
			if (iSelection == 2) { MenuCursor(iLanguage, 0x00, 0x01, TRUE); }
			if (iSelection == 3) { MenuCursor(iController, 0x00, 0x01, TRUE); }
			if (iSelection == 4) { MenuCursor(iAutoAim, 0x00, 0x01, TRUE); }
			if (iSelection == 5) { MenuCursor(iScenario, 0x00, 0x03, TRUE); }
			if (iSelection == 6) { MenuCursor(iDisk, 0x00, 0x02, TRUE); }
		}
		if (G.Padd1_trg & PAD_CONFIRM)
		{
			Snd_se_stad(SOUND_CORE_CONFIRM, NULL);
			Menu.Func_no = BOOT_MENU_ROOM_JUMP;
			break;
		}
		if (G.Padd1_trg & PAD_CANCEL)
		{
			Snd_se_stad(SOUND_CORE_CANCEL, NULL);
			FadeIn();
			Menu.Func_no = BOOT_MENU_TITLE;
			break;
		}

		Task_sleep(1);

	} while (true);

	G.Player.Id = (UCHAR)iPlayer;
	SysDisk = (UCHAR)iDisk;
	SysLanguage = (UCHAR)iLanguage;
	SysScenario = (UCHAR)iScenario;
	SysController = (UCHAR)iController;
	if (iAutoAim) { DebugFlag |= DEBUG_AUTO_AIM; }
	DebugValue = iWeapon;

}

VOID Boot_Room_Jump(VOID)
{
	Task_lexecute(2, LOAD_TASK_ROOM_JUMP);
	while (Task_status(2) != 0) { Task_sleep(1); }

	if (DebugFlag & DEBUG_AREA_JUMP)
	{
		DebugFlag ^= DEBUG_AREA_JUMP;

		/*
		*	Vanilla save data is loaded here for two reasons:
		*	1. Maintain compatibility with the original game
		*	2. G.SaveData structure is modified in Room Jump function
		*/

		SHORT Stage_no = G.SaveData.Stage_no;
		SHORT Room_no = G.SaveData.Room_no;

		ULONG Pointer = 0;

		switch (SysScenario)
		{
		case 0:
			Pointer = 0x00;
			//if ((G.Player.Id != 0) && ((G.Player.Id % 2) != 0))
			if (((G.Player.Id & 1) != 0) && (G.Player.Id != 0x0B) && (G.Player.Id != 0x0C) && (G.Player.Id != 0x0D) || (G.Player.Id == 0x0E))
			{
				Pointer = 0x3CC;
			}
			break;
		case 1:
			Pointer = 0x1E6;
			//if ((G.Player.Id != 0) && ((G.Player.Id % 2) != 0))
			if (((G.Player.Id & 1) != 0) && (G.Player.Id != 0x0B) && (G.Player.Id != 0x0C) && (G.Player.Id != 0x0D) || (G.Player.Id == 0x0E))
			{
				Pointer = 0x5B2;
			}
			break;
		case 2:
			Pointer = 0x798;	//  (0x1E60 / 4);
			break;
		case 3:
			Pointer = 0x97E;
			break;
		}

		while (Cd_read(INIT_TBL_DAT, (ULONG*)G.pFree_work, 0, 0) == 0xFFFFFFFF) {}
		memcpy16((ULONG*)&G.SaveData.Card_Head, (ULONG*)G.pFree_work + Pointer, 0x798);

		G.SaveData.Stage_no = Stage_no;
		G.SaveData.Room_no = Room_no;
		G.SaveData.Cut_no = 0;
		G.SaveData.Room_no_old = G.SaveData.Room_no | ((G.SaveData.Stage_no + 1) << 8);

		Menu.Func_no = BOOT_MENU_EXIT;
	}
	else
	{
		Menu.Func_no = BOOT_MENU_DEBUG;
	}

}
#endif