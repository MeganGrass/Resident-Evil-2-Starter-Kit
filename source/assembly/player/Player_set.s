

.org Player_set

				;; Stack
				addiu   $sp, -0x28
				sw      $ra, 0x28+-0x04($sp)
				sw      $s4, 0x28+-0x08($sp)
				sw      $s3, 0x28+-0x0C($sp)
				sw      $s2, 0x28+-0x10($sp)
				sw      $s1, 0x28+-0x14($sp)
				sw      $s0, 0x28+-0x18($sp)
				move    $s2, $a0				;; PLAYER_WORK
				la      $s3, 0x801BFA14			;; Address
		
				jal		Load_pld
				nop

				j		0x8003BB48
				nop