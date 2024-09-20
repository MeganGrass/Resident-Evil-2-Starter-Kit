/*
*
*	Megan Grass
*	March 27, 2014
*
*/

#include "..\\..\\BIO2\\BIO2.H"

#include "..\\..\\CUSTOM\\CUSTOM.H"

VOID EmdLoadFile(ULONG Em_no, ULONG* Address)
{
	ULONG File_no = 0;
	ULONG Offset = 0;

	if (((G.Player.Id & 1) != 0) && (G.Player.Id != 0x0B) && (G.Player.Id != 0x0D) || (G.Player.Id == 0x0E))
	{
		File_no = EMD01_CDX;
		CD.Fsize = cdemd1_pos[Em_no].Size;
		Offset = cdemd1_pos[Em_no].Offset;
	}
	else
	{
		File_no = EMD00_CDX;
		CD.Fsize = cdemd0_pos[Em_no].Size;
		Offset = cdemd0_pos[Em_no].Offset;
	}

	newfpos* File = (newfpos*)&floc[File_no];

	CD.Fsector = File->sector + Offset;

	//Cd_read(File_no, Address, 3, 0);

	CdReadEx(CD.Fsector, CD.Fsize, Address, 0);
}