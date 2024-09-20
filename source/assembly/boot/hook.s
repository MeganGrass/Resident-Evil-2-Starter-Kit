

/*
*	Game_loop
*
*	Patch out call to Title_game_init from TITLE.BIN
*/
.org 0x800257B8
				jal     Boot_Game_Set