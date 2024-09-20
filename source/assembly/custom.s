

/*
*	bio2.s must be updated when this file is modified
*/

/*
*	Custom Variable
*/
BuildDate:							equ 0x80010000
CdxLbaBin:							equ 0x80010010
CdxLbaBss:							equ 0x80010014
CdxLbaDat:							equ 0x80010018
CdxLbaDo2:							equ 0x8001001C
CdxLbaEmd0:							equ 0x80010020
CdxLbaEmd1:							equ 0x80010024
CdxLbaPld:							equ 0x80010028
CdxLbaPlw:							equ 0x8001002C
CdxLbaSndArms:						equ 0x80010030
CdxLbaSndCore:						equ 0x80010034
CdxLbaSndEmd:						equ 0x80010038
CdxLbaSndMain:						equ 0x8001003C
CdxLbaSndSub:						equ 0x80010040
CdxLbaRdt:							equ 0x80010044
CdxLbaXa:							equ 0x80010048
CdxLbaStr:							equ 0x8001004C

SysDisk:							equ	0x80010050
SysScenario:						equ 0x80010051
SysController:						equ	0x80010052
SysLanguage:						equ 0x80010053

DebugFlag:							equ 0x80010054
DebugValue:							equ 0x80010058
CdReadMode:							equ 0x8001005C

pPlMvTbl:							equ 0x80010080
pPlMvPadTbl:						equ 0x800100C0

ItoxBuffer:							equ 0x800107C0

/*
*	Custom Function
*/
Dec_lz:								equ 0x80010100

/*
*	Debug Function
*/
DebugOrg:							equ 0x8009C300
Debug_Menu:							equ 0x8009C328
Debug_Status:						equ 0x8009C8E8

/*
*	CDX Function
*/
Cd_read_ex:							equ 0x80013038	// do not modify
Set_disk:							equ 0x800A70FC
Load_bgm:							equ 0x800A7194
Load_stage:							equ 0x8009CB58
Load_pld:							equ 0x8009CE70
Load_plw_index:						equ 0x8009CEB8

/*
*	Player Function
*/
Plmv00_pad:							equ 0x8009CF00
pl_mv0c:							equ 0x8009D094
pl_mv03_action:						equ 0x8009D1CC
pl_mv05_action:						equ 0x8009D210
TamaReload:							equ 0x8009D348

/*
*	Overlay Function
*/
Boot_Game_Set:						equ 0x801904C4

/*
*	CDX File Buffer
*/
pFileIndex:							equ 0x800988A4
pBssIndex:							equ 0x80099254
pBgmTable:							equ 0x800993D4
pRdtIndex:							equ 0x80099434
pPlwIndex:							equ 0x800995B4
pPldIndex:							equ 0x8009965C
pSndMainIndex:						equ 0x8009975C
pSndSubIndex:						equ 0x8009995C
pDo2Index:							equ 0x80099B5C
pSndArmsIndex:						equ	0x80099D5C
pSndCoreIndex:						equ	0x80099E9C
pXasTable:							equ 0x80099FFC

/*
*	Custom Controller
*/
PAD_DEBUG:							equ PAD_TRIANGLE
PAD_ANTI_FREEZE:					equ PAD_L1+PAD_SQUARE