/*
*
*	Megan Grass
*	March 27, 2014
*
*/

#include "..\\..\\BIO2\\BIO2.H"

#include "..\\..\\CUSTOM\\CUSTOM.H"


ULONG CdReadSound(ULONG File_no, ULONG Mode, ULONG* Address, ULONG Vab_id, UCHAR* Mess)
{
    bool bVabReady = false;
    SHORT vabid = 0;
    ULONG CdReadSoundCntBak = 0;

retry:

    if (Mode == 0)
    {
        newfpos* File = (newfpos*)&floc[File_no];
        CD.Fsize = File->size;
        CD.Fsector = File->sector;
    }

    for (UCHAR i = 0; i < 12; i++)
    {
        CD.Ring_status[i] = 0;
        CD.Ring_size[i] = 0;
    }

    CdReadSoundCnt = 0;
    CD.Cd_rtn_no = 1;
    CD.Type = 2;
    //CD.Fno = File_no;
    CD.Fsector_read = 0;
    CD.Fsize_read = 0;
    CD.Limit_break = 0;
    CD.Write_ctr = 0;
    CD.Read_ctr = 0;
    CD.First_flg = 0;
    CD.Time_ctr = 0;
    CD.Fsector_num = ((CD.Fsize + 0x7FF) >> 11);
    CD.Current_sector = CD.Fsector;
    CD.Fsize_now = CD.Fsize;
    CD.Buff_adr = Address;

    DsFlush();

    DsIntToPos(CD.Current_sector, &CD.Fpos);

    DsSyncCallback(Cd_seek);

    while (DsCommand(9, 0, 0, -1) == 0) {}

    while (DsCommand(14, &cdread_s_cdmode, 0, -1) == 0) {}

    while (DsCommand(21, &CD.Fpos.minute, 0, -1) == 0) {}

    DsReadyCallback(Cd_ready_cb);

    while (DsCommand(6, &CD.Fpos.minute, 0, -1) == 0) {}

    while (true)
    {
        if (DsSystemStatus() == 1)
        {
            if ((DsStatus() & 0x20) == 0)
            {
                CD.Cd_rtn_no = 6;
            }
            else if ((CD.Fsize_now == 0) && (CD.Fsector_num == 0))
            {
                CD.Cd_rtn_no = 0;
                CD.Limit_break = 0;
                while (DsCommand(9, 0, 0, -1) == 0) {}
            }
        }

        while (CD.Ring_status[CD.Write_ctr] != 0)
        {
            if (CD.First_flg == 0)
            {
                CD.First_flg = 1;
            }
            else
            {
                CdReadSoundCnt = 0;
                while (SsVabTransCompleted(0) == 0)
                {
                    CdReadSoundCntBak = CdReadSoundCnt + 1;
                    bVabReady = 3000 < (ULONG)CdReadSoundCnt;
                    CdReadSoundCnt = CdReadSoundCntBak;
                    if (bVabReady)
                    {
                        EnterCriticalSection();
                        DeliverEvent(0xF0000009, 0x20);
                        ExitCriticalSection();
                    }
                }
            }

            vabid = SsVabTransBodyPartly((UCHAR*)(CD.Buff_adr + (ULONG)CD.Write_ctr * 0x200), CD.Ring_size[CD.Write_ctr], Vab_id);

            if (vabid == Vab_id)
            {
                CdReadSoundCnt = 0;
                while (SsVabTransCompleted(0) == 0)
                {
                    CdReadSoundCntBak = CdReadSoundCnt + 1;
                    bVabReady = 3000 < (ULONG)CdReadSoundCnt;
                    CdReadSoundCnt = CdReadSoundCntBak;
                    if (bVabReady)
                    {
                        EnterCriticalSection();
                        DeliverEvent(0xF0000009, 0x20);
                        ExitCriticalSection();
                    }
                }
            }

            if (vabid == 0xFFFFFFFF)
            {
                DsSyncCallback(0);

                DsReadyCallback(0);

                while (SsVabTransCompleted(0) == 0) {}

                Task_sleep(30);

                CD.Cd_rtn_no = 0;

                return 0xFFFFFFFF;
            }

            CD.Ring_status[CD.Write_ctr] = 0;

            CD.Write_ctr++;

            if (CD.Write_ctr == 12)
            {
                CD.Write_ctr = 0;
            }

        }

        Task_sleep(1);

		if (1 < CD.Cd_rtn_no) goto retry;

        if (CD.Cd_rtn_no == 0)
        {
            return CD.Fsize_read;
        }

    }
}