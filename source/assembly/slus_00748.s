
.erroronwarning on
.psx
.open "./disc/SLUS_007.48",0x8000F800

/*
*	Preprocessor
*/
DebugRelease:			equ 1
FALSE:					equ 0
TRUE:					equ 1

/*
*	Clean
*/
.include "./source/assembly/clean.s"

/*
*	Predefined
*/
.include "./source/assembly/directive.s"

/*
*	Disk
*/
.include "./source/assembly/disk/filecode.s"
.include "./source/assembly/disk/task.s"

/*
*	Custom
*/
.include "./source/assembly/custom.s"

/*
*	Compression
*/
.include "./source/assembly/compression/lz_dec.s"

/*
*	Boot
*/
.include "./source/assembly/boot/hook.s"
.include "./source/assembly/boot/logo.s"

/*
*	CD
*/
.include "./source/function/Cd_read/Cd_read.asm"
.include "./source/function/Cd_read_ex/Cd_read_ex.asm"
.include "./source/function/Cd_read_s/Cd_read_s.asm"
.include "./source/function/Cd_ready_cb/Cd_ready_cb.asm"
.include "./source/function/Set_disk/Set_disk.asm"

/*
*	Debug
*/
.include "./source/function/Debug_menu/Debug_menu.asm"

/*
*	Enemy
*/
.include "./source/function/Emd_load_file/Emd_load_file.asm"
.include "./source/assembly/enemy/emd00.s"
.include "./source/assembly/enemy/emd01.s"

/*
*	Movie
*/
.include "./source/assembly/str/Movie_tbl.s"

/*
*	Player
*/
.include "./source/function/Load_pld/Load_pld.asm"
.include "./source/function/Load_plw_index/Load_plw_index.asm"
.include "./source/assembly/player/Player_set.s"
.include "./source/assembly/player/Pl_weapon_ch.s"
.include "./source/assembly/player/Player_move.s"
.include "./source/function/pl_mv00_pad/pl_mv00_pad.asm"
.include "./source/assembly/player/pl_mv05.s"

/*
*	Stage
*/
.include "./source/assembly/stage/Load_bss.s"
.include "./source/assembly/stage/Load_rdt.s"
.include "./source/assembly/stage/Set_stage.s"
.include "./source/function/Load_stage/Load_stage.asm"

/*
*	Sound
*/
.include "./source/assembly/Sound/Snd_bgm.s"
.include "./source/assembly/Sound/Snd_bgm_set.s"
.include "./source/assembly/Sound/Snd_bgm_ck.s"
.include "./source/function/Load_bgm/Load_bgm.asm"
//.include "./source/function/Snd_sys_enem_set/Snd_sys_enem_set.asm"

/*
*	Status
*/
//.include "./source/function/file_moji_load/file_moji_load.asm"

/*
*	Voice
*/
.include "./source/function/Xa_play/Xa_play.asm"

/*
*	Filecode
*/
FILE_DO2:		equ 0x257		;; x8 + 0x800988A4 = 0x8009A1DC
FILE_ARMS_EDH:	equ 0x297		;; 
FILE_ARMS_VBD:	equ 0x2AB		;; FILE_ARMS_EDH+0x14
FILE_CORE_EDH:	equ 0x2BF		;; 
FILE_CORE_VBD:	equ 0x2D5		;; FILE_CORE_EDH+0x16
.org 0x80059CE8
				addiu	$a0, $s2, FILE_ARMS_EDH
				nop
				nop
.org 0x80059DFC
				addiu	$a0, $s2, FILE_ARMS_VBD
				nop
				nop
.org 0x80059A94
				addiu	$a0, $s3, FILE_CORE_EDH
				nop
				nop
.org 0x80059B58
				addiu	$a0, $s3, FILE_CORE_VBD
				nop
				nop
.org 0x80059C04
				addiu	$a0, $s3, FILE_CORE_VBD
				nop
				nop
.org 0x80014D88
				addiu	$a0, $s6, FILE_DO2
				nop
				nop
.org 0x80015094
				addiu	$a0, $v1, FILE_DO2
				nop
				nop
				sll     $a2, $v1, 1
				addu    $v1, $a2, $v1
				sll     $v1, 2
				addu    $v1, $v0

.close
