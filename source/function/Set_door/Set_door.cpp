
void Set_door(void)
{
    unsigned int uVar1;
    unsigned long uVar2;
    unsigned int uVar3;

    FUN_80039694();

    if ((G.System_flg & SYS_ZAPPING) != 0)
    {
        FUN_80015128();
    }

    uVar1 = G.System_flg | 0x2000000;
    uVar3 = G.System_flg & SYS_ZAPPING;

    G.System_flg = uVar1;

    if ((uVar3 == 0) || (uVar2 = Flg_ck(G.SaveData.Zapping_flg, 0x3F), uVar2 == 0))
    {
        Bg_set_mode(2, 0);
        Task_execute(1, Door_main);
        Task_sleep(1);
        Door_snd_trans();
        Task_sleep(1);
    }
    else
    {
        DAT_800dcc1e = 0;
        G.Next_cut_no = (uchar)G.SaveData.Cut_no;
        Task_execute(1, FUN_800335c0);

        while (((G.System_flg & 0x2000000) != 0 && (DAT_800dcc1e != 4)))
        {
            Task_sleep(1);
        }
    }

    G.Player.Old_x = (G.pSce_aot_on)->Next_pos_x;
    G.Player.Pos_x = G.Player.Old_x;
    G.Player.Old_y = (G.pSce_aot_on)->Next_pos_y;
    G.Player.Pos_y = G.Player.Old_y;
    G.Player.Old_z = (G.pSce_aot_on)->Next_pos_z;
    G.Player.Pos_z = G.Player.Old_z;
    G.Player.Cdir_y = (G.pSce_aot_on)->Next_cdir_y;
    G.Player.nFloor = (G.pSce_aot_on)->Next_nfloor;
    G.Player.Ground = (ushort)G.Player.nFloor * -0x708;
    G.Next_cut_no = (G.pSce_aot_on)->Next_cut;
    G.SaveData.Room_no_old = G.SaveData.Room_no + (G.SaveData.Stage_no + 1) * 0x100;
    G.SaveData.Cut_no = G.Next_cut_no;
    G.SaveData.Room_no = (G.pSce_aot_on)->Next_room;
    uVar3 = (G.pSce_aot_on)->Next_stage % 9;
    G.Player.Sca_old_x = G.Player.Old_x;
    G.Player.Sca_old_z = G.Player.Old_z;

    if (G.SaveData.Stage_no != uVar3)
    {
        G.SaveData.Stage_no = uVar3;
        Set_stage();
    }

    while ((G.Status_flg & 0x20000) != 0)
    {
        Task_sleep(1);
    }

    Snd_bgm_ck();
    Kage_work_init();
    Kage_work9_init();
    Set_room();

    while ((G.System_flg & 0x2000000) != 0)
    {
        Task_sleep(1);
    }

    Bg_set_mode(0, 0);
    Cut_check(1);
    Main.Bg_chg_flg = 1;
    Task_sleep(1);

    if ((G.Status_flg & 0x400000) != 0)
    {
        Bg_set_mode(2, 0);
        G.Status_flg = G.Status_flg & 0xffbfffff;
    }

}

