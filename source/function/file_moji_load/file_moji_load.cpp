/*
*
*	Megan Grass
*	March 27, 2014
*
*/

#include "..\\..\\BIO2\\BIO2.H"

#include "..\\..\\CUSTOM\\CUSTOM.H"

VOID FileMojiLoad(VOID)
{
    newfpos* File = (newfpos*)&floc[FILES_TIM];

    ULONG file_no = File_offset[G.SaveData.File_tag_bk[St.F_sel_book + St.F_sel_file]];     // what?

    if (St.Fread_char != 0)
    {
        file_no++;
        file_no += St.F_page_no;
    }

    CD.Fsize = fits_floc[file_no].size;

    CD.Fsector = File->sector + ((fits_floc[file_no].sec_high << 0x10) + fits_floc[file_no].sector);

    Cd_read(FILES_TIM, (ULONG*)0x801A0000, 3, 0);

    Task_exit();
}