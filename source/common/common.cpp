/*
*
*	Megan Grass
*	March 27, 2014
*
*
*	TODO:
*
*/


#include "..\\BIO2\\BIO2.H"

#include "COMMON.H"


VOID ResetPad(VOID)
{
	G.Padd1 = 0;
	G.Padd1_trg = 0;
	G.Padd_data[0][0] = 0xFFFF;
	G.Padd_data[1][0] = 0xFFFF;
}
CHAR* itox(UINT iNum, CHAR* OutString, UINT OutStrLen)
{
	OutString += OutStrLen;
	*OutString = '\0';

	for (UCHAR i = OutStrLen; i != 0; --i)
	{
		*--OutString = "0123456789ABCDEF"[iNum & 0x0F];
		iNum >>= 4;
	}

	return OutString;
}
VOID MenuCursor(INT& iCursor, INT Min, INT Max, BOOL Add)
{
	if (Add)
	{
		iCursor++;
		if ((iCursor < Min) || (iCursor > Max)) { iCursor = Min; }
	}
	else
	{
		iCursor--;
		if ((iCursor < Min) || (iCursor > Max)) { iCursor = Max; }
	}
}
ULONG CalcPrintX(UINT nCharacters)
{
	return ((320 / 2) - ((nCharacters * 14) / 3));
}
ULONG CalcPrintX8(UINT nCharacters)
{
	return ((320 / 2) - ((nCharacters * 8) / 2));
}
VOID Print(ULONG x, ULONG y, ULONG color, ULONG font, UCHAR* string)
{
	Print_main(x, y, color << 4 | 0x4000 | 0x200, &string);
}
VOID FadeIn(VOID)
{
	Fade_set(0x200, -0x400, 7, 0);
	while (Fade_status(0) == 0) { Task_sleep(1); }
}
VOID FadeOut(VOID)
{
	Fade_set(0x200, 0x400, 7, 0);
	while (Fade_status(0) == 0) { Task_sleep(1); }
	Bg_set_mode(BG_MODE_CLEAR, 0x00000000);
}