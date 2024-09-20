

.org Set_stage
				.fill 0x54

.org Set_stage
				addiu	$sp, -0x18
				sw      $ra, 0x10($sp)
				jal		Load_stage
				nop
				lw      $ra, 0x10($sp)
				nop
				jr      $ra
				addiu	$sp, 0x18