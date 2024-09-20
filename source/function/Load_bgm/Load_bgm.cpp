/*
*
*	Megan Grass
*	March 27, 2014
*
*/

#include "..\\..\\BIO2\\BIO2.H"

#include "..\\..\\CUSTOM\\CUSTOM.H"

ULONG Load_bgm(UCHAR Type, ULONG* Address)
{
	newfpos* File;

	//ULONG* Address = (ULONG*)(((ULONG)G.pFree_work + 0x10) & 0xFFFFFFF0);

	BGMCTR* pBgmId = (BGMCTR*)(pBgmTable + (G.SaveData.Room_no * 2));

	if (Type == 0)
	{
		File = (newfpos*)(pSndMainIndex + ((pBgmId->Main & 0x3F) * 8));
	}
	else
	{
		File = (newfpos*)(pSndSubIndex + ((pBgmId->Sub & 0x3F) * 8));
	}

	if (File->size == 0) { return 0xFFFFFFFF; }

	return CdReadEx(File->sector, File->size, Address, 0);
}