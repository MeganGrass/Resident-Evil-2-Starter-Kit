/*
*
*	Megan Grass
*	March 27, 2014
* 
*/

#include "ROOMJUMP.H"

MENU_WORK Menu;

VOID Room_Jump(VOID)
{
	Menu.Wnd_x = 24;
	Menu.Wnd_y = 72;
	Menu.Wnd_w = 272;
	Menu.Wnd_h = 112;
	Menu.Wnd_col = 0xFF;

	if (DebugFlag & DEBUG_AREA_JUMP) { DebugFlag ^= DEBUG_AREA_JUMP; }

	do {
		(*Room_jump_tbl[Menu.Func_no].func)();
		Task_sleep(1);
	} while (true);

	Task_exit();
}

VOID Debug_Draw_Window(VOID)
{
	AddPrim(G.pOt0 + 1, &Pause[G.Cbuf_id]);
	AddPrim(G.pOt0 + 1, &Main.Db[G.Cbuf_id].Pause_Dm);
	Menu.Fade[G.Cbuf_id].w = Menu.Wnd_w;
	Menu.Fade[G.Cbuf_id].h = Menu.Wnd_h;
	Menu.Fade[G.Cbuf_id].x0 = Menu.Wnd_x;
	Menu.Fade[G.Cbuf_id].y0 = Menu.Wnd_y;
	Menu.Fade[G.Cbuf_id].r0 = (UCHAR)(Menu.Wnd_col >> 1);
	Menu.Fade[G.Cbuf_id].g0 = (UCHAR)(Menu.Wnd_col >> 1);
	Menu.Fade[G.Cbuf_id].b0 = (UCHAR)(Menu.Wnd_col >> 2);
	SetTile(&Menu.Fade[G.Cbuf_id]);
	SetSemiTrans(&Menu.Fade[G.Cbuf_id], 1);
	SetDrawMode(&Menu.Dm[G.Cbuf_id], 1, 0, 0x40, 0);
	AddPrim(&G.Ot0[G.Cbuf_id][4], &Menu.Fade[G.Cbuf_id]);
	AddPrim(&G.Ot0[G.Cbuf_id][4], &Menu.Dm[G.Cbuf_id]);
}

VOID Room_Jump_Menu(VOID)
{
	INT iStage = G.SaveData.Stage_no;
	INT iRoom = G.SaveData.Room_no;
	INT iSelection = 0;

	ResetPad();

	do {

		Debug_Draw_Window();

		Print8(0x6C, 0x50, 0, 3, (UCHAR*)"- ROOM JUMP -");

		Print8(0x20, 0x60, iSelection == 0 ? PRINT_GREEN : PRINT_GREY, 3, (UCHAR*)"STAGE");		Print8(0x50, 0x60, 0, 3, (UCHAR*)itox((iStage + 1), (CHAR*)ItoxBuffer, 1));
		Print8(0x20, 0x68, iSelection == 1 ? PRINT_GREEN : PRINT_GREY, 3, (UCHAR*)"ROOM");		Print8(0x50, 0x68, 0, 3, (UCHAR*)itox(iRoom, (CHAR*)ItoxBuffer, 2));
		Print8(0x20, 0x78, 0, 3, (UCHAR*)"ROOM");
		Print8(0x40, 0x78, 0, 3, (UCHAR*)itox((iStage + 1), (CHAR*)ItoxBuffer, 1));
		Print8(0x48, 0x78, 0, 3, (UCHAR*)itox(iRoom, (CHAR*)ItoxBuffer, 2));
		SysDisk != 2 ? Print8(0x58, 0x78, 0, 3, (UCHAR*)itox(SysDisk, (CHAR*)ItoxBuffer, 1)) : 0;
		SysDisk != 2 ? Print8(0x60, 0x78, 0, 3, (UCHAR*)".RDT") : Print8(0x58, 0x78, 0, 3, (UCHAR*)".RDT");

		// This string requires 256 pixels (max)
		Print8(0x20, 0x88, PRINT_BLUE, NULL, (UCHAR*)ROOM_INFO[iStage][iRoom].Name);

		if (G.Padd1_trg & PAD_UP) { MenuCursor(iSelection, 0, 1, FALSE); }
		if (G.Padd1_trg & PAD_DOWN) { MenuCursor(iSelection, 0, 1, TRUE); }
		if (G.Padd1_trg & PAD_LEFT)
		{
			if (iSelection == 0) { MenuCursor(iStage, 0, 6, FALSE); }
			if (iSelection == 1) { MenuCursor(iRoom, 0, 0x2F, FALSE); }
		}
		if (G.Padd1_trg & PAD_RIGHT)
		{
			if (iSelection == 0) { MenuCursor(iStage, 0, 6, TRUE); }
			if (iSelection == 1) { MenuCursor(iRoom, 0, 0x2F, TRUE); }
		}
		if (G.Padd1_trg & PAD_CANCEL)
		{
			break;
		}
		if (G.Padd1_trg & PAD_CONFIRM)
		{
			G.SaveData.Stage_no = (SHORT)iStage;
			G.SaveData.Room_no = (SHORT)iRoom;

			if ((ROOM_INFO[G.SaveData.Stage_no][G.SaveData.Room_no].Cdir_y == 0) &&
				(ROOM_INFO[G.SaveData.Stage_no][G.SaveData.Room_no].Pos_x == 0) &&
				(ROOM_INFO[G.SaveData.Stage_no][G.SaveData.Room_no].Pos_z == 0) &&
				(ROOM_INFO[G.SaveData.Stage_no][G.SaveData.Room_no].nFloor == 0) &&
				(*(UCHAR*)ROOM_INFO[G.SaveData.Stage_no][G.SaveData.Room_no].Name[0] == 0)) { }
			else
			{
				G.Player.Pos_x = G.Player.Old_x = ROOM_INFO[G.SaveData.Stage_no][G.SaveData.Room_no].Pos_x; // (G.pSce_aot_on)->Next_pos_x;
				G.Player.Pos_y = G.Player.Old_y = (ROOM_INFO[G.SaveData.Stage_no][G.SaveData.Room_no].nFloor * -1800); //(G.pSce_aot_on)->Next_pos_y;
				G.Player.Pos_z = G.Player.Old_z = ROOM_INFO[G.SaveData.Stage_no][G.SaveData.Room_no].Pos_z; //(G.pSce_aot_on)->Next_pos_z;
				G.Player.Cdir_y = ROOM_INFO[G.SaveData.Stage_no][G.SaveData.Room_no].Cdir_y; //(G.pSce_aot_on)->Next_cdir_y;
				G.Player.nFloor = ROOM_INFO[G.SaveData.Stage_no][G.SaveData.Room_no].nFloor; //(G.pSce_aot_on)->Next_nfloor;
				G.Player.Ground = (SHORT)G.Player.nFloor * -1800;
				G.Next_cut_no = 0; //(G.pSce_aot_on)->Next_cut;
				G.SaveData.Room_no_old = G.SaveData.Room_no | ((G.SaveData.Stage_no + 1) << 8);
				G.SaveData.Cut_no = G.Next_cut_no;
				//G.SaveData.Room_no = (G.pSce_aot_on)->Next_room;
				G.Player.Sca_old_x = G.Player.Old_x;
				G.Player.Sca_old_z = G.Player.Old_z;
				DebugFlag |= DEBUG_AREA_JUMP;
				break;
			}
		}

		Task_sleep(1);

	} while (true);

	Task_exit();
}