/*
*
*	Megan Grass
*	March 27, 2014
*
*/

#include "..\\..\\BIO2\\BIO2.H"

#include "..\\..\\CUSTOM\\CUSTOM.H"

VOID SetEnemySound(VOID)
{
    INT Timer = 0;

    UCHAR* pData;

    newfpos* File = (newfpos*)(pFileIndex + (SNDEMD_CDX << 3));

    UnknownSndSysFlg = 1;

    while (true)
    {
        Task_sleep(1);

        SpuSetTransferMode(0);

        ULONG enem_type_no = G.Em_se_set_no;

        ULONG snd_buf = RoomVbSize + 0x14440;   // what is this magic number?

        if (Vab_id[3] != 0xFF)
        {
            SsVabClose(Vab_id[3]);
            Vab_id[3] = 0xFF;
        }

        if (enem_type_no == 0xFF) break;

        pEdt_adr[5] = Enemy_edt;

        CD.Fsize = EnemSE_floc[enem_type_no * 2].size;
        CD.Fsector = File->sector + EnemSE_floc[enem_type_no * 2].sector + (EnemSE_floc[enem_type_no * 2].sec_high * 0x10000);
        ULONG Fsize_read = Cd_read(SNDEMD_CDX, (ULONG*)&Enemy_edt, 3, 0);

        pVh_tbl[3] = (ULONG*)(&Enemy_edt.id_check + *(int*)(0x801f8e08 + Fsize_read));

        do {
            Task_sleep(1);
        } while (!SsVabTransCompleted(0));

        Vab_id[3] = SsVabOpenHeadSticky((UCHAR*)pVh_tbl[3], 3, snd_buf);

        if (Vab_id[3] == 0xFFFFFFFF)
        {
            Timer++;
            FUN_800594c8(3, 0);
            if (Timer == 8)
            {
                Task_sleep(1);
                return;
            }
        }
        else
        {
            Timer = 0;

            enem_type_no = (enem_type_no << 4);
			enem_type_no |= 8;

            CD.Fsize = EnemSE_floc[enem_type_no].size;
            CD.Fsector = File->sector + EnemSE_floc[enem_type_no].sector + (EnemSE_floc[enem_type_no].sec_high * 0x10000);

            if (Cd_read_s(SNDEMD_CDX, 1, (ULONG*)VBFile, Vab_id[3], 0) != 0xFFFFFFFF)
            {
                Pl_set_packet();
                Task_sleep(1);
                UnknownSndSysFlg = 0;
                return;
            }
        }
    }
}