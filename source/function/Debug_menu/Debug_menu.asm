
.if DebugRelease
.org 0x800263B0
	jal		Debug_Menu
	nop
.org 0x8006AFD8
	jal		Debug_Status
	nop
.org DebugOrg
	.import ".\\source\\function\\Debug_menu\\obj\\psx\\build\\Debug_menu.bin"
.endif