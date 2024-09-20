
/*
*	Game_loop hook for BOOT.BIN
*/
;;.org 0x8011A114
;;				jal		Boot_patch
;;				nop

/*
*	Filecode id
*/
.org 0x8011A2B8
				li      $a0, ROOM800_SND

/*
*	Disable STR video playback
*/
.org 0x8011A9A0
				nop
				nop
.org 0x8011A9C4
				nop
				nop
