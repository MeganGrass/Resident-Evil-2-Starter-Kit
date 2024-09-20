

/*
*	BOOT.BIN
*/
LoadTaskBoot:			equ 0				;; Task_no
LoadTaskFileBoot:		equ BOOT_BIN		;; File_no
LoadTaskAddrBoot:		equ 0x80190000		;; Ld_adr
LoadTaskFuncBoot:		equ 0x80190478		;; Func

/*
*	CONFIG.BIN
*/
LoadTaskConfig:			equ 4				;; Task_no
LoadTaskFileConfig:		equ CONFIG_BIN		;; File_no
LoadTaskAddrConfig:		equ 0x801BFA18		;; Ld_adr
LoadTaskFuncConfig:		equ 0x801BFA84		;; Func

/*
*	DEBUG.BIN
*/
LoadTaskDebug:			equ 9				;; Task_no
LoadTaskFileDebug:		equ DEBUG_BIN		;; File_no
LoadTaskAddrDebug:		equ 0x801BFA18		;; Ld_adr
LoadTaskFuncDebug:		equ 0x801BFD1C		;; Func

/*
*	DIEDEMO.BIN
*/
LoadTaskDieDemo:		equ 2				;; Task_no
LoadTaskFileDieDemo:	equ DIEDEMO_BIN		;; File_no
LoadTaskAddrDieDemo:	equ 0x80190000		;; Ld_adr
LoadTaskFuncDieDemo:	equ 0x8019009C		;; Func

/*
*	ENDING.BIN
*/
LoadTaskEnding:			equ 6				;; Task_no
LoadTaskFileEnding:		equ ENDING_BIN		;; File_no
LoadTaskAddrEnding:		equ 0x8011A000		;; Ld_adr
LoadTaskFuncEnding:		equ 0x8011A0FC		;; Func

/*
*	MEM_CARD.BIN
*/
LoadTaskMemCard:		equ 1				;; Task_no
LoadTaskFileMemory:		equ MEM_CARD_BIN	;; File_no
LoadTaskAddrMemory:		equ 0x801BFA18		;; Ld_adr
LoadTaskFuncMemory:		equ 0x801BFD14		;; Func

/*
*	OPENING.BIN
*/
LoadTaskOpening:		equ 5				;; Task_no
LoadTaskFileOpening:	equ OPENING_BIN		;; File_no
LoadTaskAddrOpening:	equ 0x801BFA18		;; Ld_adr
LoadTaskFuncOpening:	equ 0x801BFAD8		;; Func

/*
*	RESULT.BIN
*/
LoadTaskResult:			equ 7				;; Task_no
LoadTaskFileResult:		equ RESULT_BIN		;; File_no
LoadTaskAddrResult:		equ 0x80158000		;; Ld_adr
LoadTaskFuncResult:		equ 0x80158020		;; Func

/*
*	ROOMJUMP.BIN
*/
LoadTaskRoomJump:		equ 8				;; Task_no
LoadTaskFileRoomJump:	equ ROOMJUMP_BIN	;; File_no
LoadTaskAddrRoomJump:	equ 0x801BFA18		;; Ld_adr
LoadTaskFuncRoomJump:	equ 0x801BFA54		;; Func

/*
*	SELECT.BIN
*/
LoadTaskSelect:			equ 3				;; Task_no
LoadTaskFileSelect:		equ SELECT_BIN		;; File_no
LoadTaskAddrSelect:		equ 0x801BFA18		;; Ld_adr
LoadTaskFuncSelect:		equ 0x801BFAA8		;; Func

/*
*	TITLE.BIN
*/
;;LoadTaskTitle:			equ 0				;; Task_no
;;LoadTaskFileTitle:		equ TITLE_BIN		;; File_no
;;LoadTaskAddrTitle:		equ 0x80190000		;; Ld_adr
;;LoadTaskFuncTitle:		equ 0x80191808		;; Func


/*
*	Task_lexecute
*
*	Patch to read direct pointer
*/
.org 0x80031EA0
				lui     at, (Ld_task_tbl >> 16)
				addu    at, $s0
				lw      $a1, (Ld_task_tbl & 0xFFFF)+8(at)
.org 0x80031EB8
				nop


/*
*	Task_lchain
*
*	Patch to read direct pointer
*/
.org 0x80031F18
				lui     at, (Ld_task_tbl >> 16)
				addu    at, $s0
				lw      $a1, (Ld_task_tbl & 0xFFFF)+8(at)
.org 0x80031F30
				nop


/*
*	Ld_task_tbl
*/
.org Ld_task_tbl
				.word	LoadTaskFileBoot		;; File_no		;; BOOT
				.word	LoadTaskFuncBoot		;; Func
				.word	LoadTaskAddrBoot		;; Ld_adr
				.word	LoadTaskFileMemory		;; File_no		;; MEM_CARD
				.word	LoadTaskFuncMemory		;; Func
				.word	LoadTaskAddrMemory		;; Ld_adr
				.word	LoadTaskFileDieDemo		;; File_no		;; DIEDEMO
				.word	LoadTaskFuncDieDemo		;; Func
				.word	LoadTaskAddrDieDemo		;; Ld_adr
				.word	LoadTaskFileSelect		;; File_no		;; SELECT
				.word	LoadTaskFuncSelect		;; Func
				.word	LoadTaskAddrSelect		;; Ld_adr
				.word	LoadTaskFileConfig		;; File_no		;; CONFIG
				.word	LoadTaskFuncConfig		;; Func
				.word	LoadTaskAddrConfig		;; Ld_adr
				.word	LoadTaskFileOpening		;; File_no		;; OPENING
				.word	LoadTaskFuncOpening		;; Func
				.word	LoadTaskAddrOpening		;; Ld_adr
				.word	LoadTaskFileEnding		;; File_no		;; ENDING
				.word	LoadTaskFuncEnding		;; Func
				.word	LoadTaskAddrEnding		;; Ld_adr
				.word	LoadTaskFileResult		;; File_no		;; RESULT
				.word	LoadTaskFuncResult		;; Func
				.word	LoadTaskAddrResult		;; Ld_adr
				.word	LoadTaskFileRoomJump	;; File_no		;; ROOMJUMP
				.word	LoadTaskFuncRoomJump	;; Func
				.word	LoadTaskAddrRoomJump	;; Ld_adr
				.word	LoadTaskFileDebug		;; File_no		;; DEBUG
				.word	LoadTaskFuncDebug		;; Func
				.word	LoadTaskAddrDebug		;; Ld_adr
				.word	0x00000000				;; File_no		;; 
				.word	0x00000000				;; Func
				.word	0x00000000				;; Ld_adr
				.word	0x00000000				;; File_no		;; 
				.word	0x00000000				;; Func
				.word	0x00000000				;; Ld_adr
				.word	0x00000000				;; File_no		;; 
				.word	0x00000000				;; Func
				.word	0x00000000				;; Ld_adr
				.word	0x00000000				;; File_no		;; 
				.word	0x00000000				;; Func
				.word	0x00000000				;; Ld_adr
				.word	0x00000000				;; File_no		;; 
				.word	0x00000000				;; Func
				.word	0x00000000				;; Ld_adr
