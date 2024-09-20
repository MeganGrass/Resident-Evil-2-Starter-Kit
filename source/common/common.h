/*
*
*	Megan Grass
*	March 27, 2014
*
*
*	TODO:
*
*/


VOID ResetPad(VOID);
CHAR* itox(UINT iNum, CHAR* OutString, UINT OutStrLen);
VOID MenuCursor(INT& iCursor, INT Min, INT Max, BOOL Add);
ULONG CalcPrintX(UINT nCharacters);
ULONG CalcPrintX8(UINT nCharacters);
VOID Print(ULONG x, ULONG y, ULONG color, ULONG font, UCHAR* string);
VOID FadeIn(VOID);
VOID FadeOut(VOID);