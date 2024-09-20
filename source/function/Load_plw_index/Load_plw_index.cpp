/*
*
*	Megan Grass
*	March 27, 2014
*
*/

#include "..\\..\\BIO2\\BIO2.H"

#include "..\\..\\CUSTOM\\CUSTOM.H"

VOID LoadPlwIndex(VOID)
{
	ULONG Pointer = (CdxLbaPlw + (G.Player.Id * 8));
	newfpos* File = (newfpos*)Pointer;

	CdReadEx(File->sector, 0xA4, (ULONG*)pPlwIndex, 20);
}