/*
*
*	Megan Grass
*	March 27, 2014
*
*/

#include "..\\..\\BIO2\\BIO2.H"

#include "..\\..\\CUSTOM\\CUSTOM.H"

VOID Load_Stage(VOID)
{
	ULONG pSector = (G.SaveData.Stage_no * 8) + 4;

	CdReadEx(*(ULONG*)(CdxLbaBss + pSector), 0x800, (ULONG*)0x80198000, 48);	// using 0x80198000 as a buffer area

	memcpy16((ULONG*)pBssIndex, (ULONG*)0x80198000, 0x180);

	ULONG pNewBGM = 0;

	switch (SysScenario)
	{
	case 0:
		pNewBGM = 0x80198180;		// [Scenario A]
		break;
	case 1:
		pNewBGM = 0x801981E0;		// [Scenario B]
		break;
	case 2:
		pNewBGM = 0x80198300;		// 4th Survivor
		break;
	case 3:
		pNewBGM = 0x80198360;		// Ex-Battle
		break;
	}

	if ((SysScenario == 0) || (SysScenario == 1))
	{
		if (((G.Player.Id & 1) != 0) && (G.Player.Id != 0x0B) && (G.Player.Id != 0x0C) && (G.Player.Id != 0x0D) || (G.Player.Id == 0x0E))
		{
			pNewBGM += 0xC0;		// PL1
		}
	}

	memcpy16((ULONG*)pBgmTable, (ULONG*)pNewBGM, 0x60);

	if (((G.Player.Id & 1) == 0) || (G.Player.Id == 0x0B) || (G.Player.Id == 0x0C) || (G.Player.Id == 0x0D) && (G.Player.Id != 0x0E))
	{
		memcpy16((ULONG*)pXasTable, (ULONG*)0x801983C0, 0x220);		// PL0
	}
	else
	{
		memcpy16((ULONG*)pXasTable, (ULONG*)0x801985E0, 0x220);		// PL1
	}

	CdReadEx(*(ULONG*)(CdxLbaRdt + pSector), 0x180, (ULONG*)pRdtIndex, 48);

	//G.pBs_size = 0;
	//G.pBs_check_sum = 0;
	//G.pXa_sector = (USHORT*)pXasTable;	// This is already set at boot
	G.pFree_work_head = (UCHAR*)RDTFile;
}