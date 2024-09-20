


.org 0x80000180
.fill 0x240, 0xFF


.org 0x800003C0
.fill 0x440, 0x00



;; BGM Table
.org 0x80000180				;; PL0 [Scenario A]
	.byte	0xFF,	0x94	;; R600
	.byte	0xFF,	0xFF	;; R601
	.byte	0x5E,	0xA0	;; R602
	.byte	0x5E,	0xA0	;; R603
	.byte	0x5D,	0xA5	;; R604
	.byte	0xFF,	0xA5	;; R605
	.byte	0x22,	0xFF	;; R606
	.byte	0xFF,	0xD5	;; R607
	.byte	0x22,	0xA7	;; R608
	.byte	0xFF,	0xFF	;; R609
	.byte	0xFF,	0xFF	;; R60A
	.byte	0x22,	0xFF	;; R60B
	.byte	0x22,	0xFF	;; R60C
	.byte	0xFF,	0xFF	;; R60D
	.byte	0xFF,	0x94	;; R60E
	.byte	0x24,	0xFF	;; R60F
	.byte	0xFF,	0xFF	;; R610
	.byte	0x11,	0xA8	;; R611
	.byte	0x22,	0xFF	;; R612
	.byte	0x25,	0xFF	;; R613
	.byte	0x22,	0xFF	;; R614
	.byte	0xFF,	0xAD	;; R615
	.byte	0x22,	0xFF	;; R616
	.byte	0x52,	0xB4	;; R617
	.byte	0xFF,	0xFF	;; R618
	.byte	0xFF,	0xFF	;; R619
	.byte	0xFF,	0xFF	;; R61A
	.byte	0xFF,	0xFF	;; R61B
	.byte	0xFF,	0xFF	;; R61C
	.byte	0xFF,	0xFF	;; R61D
	.byte	0xFF,	0xFF	;; R61E
	.byte	0xFF,	0xFF	;; R61F
	.byte	0xFF,	0xFF	;; R620
	.byte	0xFF,	0xFF	;; R621
	.byte	0xFF,	0xFF	;; R622
	.byte	0xFF,	0xFF	;; R623
	.byte	0xFF,	0xFF	;; R624
	.byte	0xFF,	0xFF	;; R625
	.byte	0xFF,	0xFF	;; R626
	.byte	0xFF,	0xFF	;; R627
	.byte	0xFF,	0xFF	;; R628
	.byte	0xFF,	0xFF	;; R629
	.byte	0xFF,	0xFF	;; R62A
	.byte	0xFF,	0xFF	;; R62B
	.byte	0xFF,	0xFF	;; R62C
	.byte	0xFF,	0xFF	;; R62D
	.byte	0xFF,	0xFF	;; R62E
	.byte	0xFF,	0xFF	;; R62F
.org 0x800001E0				;; PL0 [Scenario B]
	.byte	0xFF,	0x94	;; R600
	.byte	0xFF,	0xFF	;; R601
	.byte	0x5E,	0xA0	;; R602
	.byte	0x5E,	0xA0	;; R603
	.byte	0x5D,	0xA5	;; R604
	.byte	0xFF,	0xA5	;; R605
	.byte	0x22,	0xFF	;; R606
	.byte	0x0C,	0xFF	;; R607
	.byte	0x22,	0xA7	;; R608
	.byte	0xFF,	0xFF	;; R609
	.byte	0xFF,	0xFF	;; R60A
	.byte	0x22,	0xFF	;; R60B
	.byte	0x22,	0xFF	;; R60C
	.byte	0xFF,	0xFF	;; R60D
	.byte	0xFF,	0x94	;; R60E
	.byte	0x24,	0xFF	;; R60F
	.byte	0xFF,	0xFF	;; R610
	.byte	0x11,	0xA8	;; R611
	.byte	0x22,	0xFF	;; R612
	.byte	0x25,	0xFF	;; R613
	.byte	0x22,	0xFF	;; R614
	.byte	0xFF,	0xAD	;; R615
	.byte	0x22,	0xFF	;; R616
	.byte	0x52,	0xB4	;; R617
	.byte	0xFF,	0xFF	;; R618
	.byte	0xFF,	0xFF	;; R619
	.byte	0xFF,	0xFF	;; R61A
	.byte	0xFF,	0xFF	;; R61B
	.byte	0xFF,	0xFF	;; R61C
	.byte	0xFF,	0xFF	;; R61D
	.byte	0xFF,	0xFF	;; R61E
	.byte	0xFF,	0xFF	;; R61F
	.byte	0xFF,	0xFF	;; R620
	.byte	0xFF,	0xFF	;; R621
	.byte	0xFF,	0xFF	;; R622
	.byte	0xFF,	0xFF	;; R623
	.byte	0xFF,	0xFF	;; R624
	.byte	0xFF,	0xFF	;; R625
	.byte	0xFF,	0xFF	;; R626
	.byte	0xFF,	0xFF	;; R627
	.byte	0xFF,	0xFF	;; R628
	.byte	0xFF,	0xFF	;; R629
	.byte	0xFF,	0xFF	;; R62A
	.byte	0xFF,	0xFF	;; R62B
	.byte	0xFF,	0xFF	;; R62C
	.byte	0xFF,	0xFF	;; R62D
	.byte	0xFF,	0xFF	;; R62E
	.byte	0xFF,	0xFF	;; R62F
.org 0x80000240				;; PL1 [Scenario A]
	.byte	0xFF,	0x94	;; R600
	.byte	0xFF,	0xFF	;; R601
	.byte	0xFF,	0xA0	;; R602
	.byte	0xFF,	0xA0	;; R603
	.byte	0x5D,	0xA5	;; R604
	.byte	0xFF,	0xA5	;; R605
	.byte	0x22,	0xFF	;; R606
	.byte	0xFF,	0xE6	;; R607
	.byte	0x22,	0xA7	;; R608
	.byte	0xFF,	0xFF	;; R609
	.byte	0xFF,	0xFF	;; R60A
	.byte	0x22,	0xFF	;; R60B
	.byte	0x22,	0xFF	;; R60C
	.byte	0xFF,	0xFF	;; R60D
	.byte	0xFF,	0x94	;; R60E
	.byte	0x24,	0xFF	;; R60F
	.byte	0xFF,	0xFF	;; R610
	.byte	0x22,	0xFF	;; R611
	.byte	0x22,	0xFF	;; R612
	.byte	0x25,	0xFF	;; R613
	.byte	0x22,	0xFF	;; R614
	.byte	0xFF,	0xAD	;; R615
	.byte	0x22,	0xFF	;; R616
	.byte	0x52,	0xB4	;; R617
	.byte	0xFF,	0xFF	;; R618
	.byte	0xFF,	0xFF	;; R619
	.byte	0xFF,	0xFF	;; R61A
	.byte	0xFF,	0xFF	;; R61B
	.byte	0xFF,	0xFF	;; R61C
	.byte	0xFF,	0xFF	;; R61D
	.byte	0xFF,	0xFF	;; R61E
	.byte	0xFF,	0xFF	;; R61F
	.byte	0xFF,	0xFF	;; R620
	.byte	0xFF,	0xFF	;; R621
	.byte	0xFF,	0xFF	;; R622
	.byte	0xFF,	0xFF	;; R623
	.byte	0xFF,	0xFF	;; R624
	.byte	0xFF,	0xFF	;; R625
	.byte	0xFF,	0xFF	;; R626
	.byte	0xFF,	0xFF	;; R627
	.byte	0xFF,	0xFF	;; R628
	.byte	0xFF,	0xFF	;; R629
	.byte	0xFF,	0xFF	;; R62A
	.byte	0xFF,	0xFF	;; R62B
	.byte	0xFF,	0xFF	;; R62C
	.byte	0xFF,	0xFF	;; R62D
	.byte	0xFF,	0xFF	;; R62E
	.byte	0xFF,	0xFF	;; R62F
.org 0x800002A0				;; PL1 [Scenario B]
	.byte	0xFF,	0x94	;; R600
	.byte	0xFF,	0xFF	;; R601
	.byte	0xFF,	0xA0	;; R602
	.byte	0xFF,	0xA0	;; R603
	.byte	0x5D,	0xA5	;; R604
	.byte	0xFF,	0xA5	;; R605
	.byte	0x22,	0xFF	;; R606
	.byte	0x0C,	0xFF	;; R607
	.byte	0x22,	0xA7	;; R608
	.byte	0xFF,	0xFF	;; R609
	.byte	0xFF,	0xFF	;; R60A
	.byte	0x22,	0xFF	;; R60B
	.byte	0x22,	0xFF	;; R60C
	.byte	0xFF,	0xFF	;; R60D
	.byte	0xFF,	0x94	;; R60E
	.byte	0x24,	0xFF	;; R60F
	.byte	0xFF,	0xFF	;; R610
	.byte	0x22,	0xFF	;; R611
	.byte	0x22,	0xFF	;; R612
	.byte	0x25,	0xFF	;; R613
	.byte	0x22,	0xFF	;; R614
	.byte	0xFF,	0xAD	;; R615
	.byte	0x22,	0xFF	;; R616
	.byte	0x52,	0xB4	;; R617
	.byte	0xFF,	0xFF	;; R618
	.byte	0xFF,	0xFF	;; R619
	.byte	0xFF,	0xFF	;; R61A
	.byte	0xFF,	0xFF	;; R61B
	.byte	0xFF,	0xFF	;; R61C
	.byte	0xFF,	0xFF	;; R61D
	.byte	0xFF,	0xFF	;; R61E
	.byte	0xFF,	0xFF	;; R61F
	.byte	0xFF,	0xFF	;; R620
	.byte	0xFF,	0xFF	;; R621
	.byte	0xFF,	0xFF	;; R622
	.byte	0xFF,	0xFF	;; R623
	.byte	0xFF,	0xFF	;; R624
	.byte	0xFF,	0xFF	;; R625
	.byte	0xFF,	0xFF	;; R626
	.byte	0xFF,	0xFF	;; R627
	.byte	0xFF,	0xFF	;; R628
	.byte	0xFF,	0xFF	;; R629
	.byte	0xFF,	0xFF	;; R62A
	.byte	0xFF,	0xFF	;; R62B
	.byte	0xFF,	0xFF	;; R62C
	.byte	0xFF,	0xFF	;; R62D
	.byte	0xFF,	0xFF	;; R62E
	.byte	0xFF,	0xFF	;; R62F
.org 0x80000300				;; 4th Survivor
	.byte	0xFF,	0xFF	;; R600
	.byte	0xFF,	0xFF	;; R601
	.byte	0xFF,	0xFF	;; R602
	.byte	0xFF,	0xFF	;; R603
	.byte	0xFF,	0xFF	;; R604
	.byte	0xFF,	0xFF	;; R605
	.byte	0xFF,	0xFF	;; R606
	.byte	0xFF,	0xFF	;; R607
	.byte	0xFF,	0xFF	;; R608
	.byte	0xFF,	0xFF	;; R609
	.byte	0xFF,	0xFF	;; R60A
	.byte	0xFF,	0xFF	;; R60B
	.byte	0xFF,	0xFF	;; R60C
	.byte	0xFF,	0xFF	;; R60D
	.byte	0xFF,	0xFF	;; R60E
	.byte	0xFF,	0xFF	;; R60F
	.byte	0xFF,	0xFF	;; R610
	.byte	0xFF,	0xFF	;; R611
	.byte	0xFF,	0xFF	;; R612
	.byte	0xFF,	0xFF	;; R613
	.byte	0xFF,	0xFF	;; R614
	.byte	0xFF,	0xFF	;; R615
	.byte	0xFF,	0xFF	;; R616
	.byte	0xFF,	0xFF	;; R617
	.byte	0xFF,	0xFF	;; R618
	.byte	0xFF,	0xFF	;; R619
	.byte	0xFF,	0xFF	;; R61A
	.byte	0xFF,	0xFF	;; R61B
	.byte	0xFF,	0xFF	;; R61C
	.byte	0xFF,	0xFF	;; R61D
	.byte	0xFF,	0xFF	;; R61E
	.byte	0xFF,	0xFF	;; R61F
	.byte	0xFF,	0xFF	;; R620
	.byte	0xFF,	0xFF	;; R621
	.byte	0xFF,	0xFF	;; R622
	.byte	0xFF,	0xFF	;; R623
	.byte	0xFF,	0xFF	;; R624
	.byte	0xFF,	0xFF	;; R625
	.byte	0xFF,	0xFF	;; R626
	.byte	0xFF,	0xFF	;; R627
	.byte	0xFF,	0xFF	;; R628
	.byte	0xFF,	0xFF	;; R629
	.byte	0xFF,	0xFF	;; R62A
	.byte	0xFF,	0xFF	;; R62B
	.byte	0xFF,	0xFF	;; R62C
	.byte	0xFF,	0xFF	;; R62D
	.byte	0xFF,	0xFF	;; R62E
	.byte	0xFF,	0xFF	;; R62F
.org 0x80000360				;; Ex-Battle
	.byte	0xFF,	0xFF	;; R600
	.byte	0x37,	0xFF	;; R601
	.byte	0x37,	0xFF	;; R602
	.byte	0x37,	0xFF	;; R603
	.byte	0x37,	0xFF	;; R604
	.byte	0x37,	0xFF	;; R605
	.byte	0x37,	0xFF	;; R606
	.byte	0x0C,	0xFF	;; R607
	.byte	0x37,	0xFF	;; R608
	.byte	0x37,	0xFF	;; R609
	.byte	0x37,	0xFF	;; R60A
	.byte	0x37,	0xFF	;; R60B
	.byte	0x37,	0xFF	;; R60C
	.byte	0x37,	0xFF	;; R60D
	.byte	0x37,	0xFF	;; R60E
	.byte	0x37,	0xFF	;; R60F
	.byte	0x37,	0xFF	;; R610
	.byte	0xFF,	0xFF	;; R611
	.byte	0x77,	0xFF	;; R612
	.byte	0x37,	0xFF	;; R613
	.byte	0x37,	0xFF	;; R614
	.byte	0x37,	0xFF	;; R615
	.byte	0x37,	0xFF	;; R616
	.byte	0xFF,	0xFF	;; R617
	.byte	0xFF,	0xFF	;; R618
	.byte	0xFF,	0xFF	;; R619
	.byte	0xFF,	0xFF	;; R61A
	.byte	0xFF,	0xFF	;; R61B
	.byte	0xFF,	0xFF	;; R61C
	.byte	0xFF,	0xFF	;; R61D
	.byte	0xFF,	0xFF	;; R61E
	.byte	0xFF,	0xFF	;; R61F
	.byte	0xFF,	0xFF	;; R620
	.byte	0xFF,	0xFF	;; R621
	.byte	0xFF,	0xFF	;; R622
	.byte	0xFF,	0xFF	;; R623
	.byte	0xFF,	0xFF	;; R624
	.byte	0xFF,	0xFF	;; R625
	.byte	0xFF,	0xFF	;; R626
	.byte	0xFF,	0xFF	;; R627
	.byte	0xFF,	0xFF	;; R628
	.byte	0xFF,	0xFF	;; R629
	.byte	0xFF,	0xFF	;; R62A
	.byte	0xFF,	0xFF	;; R62B
	.byte	0xFF,	0xFF	;; R62C
	.byte	0xFF,	0xFF	;; R62D
	.byte	0xFF,	0xFF	;; R62E
	.byte	0xFF,	0xFF	;; R62F


;; XA Table
.org 0x800003C0						;; PL0
	.dh		0x0D,	0x86,	0x1B	;;
	.dh		0x06,	0xBF,	0x0D	;;
	.dh		0x03,	0x00,	0x80	;;
	.dh		0x07,	0x68,	0x48	;;
	.dh		0x0B,	0xC2,	0x0B	;;
	.dh		0x04,	0x00,	0x7C	;;
	.dh		0x0F,	0x31,	0x0D	;;
	.dh		0x07,	0x00,	0x68	;;
	.dh		0x0A,	0x6F,	0x35	;;
	.dh		0x0B,	0x34,	0x33	;;
	.dh		0x0E,	0x32,	0x16	;;
	.dh		0x0E,	0x48,	0x16	;;
	.dh		0x0D,	0x46,	0x20	;;
	.dh		0x05,	0x00,	0x6C	;;
	.dh		0x0D,	0x66,	0x20	;;
	.dh		0x0C,	0x00,	0x2B	;;
	.dh		0x08,	0x66,	0x48	;;
	.dh		0x0F,	0x77,	0x09	;;
	.dh		0x05,	0xC6,	0x06	;;
	.dh		0x0F,	0x63,	0x0A	;;
	.dh		0x01,	0xA7,	0x26	;;
	.dh		0x09,	0x7F,	0x3C	;;
	.dh		0x06,	0x6B,	0x54	;;
	.dh		0x0F,	0x6D,	0x0A	;;
	.dh		0x0E,	0x9F,	0x14	;;
	.dh		0x0E,	0xB3,	0x13	;;
	.dh		0x0B,	0x67,	0x2E	;;
	.dh		0x0A,	0xA4,	0x29	;;
	.dh		0x02,	0x00,	0x88	;;
	.dh		0x0F,	0x58,	0x0B	;;
	.dh		0x09,	0xBB,	0x11	;;
	.dh		0x03,	0x80,	0x4B	;;
	.dh		0x09,	0x00,	0x40	;;
	.dh		0x07,	0xB0,	0x1C	;;
	.dh		0x08,	0x00,	0x66	;;
	.dh		0x0F,	0x3E,	0x0D	;;
	.dh		0x04,	0x7C,	0x49	;;
	.dh		0x0C,	0xA4,	0x26	;;
	.dh		0x08,	0xAE,	0x1F	;;
	.dh		0x0C,	0x2B,	0x2A	;;
	.dh		0x0D,	0xBC,	0x0F	;;
	.dh		0x0E,	0x00,	0x1A	;;
	.dh		0x0E,	0x5E,	0x16	;;
	.dh		0x0E,	0x74,	0x16	;;
	.dh		0x0A,	0x39,	0x36	;;
	.dh		0x0B,	0x00,	0x34	;;
	.dh		0x0C,	0x55,	0x28	;;
	.dh		0x0D,	0x00,	0x23	;;
	.dh		0x0F,	0x13,	0x0F	;;
	.dh		0x0E,	0x1A,	0x18	;;
	.dh		0x04,	0xC5,	0x08	;;
	.dh		0x0D,	0xA1,	0x1B	;;
	.dh		0x0C,	0x7D,	0x27	;;
	.dh		0x02,	0x88,	0x41	;;
	.dh		0x0E,	0x8A,	0x15	;;
	.dh		0x09,	0x40,	0x3F	;;
	.dh		0x0A,	0x00,	0x39	;;
	.dh		0x05,	0x6C,	0x5A	;;
	.dh		0x0F,	0x00,	0x13	;;
	.dh		0x0F,	0x22,	0x0F	;;
	.dh		0x0D,	0x23,	0x23	;;
	.dh		0x0B,	0x95,	0x2D	;;
	.dh		0x0F,	0x4B,	0x0D	;;
	.dh		0x00,	0x00,	0xCD	;;
	.dh		0x01,	0x00,	0xA7	;;
	.dh		0x06,	0x00,	0x6B	;;
.org 0x800005E0						;; PL1