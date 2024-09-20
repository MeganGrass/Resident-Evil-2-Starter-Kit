/*
*
*	Megan Grass
*	March 27, 2014
*
*/

#include "..\\..\\BIO2\\BIO2.H"

#include "..\\..\\CUSTOM\\CUSTOM.H"

VOID Set_Disk(VOID)
{
	ULONG iXa = VOICE00_XAS;
	ULONG iRdt = STG0001_CDX;

	switch (SysDisk)
	{
	case 1:
		iXa += 10;
		iRdt = STG0101_CDX;
		break;
	case 2:
		iRdt = STGEX01_CDX;
		break;
	}

	CdxLbaXa = (pFileIndex + (iXa * 8));
	CdxLbaRdt = (pFileIndex + (iRdt * 8));

	for (INT i = 0; i < 10; i++, iXa++)
	{
		Xa_no[i] = iXa;
	}
}