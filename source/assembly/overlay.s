
.erroronwarning on
.psx

/*
*	Predefined
*/
.include "./source/assembly/directive.s"

/*
*	Disk
*/
.include "./source/assembly/disk/filecode.s"

/*
*	Custom
*/
.include "./source/assembly/custom.s"

/*
*	Miscellaneous Patches
*/
.open "./disc/overlay/DIEDEMO.BIN",0x80190000
.include "./source/assembly/overlay/diedemo.s"
.close

.open "./disc/overlay/ENDING.BIN",0x8011A000
.include "./source/assembly/overlay/ending.s"
.close

.open "./disc/overlay/OPENING.BIN",0x801BFA18
.include "./source/assembly/overlay/opening.s"
.close

.open "./disc/overlay/SELECT.BIN",0x801BFA18
.include "./source/assembly/overlay/select.s"
.close
