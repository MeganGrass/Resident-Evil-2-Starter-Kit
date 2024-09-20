

;; G.pBs_size
.org 0x8002BE9C
				move	$v0, $0
				nop

;; Bg_draw
.org 0x8002BEC0

				;; Read Index
				la		$s5, pBssIndex
				lh		$v0, Savegame_Room_no
				li		$v1, 8
				multu	$v1, $v0
				mflo	$v1
				addu	$v0, $v1, $s5			;; Index Pointer
				lw		$a0, 0x04($v0)			;; Archive Sector
				lh		$a2, Savegame_Cut_no
				li		$a3, 0x20
				multu	$a2, $a3
				mflo	$v1

				;; Load Bit-Stream File
				addu	$a0, $v1, $a0			;; Sector
				li		$a1, 0x10000			;; Size			;; BS at BSSFile, LZ at LZin
				la		$a2, BSSFile			;; Address
				jal		Cd_read_ex
				li		$a3, 0					;; Auto-Parse Index

				;; Skip Z-Buffer Texture Decompression?
				la		$a0, LZin
				lw		$v0, 0($a0)
				nop
				beqz	$v0, @Complete
				nop
		
				;; Z-Buffer Texture Decompression
				jal		Dec_lz
				la		$a1, LZout
				lhu     $s0, G_Ctpage
				li      $v0, 0x15
				sh      $v0, G_Ctpage
				jal     Mapping_tim
				la      $a0, LZout
				sh      $s0, G_Ctpage

				@Complete:
				j		0x8002C064
				nop
