

;; Snd_bgm_main
.org 0x8005AB94
				li      $v0, 0xFFFFFFF0
				lw      $a3, G_pFree_work
				nop
				addiu   $a3, 0x10
				and     $s0, $a3, $v0
				move	$a1, $s0				;; Address
				jal		Load_bgm
				li      $a0, 0					;; Main
				j		0x8005ABDC
				nop

;; Snd_bgm_sub
.org 0x8005AFB4
				li      $v0, 0xFFFFFFF0
				lw      $a3, G_pFree_work
				nop
				addiu   $a3, 0x10
				and     $s0, $a3, $v0
				move	$a1, $s0				;; Address
				jal		Load_bgm
				li      $a0, 1					;; Sub
				j		0x8005B00C
				nop