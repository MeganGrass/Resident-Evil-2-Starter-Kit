/*
*
*	Megan Grass
*	March 27, 2014
*
*/


#include "..\\..\\BIO2\\BIO2.H"

#include "..\\..\\CUSTOM\\CUSTOM.H"


ULONG CdRead(ULONG File_no, ULONG* Address, ULONG Mode, UCHAR* Mess)
{
    newfpos* File = (newfpos*)(pFileIndex + (File_no << 3));

    if (Mode < 2)
    {
        CD.Fsize = File->size;
        CD.Fsector = File->sector;
        CdReadMode = Mode;
    }
    else
    {
        CdReadMode = Mode - 2;
    }

	return CdReadEx(CD.Fsector, CD.Fsize, Address, 0);
}