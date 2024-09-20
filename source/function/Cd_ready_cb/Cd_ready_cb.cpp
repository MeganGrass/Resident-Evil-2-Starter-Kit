/*
*
*	Megan Grass
*	March 27, 2014
*
*/

#include "..\\..\\BIO2\\BIO2.H"

#include "..\\..\\CUSTOM\\CUSTOM.H"

VOID CdReadyCallback(UCHAR intr, UCHAR* result)
{
    ULONG Position = 0;
    ULONG Read_ctr = (ULONG)CD.Read_ctr;

    if (intr == 5)
    {
        DsSyncCallback(0);
        DsReadyCallback(0);
        CD.Cd_rtn_no = 2;
    }
    else if (intr == 1)
    {
        while (DsGetSector(CD.Work_buf, 3) == 0) {}

        Position = DsPosToInt((DslLOC*)CD.Work_buf);

        if (CD.Current_sector == Position)
        {
            CD.Current_sector++;
            CD.Limit_break = 0;
            CD.Fsector_num--;
            CD.Fsector_read++;

            if (CD.Type == 1)
            {
                if (CD.Fsize_now < 0x801)
                {
                    while (DsGetSector(CD.Work_buf, 0x200) == 0) {}
                    Memcpy(CD.Read_adr, CD.Work_buf, CD.Fsize_now);
                    Position = CD.Fsize_now;
                    CD.Fsize_now = 0;
                    CD.Fsize_read += Position;
                    DsReadyCallback(0);
                }
                else
                {
                    while (DsGetSector(CD.Read_adr, 0x200) == 0) {}
                    CD.Fsize_now -= 0x800;
                    CD.Fsize_read += 0x800;
                    CD.Read_adr += 0x200;
                }
            }
            else if (CD.Type == 2)
            {
                if (CD.Ring_status[Read_ctr] == 0)
                {
                    while (DsGetSector(CD.Buff_adr + Read_ctr * 0x200, 0x200) == 0) {}

                    CD.Ring_status[Read_ctr] = 1;

                    if (CD.Fsize_now < 0x801)
                    {
                        CD.Ring_size[Read_ctr] = (USHORT)CD.Fsize_now;
                        Position = CD.Fsize_now;
                        CD.Fsize_now = 0;
                        CD.Fsize_read += Position;
                        DsReadyCallback(0);
                    }
                    else
                    {
                        CD.Fsize_now = CD.Fsize_now -= 0x800;
                        CD.Ring_size[Read_ctr] = 0x800;
                        CD.Fsize_read += 0x800;
                    }

                    CD.Read_ctr++;

                    if (CD.Read_ctr == 12)
                    {
                        CD.Read_ctr = 0;
                    }

                }
                else
                {
                    CD.Cd_rtn_no = 5;
                }
            }
        }
        else
        {
            CD.Cd_rtn_no = 3;
        }
    }

}