/*
*
*	Megan Grass
*	March 27, 2014
*
*/

#include "..\\..\\BIO2\\BIO2.H"

#include "..\\..\\CUSTOM\\CUSTOM.H"

VOID XaPlay(ULONG mode, ULONG no)
{
    USHORT* pwd;
    SHORT file_no;
    newfpos* File;
    ULONG XaSector;
    USHORT Channel;

    //move       a3, no
    //sll        v0, a3, 1
    //addu       v0, v0, a3
    //sll        v0, v0, 1
    //addu       pwd, pwd, v0

    __asm__ volatile ("move $7,$5");

    if (mode == 0)
    {
        pwd = G.pXa_sector;
        file_no = Xa_no[G.SaveData.Stage_no + 1];

        if (G.SaveData.Stage_no == 7)
        {
            pwd = (USHORT*)(Xa_sector00[0xD] + 1);
            file_no = Xa_no[8];
        }
        __asm__ volatile ("sll $2, $7, 1");
    }
    else
    {
        pwd = (USHORT*)Xa_sector00;
        file_no = Xa_no[0] & 0xFFFF;
        __asm__ volatile ("sll $2, $7, 1");
    }

    __asm__ volatile ("addu $2, $2, $7");
    __asm__ volatile ("sll $2, $2, 1 ");
    __asm__ volatile ("addu %0, %1, $2 " : "=r" (pwd) : "r" (pwd));

	//Channel = *(USHORT*)pwd;    // this is wrong

    __asm__ volatile ("lhu %0, 0(%1)" : "=r" (CD.Filter.chan) : "r" (pwd));

    File = (newfpos*)&floc[file_no];

    XaSector = (File->sector + -0x1E);

    CD.Filter.file = 1;
    //CD.Filter.chan = (SHORT)pwd;
    CD.Start_sector = File->sector + pwd[1] * 0x10 + *pwd;
    CD.End_sector = XaSector + (pwd[1] + pwd[2]) * 0x10 + *pwd;
    CD.Current_sector = CD.Start_sector;
    DsIntToPos(CD.Start_sector, (DslLOC*)&CD.Fpos);
    SsSetSerialAttr(0, 0, 1);
    CD.Xa_rtn_no = 1;
    CD.Limit_break = 0;
    CD.Type = 0;
    CD.Status = 0;
    CD.Use_mode = 1;
    Change_volume(1);
    G.Status_flg |= STAT_XA_VOICE;
    DsFlush();
    DsSyncCallback(Xa_seek);

    while (DsCommand(0x09, 0, 0, -1) == 0) {}

    while (DsCommand(0x0D, &CD.Filter.file, 0, -1) == 0) {}

    while (DsCommand(0x0E, &xa_cdmode, 0, -1) == 0) {}

    while (DsCommand(0x15, &CD.Fpos.minute, 0, -1) == 0) {}

    while (DsCommand(0x1B, &CD.Fpos.minute, 0, -1) == 0) {}
}