/*
*
*	Megan Grass
*	March 27, 2014
* 
*/

#include "DEBUG.H"

VOID Debug(VOID)
{
	Menu.Wnd_x = 24;
	Menu.Wnd_y = 72;
	Menu.Wnd_w = 272;
	Menu.Wnd_h = 112;
	Menu.Wnd_col = 0xFF;

	do {
		(*Debug_tbl[Menu.Func_no].func)();
		Task_sleep(1);
	} while (true);
}

VOID Debug_Main(VOID)
{
	ResetPad();

	Pad_rep_set(0xF000, 0x105);

	do {

		Debug_Draw_Window();

		Print8(0x68, 0x50, 0, 3, (UCHAR*)"- DEBUG MENU -");
		Print8(0x70, 0x60, Menu.Cursor_main == 0 ? PRINT_GREEN : PRINT_GREY, 3, (UCHAR*)"Room Jump");
		Print8(0x70, 0x68, Menu.Cursor_main == 1 ? PRINT_GREEN : PRINT_GREY, 3, (UCHAR*)"Debug Option");
		Print8(0x70, 0x70, Menu.Cursor_main == 2 ? PRINT_GREEN : PRINT_GREY, 3, (UCHAR*)"Controller Test");
		Print8(0x70, 0x78, Menu.Cursor_main == 3 ? PRINT_GREEN : PRINT_GREY, 3, (UCHAR*)"Sound Test");
		Print8(0x70, 0x80, Menu.Cursor_main == 4 ? PRINT_GREEN : PRINT_GREY, 3, (UCHAR*)"Movie Test");
		Print8(0x70, 0x88, Menu.Cursor_main == 5 ? PRINT_GREEN : PRINT_GREY, 3, (UCHAR*)"Flag Test");
		Print8(0x70, 0x90, Menu.Cursor_main == 6 ? PRINT_GREEN : PRINT_GREY, 3, (UCHAR*)"Event Test");
		Print8(0x70, 0x98, Menu.Cursor_main == 7 ? PRINT_GREEN : PRINT_GREY, 3, (UCHAR*)"Message Test");
		Print8(0x70, 0xA0, Menu.Cursor_main == 8 ? PRINT_GREEN : PRINT_GREY, 3, (UCHAR*)"System Reset");

		if (G.Padd1_trg == PAD_UP) { MenuCursor(Menu.Cursor_main, 0, 8, FALSE); }
		if (G.Padd1_trg == PAD_DOWN) { MenuCursor(Menu.Cursor_main, 0, 8, TRUE); }
		if (G.Padd1_trg == PAD_CONFIRM)
		{
			if ((Menu.Cursor_main >= 0) && (Menu.Cursor_main <= 8))
			{
				Menu.Func_no = (Menu.Cursor_main + 1);
				break;
			}
		}
		if ((G.Padd1_trg == PAD_CANCEL) || (G.Padd1_trg == PAD_DEBUG))
		{
			Menu.Func_no = DEBUG_MENU_EXIT;
		}

		if (Menu.Func_no == DEBUG_MENU_EXIT) { break; }

		Task_sleep(1);

	} while (true);

}
VOID Debug_Room_Jump(VOID)
{
	Task_lchain(LOAD_TASK_ROOM_JUMP);
}
VOID Debug_Option(VOID)
{
	ResetPad();

	do {

		Debug_Draw_Window();

		Print8(0x60, 0x50, 0, 3, (UCHAR*)"- DEBUG OPTION -");

		Print8(0x7C, 0xB8, PRINT_GREY, NULL, (UCHAR*)"\x7b Execute");
		Print8(0x80, 0xC0, PRINT_GREY, NULL, (UCHAR*)"\x60 Cancel");

		if (G.Padd1_trg & PAD_LEFT) {  }
		if (G.Padd1_trg & PAD_RIGHT) {  }
		if (G.Padd1_trg & PAD_CONFIRM)
		{
		}
		if (G.Padd1_trg & PAD_CANCEL)
		{
			Menu.Func_no = DEBUG_MENU_MAIN;
			break;
		}

		Task_sleep(1);

	} while (true);
}
VOID Debug_Controller_Test(VOID)
{
	ResetPad();

	do {

		Debug_Draw_Window();

		Print8(0x3C, 0x50, 0, 3, (UCHAR*)"- CONTROLLER TEST -");

		//Print8(0x7C, 0xB8, PRINT_GREY, NULL, (UCHAR*)"\x7b Execute");
		Print8(0x80, 0xC0, PRINT_GREY, NULL, (UCHAR*)"\x60 Cancel");

		if (G.Padd1_trg & PAD_LEFT) {}
		if (G.Padd1_trg & PAD_RIGHT) {}
		if (G.Padd1_trg & PAD_CONFIRM)
		{
		}
		if (G.Padd1_trg & PAD_CANCEL)
		{
			Menu.Func_no = DEBUG_MENU_MAIN;
			break;
		}

		Task_sleep(1);

	} while (true);
}
VOID Debug_Sound_Test(VOID)
{
	ResetPad();

	do {

		Debug_Draw_Window();

		Print8(0x68, 0x50, 0, 3, (UCHAR*)"- SOUND TEST -");

		//Print8(0x7C, 0xB8, PRINT_GREY, NULL, (UCHAR*)"\x7b Execute");
		Print8(0x80, 0xC0, PRINT_GREY, NULL, (UCHAR*)"\x60 Cancel");

		if (G.Padd1_trg & PAD_LEFT) {}
		if (G.Padd1_trg & PAD_RIGHT) {}
		if (G.Padd1_trg & PAD_CONFIRM)
		{
		}
		if (G.Padd1_trg & PAD_CANCEL)
		{
			Menu.Func_no = DEBUG_MENU_MAIN;
			break;
		}

		Task_sleep(1);

	} while (true);
}
VOID Debug_Movie_Test(VOID)
{
	ResetPad();

	do {

		Debug_Draw_Window();

		Print8(0x68, 0x50, 0, 3, (UCHAR*)"- MOVIE TEST -");

		//Print8(0x7C, 0xB8, PRINT_GREY, NULL, (UCHAR*)"\x7b Execute");
		Print8(0x80, 0xC0, PRINT_GREY, NULL, (UCHAR*)"\x60 Cancel");

		if (G.Padd1_trg & PAD_LEFT) {}
		if (G.Padd1_trg & PAD_RIGHT) {}
		if (G.Padd1_trg & PAD_CONFIRM)
		{
		}
		if (G.Padd1_trg & PAD_CANCEL)
		{
			Menu.Func_no = DEBUG_MENU_MAIN;
			break;
		}

		Task_sleep(1);

	} while (true);
}
VOID Debug_Flag_Test(VOID)
{
	INT iFlag = Menu.Cursor_flag;
	INT iListMin = NULL;
	INT TextColor = NULL;
	ULONG yCnt = NULL;

	ResetPad();

	do {

		Debug_Draw_Window();

		Print8(0x6C, 0x50, 0, 3, (UCHAR*)"- FLAG TEST -");

		//Print8(0x70, 0x58, PRINT_BLUE, NULL, (UCHAR*)itox((ULONG)Flag_table[iFlag].Pointer, (CHAR*)ItoxBuffer, 8));

		yCnt = 0;

		iListMin = iFlag - 5;
		if (iListMin < 0) { iListMin = 0; }
		if (iListMin > (FLAG_TEST_COUNT - 10)) { iListMin = (FLAG_TEST_COUNT - 10); }

		for (INT i = iListMin; i < iListMin + 10; i++, yCnt++)
		{
			if (iFlag == i)
			{
				TextColor = PRINT_GREEN;
			}
			else
			{
				TextColor = PRINT_GREY;
			}
			Print8(0x70, (0x60 + (yCnt * 8)), TextColor, NULL, (UCHAR*)FlagStr[i]);
		}

		Print8(0x7C, 0xB8, PRINT_GREY, NULL, (UCHAR*)"\x7b Confirm");
		Print8(0x80, 0xC0, PRINT_GREY, NULL, (UCHAR*)"\x60 Cancel");

		if (G.Padd1_trg & PAD_LEFT)
		{
			iFlag -= 4;
			MenuCursor(iFlag, 0, (FLAG_TEST_COUNT - 1), FALSE);
		}
		if (G.Padd1_trg & PAD_RIGHT)
		{
			iFlag += 4;
			MenuCursor(iFlag, 0, (FLAG_TEST_COUNT - 1), TRUE);
		}
		if (G.Padd1_trg & PAD_UP)
		{
			MenuCursor(iFlag, 0, (FLAG_TEST_COUNT - 1), FALSE);
		}
		if (G.Padd1_trg & PAD_DOWN)
		{
			MenuCursor(iFlag, 0, (FLAG_TEST_COUNT - 1), TRUE);
		}
		if (G.Padd1_trg & PAD_CONFIRM)
		{
			Menu.Cursor_flag = iFlag;
			Menu.Func_no = DEBUG_MENU_FLAG_EDITOR;
			break;
		}
		if (G.Padd1_trg & PAD_CANCEL)
		{
			Menu.Func_no = DEBUG_MENU_MAIN;
			break;
		}

		Task_sleep(1);

	} while (true);
}
VOID Debug_Event_Test(VOID)
{
	USHORT nScript = NULL;
	INT iScript = NULL;

	nScript = *(USHORT*)G.pRoom->pScd;
	nScript /= 2;
	nScript -= 1;

	ResetPad();

	do {

		Debug_Draw_Window();

		Print8(0x68, 0x50, 0, 3, (UCHAR*)"- EVENT TEST -");

		if (!nScript)
		{
			Print8(0x84, 0x60, PRINT_GREEN, 3, (UCHAR*)"No Data");
		}
		else
		{
			Print8(0x74, 0x60, PRINT_GREEN, 3, (UCHAR*)"%d / %d", iScript, nScript);
		}

		Print8(0x7C, 0xB8, PRINT_GREY, NULL, (UCHAR*)"\x7b Execute");
		Print8(0x80, 0xC0, PRINT_GREY, NULL, (UCHAR*)"\x60 Cancel");

		if (G.Padd1_trg & PAD_LEFT) { MenuCursor(iScript, 0, nScript, FALSE); }
		if (G.Padd1_trg & PAD_RIGHT) { MenuCursor(iScript, 0, nScript, TRUE); }
		if (G.Padd1_trg & PAD_CONFIRM)
		{
			if (nScript)
			{
				DebugValue = iScript;
				DebugFlag |= DEBUG_EVENT_TEST;
				Menu.Func_no = DEBUG_MENU_EXIT;
				break;
			}
		}
		if (G.Padd1_trg & PAD_CANCEL)
		{
			Menu.Func_no = DEBUG_MENU_MAIN;
			break;
		}

		Task_sleep(1);

	} while (true);
}
VOID Debug_Message_Test(VOID)
{
	USHORT* pMessage = NULL;
	USHORT nMessage = NULL;
	INT iMessage = NULL;

	switch (SysLanguage)
	{
	case 0:
		pMessage = (USHORT*)G.pRoom->pMessage;
		break;
	case 1:
		pMessage = (USHORT*)G.pRoom->pMessage_sub;
		break;
	}

	nMessage = (USHORT)pMessage[0];
	nMessage /= 2;
	nMessage -= 1;

	ResetPad();

	do {

		Debug_Draw_Window();

		Print8(0x60, 0x50, 0, 3, (UCHAR*)"- MESSAGE TEST -");

		if (!nMessage)
		{
			Print8(0x84, 0x60, PRINT_GREEN, 3, (UCHAR*)"No Data");
		}
		else
		{
			Print8(0x74, 0x60, PRINT_GREEN, 3, (UCHAR*)"%d / %d", iMessage, nMessage);
		}

		Print8(0x7C, 0xB8, PRINT_GREY, NULL, (UCHAR*)"\x7b Display");
		Print8(0x80, 0xC0, PRINT_GREY, NULL, (UCHAR*)"\x60 Cancel");

		if (G.Padd1_trg & PAD_LEFT) { MenuCursor(iMessage, 0, nMessage, FALSE); }
		if (G.Padd1_trg & PAD_RIGHT) { MenuCursor(iMessage, 0, nMessage, TRUE); }
		if (G.Padd1_trg & PAD_CONFIRM)
		{
			if (nMessage)
			{
				DebugValue = iMessage;
				DebugFlag |= DEBUG_MESSAGE_TEST;
				Menu.Func_no = DEBUG_MENU_EXIT;
				break;
			}
		}
		if (G.Padd1_trg & PAD_CANCEL)
		{
			Menu.Func_no = DEBUG_MENU_MAIN;
			break;
		}

		Task_sleep(1);

	} while (true);
}
VOID Debug_System_Reset(VOID)
{
	Fade_set(0x200, 0x400, 7, 0);

	while (Fade_status(0) == 0)
	{
		Print(0x70, 0x6B, PRINT_GREY, 0, (UCHAR*)"Sys Reset");
		Print8(0x50, 0x7B, PRINT_GREY, 0, (UCHAR*)"Please be patient...");
		Task_sleep(1);
	}

	EnterCriticalSection();

	__asm__ volatile ("lui		$14, 0xBFC0");
	__asm__ volatile ("jalr		$14");
	__asm__ volatile ("nop");
}
VOID Debug_Exit(VOID)
{
	Pad_rep_set(0xF000, 0x60A);
	Task_signal(0);
	Task_exit();
}

VOID Debug_Flag_Editor(VOID)
{
	INT iFlag = Menu.Cursor_flag;
	ULONG iData = NULL;
	ULONG iBit = NULL;
	ULONG nBits = NULL;
	ULONG iDataColor = PRINT_GREEN;
	ULONG iBitColor = PRINT_GREY;
	ULONG bOnOff = FALSE;
	ULONG bPadd = NULL;
	ULONG PadTimer = NULL;

	ULONG(*pFlagData)[8] = (ULONG(*)[8])Flag_table[iFlag].Pointer;

	switch (Flag_table[iFlag].Type)
	{
	case 0:
		nBits = 8;
		break;
	case 1:
		nBits = 16;
		break;
	case 2:
		nBits = 32;
		break;
	}

	if (Flag_table[iFlag].bDispBits)
	{
		iDataColor = PRINT_RED;
	}

	ResetPad();

	do {

		Debug_Draw_Window();

		Print8(0x6C, 0x50, 0, 3, (UCHAR*)"- FLAG EDIT -");

		if (Flag_table[iFlag].ArrayLen)
		{
			Print8(0x7B, 0x60, PRINT_BLUE, NULL, (UCHAR*)"%s [%d/%d]", FlagStr[iFlag], iData, Flag_table[iFlag].ArrayLen - 1);
		}
		else
		{
			Print8(0x7B, 0x60, PRINT_BLUE, NULL, (UCHAR*)FlagStr[iFlag]);
		}

		switch (Flag_table[iFlag].Type)
		{
		case 0:
			Print8(0x7B, 0x70, iDataColor, NULL, (UCHAR*)itox((UCHAR)*(ULONG*)pFlagData[iData], (CHAR*)ItoxBuffer, 2));
			break;
		case 1:
			Print8(0x7B, 0x70, iDataColor, NULL, (UCHAR*)itox((USHORT)*(ULONG*)pFlagData[iData], (CHAR*)ItoxBuffer, 4));
			break;
		case 2:
			Print8(0x7B, 0x70, iDataColor, NULL, (UCHAR*)itox((ULONG)*(ULONG*)pFlagData[iData], (CHAR*)ItoxBuffer, 8));
			break;
		}

		if (Flag_table[iFlag].bDispBits)
		{
			for (ULONG i = 0; i < nBits; i++)
			{
				if (iBit == i)
				{
					iBitColor = PRINT_GREEN;
				}
				else
				{
					iBitColor = PRINT_GREY;
				}

				switch (Flag_table[iFlag].Type)
				{
				case 0:
					if ((*(UCHAR*)pFlagData[iData]) & (1 << i))
					{
						bOnOff = TRUE;
					}
					else
					{
						bOnOff = FALSE;
					}
					break;
				case 1:
					if ((*(USHORT*)pFlagData[iData]) & (1 << i))
					{
						bOnOff = TRUE;
					}
					else
					{
						bOnOff = FALSE;
					}
					break;
				case 2:
					if ((*(ULONG*)pFlagData[iData]) & (1 << i))
					{
						bOnOff = TRUE;
					}
					else
					{
						bOnOff = FALSE;
					}
					break;
				}

				Print8(0x62 + ((i % 16) * 8), 0x80 + ((i / 16) * 8), iBitColor, NULL, (UCHAR*)OnOffStr[bOnOff]);
			}
		}

		if (Flag_table[iFlag].bDispBits)
		{
			Print8(0x80, 0xB8, PRINT_GREY, NULL, (UCHAR*)"\x7b Toggle");
		}
		else
		{
			Print8(0x3C, 0xB8, PRINT_GREY, NULL, (UCHAR*)"Left/Right/Up/Down Modify");
		}

		Print8(0x80, 0xC0, PRINT_GREY, NULL, (UCHAR*)"\x60 Cancel");

		if (Flag_table[iFlag].ArrayLen) { Print8(0x74, 0xC8, PRINT_GREY, NULL, (UCHAR*)"L1/R1 Array"); }

		bPadd = G.Padd & (PAD_LEFT | PAD_RIGHT | PAD_UP | PAD_DOWN);

		if (bPadd && !Flag_table[iFlag].bDispBits)
		{
			PadTimer++;

			if (PadTimer >= 3)
			{
				if (G.Padd & PAD_LEFT)
				{
					switch (Flag_table[iFlag].Type)
					{
					case 0:
						*(UCHAR*)pFlagData[iData] -= 1;
						break;
					case 1:
						*(USHORT*)pFlagData[iData] -= 1;
						break;
					case 2:
						*(ULONG*)pFlagData[iData] -= 1;
						break;
					}
				}
				if (G.Padd & PAD_RIGHT)
				{
					switch (Flag_table[iFlag].Type)
					{
					case 0:
						*(UCHAR*)pFlagData[iData] += 1;
						break;
					case 1:
						*(USHORT*)pFlagData[iData] += 1;
						break;
					case 2:
						*(ULONG*)pFlagData[iData] += 1;
						break;
					}
				}
				if (G.Padd & PAD_DOWN)
				{
					switch (Flag_table[iFlag].Type)
					{
					case 0:
						*(UCHAR*)pFlagData[iData] -= 0x10;
						break;
					case 1:
						*(USHORT*)pFlagData[iData] -= 0x10;
						break;
					case 2:
						*(ULONG*)pFlagData[iData] -= 0x10;
						break;
					}
				}
				if (G.Padd & PAD_UP)
				{
					switch (Flag_table[iFlag].Type)
					{
					case 0:
						*(UCHAR*)pFlagData[iData] += 0x10;
						break;
					case 1:
						*(USHORT*)pFlagData[iData] += 0x10;
						break;
					case 2:
						*(ULONG*)pFlagData[iData] += 0x10;
						break;
					}
				}

				PadTimer = 0;
			}
		}
		else if (Flag_table[iFlag].bDispBits)
		{
			if (G.Padd1_trg & PAD_LEFT)
			{
				iBit--;
				if (iBit > nBits) { iBit = nBits - 1; }
			}
			if (G.Padd1_trg & PAD_RIGHT)
			{
				iBit++;
				if (iBit >= nBits) { iBit = 0; }
			}
			if ((G.Padd1_trg & PAD_UP) && (nBits == 32))
			{
				iBit -= 16;
				if (iBit > 32) { iBit += 32; }
			}
			if ((G.Padd1_trg & PAD_DOWN) && (nBits == 32))
			{
				iBit += 16;
				if (iBit >= nBits) { iBit -= 32; }
			}
			if (G.Padd1_trg & PAD_CONFIRM)
			{
				switch (Flag_table[iFlag].Type)
				{
				case 0:
					*(UCHAR*)pFlagData[iData] ^= (1 << iBit);
					break;
				case 1:
					*(USHORT*)pFlagData[iData] ^= (1 << iBit);
					break;
				case 2:
					*(ULONG*)pFlagData[iData] ^= (1 << iBit);
					break;
				}
			}
		}
		else
		{
			PadTimer = 0;
		}

		if (G.Padd1_trg & PAD_L1)
		{
			iData--;
			if (iData > Flag_table[iFlag].ArrayLen) { iData = Flag_table[iFlag].ArrayLen - 1; }
		}
		if (G.Padd1_trg & PAD_R1)
		{
			iData++;
			if (iData >= Flag_table[iFlag].ArrayLen) { iData = 0; }
		}

		if (G.Padd1_trg & PAD_CANCEL)
		{
			Menu.Func_no = DEBUG_MENU_FLAG_TEST;
			break;
		}

		Task_sleep(1);

	} while (true);
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