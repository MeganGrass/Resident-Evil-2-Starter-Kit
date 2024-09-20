

/*
*	str playback is currently disabled
*/
.org 0x8002BA28							;; Movie
				nop
.org 0x80058D7C							;; Init_movie_work
				nop
				nop


/*
*	Movie_tbl[18]
*/
.org Movie_tbl
				.word MAX_FILE			;; Filecode (CAPCOM.STR)		// incomplete
				.dh 116					;; N_frame
				.dh 0xFF				;; Caption_id
				.dh 0x9F0				;; Cancel (0 accecpted here too)
				.dh 0x140				;; Disp_w (320)
				.word 0					;; Isrgb24 (0=No,1=Yes)
				.word 0x280000			;; Pos (0 accecpted here too)
				.dh 0					;; Work_top (always 0?)
				.dh 0x5800				;; Rl_size
				.dh 0x80				;; Attribute
				.dh 110					;; Volume (127=max)
				.word 0					;; Free
