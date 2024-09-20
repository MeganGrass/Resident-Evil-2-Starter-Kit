/*
*
*	Megan Grass
*	March 27, 2014
*
*/


#include "..\\..\\BIO2\\BIO2.H"


ULONG Cd_ReadEx(ULONG Sector, ULONG Size, ULONG* Address, UINT Parse)
{

retry:

	CD.Fsector = Sector;
	CD.Current_sector = Sector;
	CD.Fsize = Size;
	CD.Fsize_now = Size;
	CD.Fsector_num = ((Size + 0x7FF) >> 11);
	CD.Read_adr = Address;
	CD.Cd_rtn_no = 1;
	CD.Type = 1;
	CD.Fsize_read = 0;
	CD.Fsector_read = 0;
	//CD.Fno = 0;
	CD.Limit_break = 0;
	CD.Time_ctr = 0;
	//*(ULONG*)0x8009A410 = 0;

	DsFlush();

	DsIntToPos(CD.Current_sector, (DslLOC*)&CD.Fpos);

	DsSyncCallback(Cd_seek);

	while (DsCommand(0x09, (UCHAR*)0, 0, -1) == 0) {}

	while (DsCommand(0x0E, &cdread_cdmode, 0, -1) == 0) {}

	while (DsCommand(0x15, &CD.Fpos.minute, 0, -1) == 0) {}

	DsReadyCallback(Cd_ready_cb);

	while (DsCommand(0x06, &CD.Fpos.minute, 0, -1) == 0) {}

	do {
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
				while (DsCommand(0x09, (UCHAR*)0, 0, -1) == 0) {}
			}
		}
		/*else
		{
			*(ULONG*)0x8009A410 = *(ULONG*)0x8009A410 + 1;
			if (600 < *(ULONG*)0x8009A410)
			{
				*(ULONG*)0x8009A40C = 0;
				CD.Cd_rtn_no = 6;
			}
		}*/

		/*if (CdReadMode == 0)
		{
			VSync(0);
		}
		else
		{
			Task_sleep(1);
		}*/
		VSync(0);

		if (1 < CD.Cd_rtn_no) goto retry;

		if (CD.Cd_rtn_no == 0) break;

	} while (true);

	for (; Parse != 0; Parse = Parse + -1)
	{
		Address[1] = CD.Fsector + Address[1];
		Address = Address + 2;
	}

	return CD.Fsize_read;
}