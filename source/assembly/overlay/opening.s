
/*
*	Game_loop hook for BOOT.BIN
*/
;;.org 0x801BFB00
;;				jal		Boot_patch
;;				nop

/*
*	Disable XA audio and STR video playback
*/
.org 0x801C070C		;; Xa_play
				nop
.org 0x801C07C8		;; Xa_play
				nop
.org 0x801C08F0		;; Xa_play
				nop
.org 0x801C09FC		;; Xa_play
				nop
.org 0x801C0AD0		;; Xa_play
				nop
.org 0x801C0DF8		;; Xa_play
				nop
.org 0x801C0E70		;; Xa_play
				nop
.org 0x801C0EB8		;; Xa_play
				nop
.org 0x801C0F2C		;; Xa_play
				nop
.org 0x801C0FD0		;; Xa_play
				nop
.org 0x801C1048		;; Xa_play
				nop
.org 0x801C10F8		;; Xa_play
				nop
.org 0x801C13A4		;; Xa_play
				nop
.org 0x801C141C		;; Xa_play
				nop
.org 0x801C1494		;; Xa_play
				nop
.org 0x801C150C		;; Xa_play
				nop
.org 0x801C15A8		;; Xa_play
				nop
.org 0x801C15F8		;; Xa_play
				nop
.org 0x801C1670		;; Xa_play
				nop
.org 0x801C16E8		;; Xa_play
				nop
.org 0x801C1800		;; Xa_play
				nop
.org 0x801C0C84		;; Init_movie_work
				nop
.org 0x801C0CC8		;; Init_movie_work
				nop
.org 0x801C1230		;; Init_movie_work
				nop
.org 0x801C1274		;; Init_movie_work
				nop
.org 0x801C1938		;; Init_movie_work
				nop
.org 0x801C197C		;; Init_movie_work
				nop
