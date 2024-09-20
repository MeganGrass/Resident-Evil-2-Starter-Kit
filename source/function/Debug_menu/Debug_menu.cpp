/*
*
*	Megan Grass
*	March 27, 2014
* 
*/

#include "..\\..\\BIO2\\BIO2.H"

#include "..\\..\\CUSTOM\\CUSTOM.H"

VOID Debug_Weapon(USHORT G_Padd1Trg);

VOID Debug_Menu(VOID)
{

	Sce_scheduler();

#if _DEBUG

#if DEBUG_INF_HEALTH
	G.Player.Life = G.Player.Max_life;
	G.Pl_poison_timer = 0;
	G.Pl_poison_down = 0;
#endif

	(DebugFlag & DEBUG_PRINT_CUT) ? Print8(0x08, 0x08, PRINT_GREY, 0, (UCHAR*)"Cut %d", G.SaveData.Cut_no) : 0;
	(DebugFlag & DEBUG_PRINT_PLPOS) ? Print8(0x08, 0x10, PRINT_GREY, 0, (UCHAR*)"Pos %d/%d/%d", G.Player.Pos_x, G.Player.Pos_y, G.Player.Pos_z) : 0;
	(DebugFlag & DEBUG_PRINT_PLROT) ? Print8(0x08, 0x18, PRINT_GREY, 0, (UCHAR*)"Rot %d/%d/%d", G.Player.Cdir_x, G.Player.Cdir_y, G.Player.Cdir_z) : 0;

	if ((G.Padd1_trg & (PAD_L2 | PAD_R2)) != 0)
	{
		Debug_Weapon(G.Padd1_trg);
		return;
	}

	if ((G.Padd1_trg & PAD_ANTI_FREEZE) == PAD_ANTI_FREEZE)
	{
		G.Stop_flg = 0;
		Stop_bak = 0;
		return;
	}

	if ((G.Padd1_trg & PAD_DEBUG) != 0)
	{
		UCHAR OldStageNo = G.SaveData.Stage_no;

		ULONG StopFlgBak = G.Stop_flg;

		//G.Stop_flg |= 0xFF000000;	// Debug_menu method from Bio2 beta
		G.Stop_flg |= 0xFFFF0000;	// Message_on method for displaying in-game messages from retail

		if (DebugFlag & DEBUG_AREA_JUMP) { DebugFlag ^= DEBUG_AREA_JUMP; }
		if (DebugFlag & DEBUG_MOVIE_TEST) { DebugFlag ^= DEBUG_MOVIE_TEST; }
		if (DebugFlag & DEBUG_MESSAGE_TEST) { DebugFlag ^= DEBUG_MESSAGE_TEST; }
		if (DebugFlag & DEBUG_EVENT_TEST) { DebugFlag ^= DEBUG_EVENT_TEST; }

		Task_lexecute(2, LOAD_TASK_DEBUG);
		while (Task_status(2) != 0) { Task_sleep(1); }

		if ((DebugFlag & (DEBUG_AREA_JUMP | DEBUG_MOVIE_TEST | DEBUG_MESSAGE_TEST | DEBUG_EVENT_TEST)) == 0)
		{
			Pl_set_packet();
			G.Stop_flg = StopFlgBak;
			return;
		}

		if (DebugFlag & DEBUG_AREA_JUMP)
		{
			DebugFlag ^= DEBUG_AREA_JUMP;

			Fade_set(0x200, 0x400, 7, 0);
			while (Fade_status(0) == 0) { Task_sleep(1); }
			Bg_set_mode(BG_MODE_CLEAR, 0x00000000);

			G.pSce_aot_on = 0;

			FUN_80039694();		// resets pad state for Set_door() function

			UCHAR StageChanged = FALSE;

			if (G.SaveData.Stage_no != OldStageNo)
			{
				Set_stage();
				G.Dummy8[0] = 0xFF;		// ensures dynamic stage font textures are loaded in Set_room (not done Set_stage because call to Pl_set_packet is required -- no point doing that until room is set)
				StageChanged = TRUE;	// even if the stage didn't change, the debug.bin overlay corrupted memory for the player model; call Pl_set_packet to be safe
			}
			else
			{
				G.Dummy8[0] = (UCHAR)G.SaveData.Stage_no;
			}

			while ((G.Status_flg & 0x20000) != 0)		// need to figure out what this flag is
			{
				Task_sleep(1);
			}

			Snd_bgm_ck();
			Kage_work_init();
			Kage_work9_init();
			Set_room();

			if (!StageChanged) { Pl_set_packet(); }

			Bg_set_mode(0, 0);
			Cut_check(1);
			Main.Bg_chg_flg = 1;
			//Task_sleep(1);		// not sure that this is necessary

			if ((G.Status_flg & 0x400000) != 0)		// need to figure out what this flag is and what's going on here
			{
				Bg_set_mode(2, 0);
				G.Status_flg &= 0x400000;
			}
			else
			{
				Fade_set(0x200, -0xFFF, 7, 1);
			}
		}
		else
		{
			// the debug.bin overlay corrupted memory for the player model and Pl_set_packet wasn't called because room jump wasn't used
			Pl_set_packet();
		}

		if (DebugFlag & DEBUG_MESSAGE_TEST)
		{
			DebugFlag ^= DEBUG_MESSAGE_TEST;
			Mess_set(0, 0x300, DebugValue, 0);
			Moji.Stop_keep = StopFlgBak;		// backup of G.Stop_flg that gets stored in Mess_set and restored in Mess_disp after the message is completely displayed	// edited from 0 to StopFlgBak, problems? Yes, if the player used FLAG edit
		}
		else
		{
			//G.Stop_flg ^= 0xFF000000;	// Debug_menu method from Bio2 beta
			G.Stop_flg ^= 0xFFFF0000;	// Message_on method for displaying in-game messages from retail
		}

		if (DebugFlag & DEBUG_EVENT_TEST)
		{
			DebugFlag ^= DEBUG_EVENT_TEST;
			Event_exec(0xFF, DebugValue);
		}

		return;
	}

#endif

}

#if _DEBUG
VOID Debug_Weapon(USHORT G_Padd1Trg)
{
	St.Equip_item_no = 0x80;
	St.Equip_item_no_old = 0x80;
	St.Equip_item_id = 0;
	St.Equip_item_id_old = 0;

	ULONG Size = 0;
	ULONG pSize = 0;
	UCHAR Weapon = G.Player.Type;

	do {

		if (G_Padd1Trg == PAD_L2)
		{
			if (Weapon == 0x00) { Weapon = 0x13; }
			else { Weapon--; }
		}
		else if (G_Padd1Trg == PAD_R2)
		{
			if (Weapon == 0x13) { Weapon = 0x00; }
			else { Weapon++; }
		}

		pSize = (pPlwIndex + (Weapon * 8));

		Size = *(ULONG*)pSize;

		if (Size != 0) { break; }

	} while (true);

	G.SaveData.Item_work[0].Id = Weapon;
	G.SaveData.Item_work[0].Num = Item_data_tbl[Weapon].Item_max;
	G.SaveData.Item_work[0].Size = 0;

	G.Player.Type = G.Player.Type & 0xF000 | (USHORT)Weapon;

	if (Weapon == 0)
	{
		St.Equip_item_no = 0x80;
		St.Equip_item_id = 0;
	}
	else
	{
		St.Equip_item_no = (UCHAR)Search_item_id((ULONG)Weapon);
		St.Equip_item_id = Weapon;
	}

	Weapon_cls((ENEMY_WORK*)&G.Player);

	Pl_weapon_ch((ENEMY_WORK*)&G.Player);

	Pl_set_packet();

	if (G.Player.Type != 0)
	{
		if ((G.System_flg & SYS_SPAD_STACK) != 0)
		{
			SetSpadStack2();
			Snd_sys_arms_set((UCHAR)G.Player.Type);
			ResetSpadStack2();
		}
		else
		{
			Snd_sys_arms_set((UCHAR)G.Player.Type);
		}
	}

}
VOID Debug_Status(ULONG type)
{
	if (St.Mcursol0 != 2)
	{
		St_disp_cursol0(type);
		return;
	}

	if (G.Padd1_trg == PAD_L2)
	{
		if (G.SaveData.Item_work[St.Icursol_main].Id == 0)
		{
			G.SaveData.Item_work[St.Icursol_main].Id = 99;
		}
		else
		{
			G.SaveData.Item_work[St.Icursol_main].Id--;
		}
	}
	else if (G.Padd1_trg == PAD_R2)
	{
		if (G.SaveData.Item_work[St.Icursol_main].Id == 99)
		{
			G.SaveData.Item_work[St.Icursol_main].Id = 0;
		}
		else
		{
			G.SaveData.Item_work[St.Icursol_main].Id++;
		}
	}

	if ((G.Padd1_trg & (PAD_L2 | PAD_R2)) != 0)
	{
		G.SaveData.Item_work[St.Icursol_main].Num = Item_data_tbl[St.Icursol_main].Item_max;

		// Flag the item as collected
#if DEBUG_ITEM_COLLECT
		Flg_on(G.SaveData.Item_c_flg, Item_data_tbl[G.SaveData.Item_work[St.Icursol_main].Id].Item_attribute);
#endif

		// ...displaying the texture slows the process and isn't worth the effort -- it fixes itself on game reload
	}

	St_disp_cursol0(type);
}
#endif