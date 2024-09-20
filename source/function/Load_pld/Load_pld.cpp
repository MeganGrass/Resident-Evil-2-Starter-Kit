/*
*
*	Megan Grass
*	March 27, 2014
*
*/

#include "..\\..\\BIO2\\BIO2.H"

#include "..\\..\\CUSTOM\\CUSTOM.H"

VOID LoadPld(VOID)
{
	ULONG Pointer = (pPldIndex + (G.Player.Id * 8));
	newfpos* File = (newfpos*)Pointer;

	CdReadEx(File->sector, File->size, (ULONG*)PLDFile, 0);
}