

;; Add quick-turn to pl_mv03_pad


/*
*	Relocate Pl_mv table
*/
.org 0x8003C5CC
				lui     $v1, (pPlMvTbl >> 16)
				addu    $v1, $v0
				lw      $v0, (pPlMvTbl & 0xFFFF)($v1)


/*
*	Relocate Pl_mv_pad table
*/
.org 0x8003C5A4
				lui     $v1, (pPlMvPadTbl >> 16)
				addu    $v1, $v0
				lw      $v0, (pPlMvPadTbl & 0xFFFF)($v1)


/*
*	Pl_mv
*/
.org pPlMvTbl
				.word pl_mv00		// Idle
				.word pl_mv01		// Walk-Forward
				.word pl_mv02		// Run
				.word pl_mv03		// Walk-Backward
				.word pl_mv04		// Turn
				.word pl_mv05		// Aim
				.word pl_mv06		// Kneel to pickup Item
				.word pl_mv07		// Turn toward stairs + stairs routine
				.word pl_mv08		// Climb Up
				.word pl_mv09		// Jump Down
				.word pl_mv0a		// Push Object
				.word pl_mv0b		// Rotate to divisible of 1024, walk forward
				.word pl_mv0c		// Quick-Turn
				.word 0
				.word 0
				.word 0


/*
*	Pl_mv_pad
*/
.org pPlMvPadTbl
				.word Plmv00_pad	// Idle
				.word pl_mv01_pad	// Walk-Forward
				.word pl_mv02_pad	// Run
				.word pl_mv03_pad	// Walk-Backward
				.word pl_mv04_pad	// Turn
				.word pl_mv05_pad	// Aim
				.word pl_mv06_pad	// Kneel to pickup Item
				.word pl_mv07_pad	// Turn toward stairs + stairs routine
				.word pl_mv08_pad	// Climb Up
				.word pl_mv09_pad	// Jump Down
				.word pl_mv0a_pad	// Push Object
				.word pl_mv0b_pad	// Rotate to divisible of 1024, walk forward
				.word pl_mv06_pad	// Quick-Turn, using pl_mv06_pad (null func)
				.word 0
				.word 0
				.word 0


/*
*	Patch pl_mv03 to call pl_mv03_action
*/
.org 0x8003d944
				jal		pl_mv03_action
				nop


/*
*	Patch pl_mv05_w1_t1 to call pl_mv05_action
*/
.org 0x800438a4
				move	$a0, $s0	// pEm
				move	$a1, $s2	// Kan
				move	$a2, $s3	// Seq
				jal		pl_mv05_action
				move	$a3, $s1	// Key
				j		0x800438e8
				nop


/*
*	Patch pl_mv05_w2_t1 to call pl_mv05_action
*/
.org 0x80047c08
				move	$a0, $s0	// pEm
				move	$a1, $s2	// Kan
				move	$a2, $s3	// Seq
				jal		pl_mv05_action
				move	$a3, $s1	// Key
				j		0x80047c4c
				nop


/*
*	Patch pl_mv05_w1_t4 to call rewritten Tama_reload
*/
.org 0x80045b0c
				jal		TamaReload
				move	$a0, $s0	// pEm


/*
*	Patch pl_mv05_w2_t4 to call rewritten Tama_reload
*/
.org 0x800482ac
				jal		TamaReload
				move	$a0, $s0	// pEm


/*
*	remove G.System_flg requirements for auto-aim during pl_mv05_w1_t0
*
*	Control Type C is kept as a requirement
*/
.org 0x80043458
				nop
				nop
				nop
				nop
				nop
				nop


/*
*	remove G.System_flg requirements for target change during pl_mv05_w1_t1
*
*	Control Type C is kept as a requirement
*/
.org 0x800437e8
				nop
				nop
				nop
				nop
				nop
				nop


/*
*	remove G.System_flg requirements for target change during pl_mv05_w2_t1
*
*	Control Type C is kept as a requirement
*/
.org 0x80047b68
				nop
				nop
				nop
				nop
				nop
				nop
