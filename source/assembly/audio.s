
.erroronwarning on
.psx

.open "./disc/bio2/bss01.cdx",0x80000000
.include "./source/assembly/sound/stage1.s"
.close

.open "./disc/bio2/bss02.cdx",0x80000000
.include "./source/assembly/sound/stage2.s"
.close

.open "./disc/bio2/bss03.cdx",0x80000000
.include "./source/assembly/sound/stage3.s"
.close

.open "./disc/bio2/bss04.cdx",0x80000000
.include "./source/assembly/sound/stage4.s"
.close

.open "./disc/bio2/bss05.cdx",0x80000000
.include "./source/assembly/sound/stage5.s"
.close

.open "./disc/bio2/bss06.cdx",0x80000000
.include "./source/assembly/sound/stage6.s"
.close

.open "./disc/bio2/bss07.cdx",0x80000000
.include "./source/assembly/sound/stage7.s"
.close
