/*
*
*	Megan Grass
*	March 27, 2014
*
*/

#include "..\\..\\BIO2\\BIO2.H"

#include "..\\..\\CUSTOM\\CUSTOM.H"

VOID Plmv00_pad(ENEMY_WORK* pEm, ULONG Key, ULONG Key_trg)
{
    if ((pEm->Routine_2 == 0) || (pEm->Move_cnt == 0))
    {
        CHAR D_life_u = pEm->D_life_u;

        pEm->D_life_u = 0;

        if (pEm->Life < 101)
        {
            pEm->D_life_u = 1;
        }

        if (G.Pl_poison_timer != 0)
        {
            pEm->D_life_u = 1;
        }

        if (pEm->Life < 21)
        {
            pEm->D_life_u = 2;
        }

        if (D_life_u != pEm->D_life_u)
        {
            pEm->Routine_2 = 0;
        }
    }

    if (Key & (KEY_RIGHT | KEY_LEFT))
    {
        *(ULONG*)((ULONG)pEm + 0x04) = 0x401;
    }

    if (Key & KEY_DOWN)
    {
        // quick-turn while idle
        if (Key_trg & KEY_RUN)
        {
            *(ULONG*)((ULONG)pEm + 0x04) = 0xC01;
            return;
        }

        *(ULONG*)((ULONG)pEm + 0x04) = 0x301;
    }

    if (Key & KEY_UP)
    {
        *(ULONG*)((ULONG)pEm + 0x04) = 0x101;

        if (Key & KEY_RUN)
        {
            *(ULONG*)((ULONG)pEm + 0x04) = 0x201;
        }
    }

    if ((Key & KEY_INSPECT) || (Key_trg & KEY_INSPECT))
    {
        if ((*(USHORT*)((INT)&pEm->Sca_info + 2) & 0x10) != 0)
        {
            Sca_hit_stairs(pEm, 450, pStairs);
            return;
        }

        if (Oma_pl_updown_ck(pEm->Id + 4))
        {
            return;
        }

        if (Key_trg & KEY_INSPECT)
        {
            G.Status_flg |= STAT_INSPECT;
        }
    }

    if ((Key & KEY_AIM) && ((pEm->Type & 0xFFF) != 0))
    {
        *(ULONG*)((ULONG)pEm + 0x04) = 0x501;
    }
}

VOID pl_mv0c(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq)
{
    if (pEm->Routine_2 == 0)
    {
        pEm->Routine_2 = 1;
        pEm->Move_no = 0;
        pEm->Move_cnt = 0;
        pEm->Hokan_flg = 7;
        pEm->Mplay_flg = 0;
        pEm->Spd_x = 0;
        pEm->Spd_y = 0;
        pEm->Timer2 = 0;
        pEm->Timer3 = 0;
        G.Status_flg = G.Status_flg & 0xffffff3f;
        G.Room_player_flg |= 2;
    }

    if (pEm->Timer3 >= 8)
    {
        /*ULONG v1 = *(ULONG*)pEm->pNow_seq;
        ULONG v0 = v1 & 0x2000;
        v0 >>= 13;
        ULONG a1 = v0 << 1;
        a1 += v0;
        a1 += 4;

        Snd_se_walk(0, a1, pEm);*/

        Snd_se_walk(0, ((*pEm->pNow_seq & 0x2000) >> 13) * 3 + 4, pEm);

		G.Room_player_flg |= 2;

        *(ULONG*)((ULONG)pEm + 0x04) = 0x01;

        return;
    }

    pEm->Move_cnt = (pEm->Timer3 + 6);

    pEm->Timer3++;

    G.Player.Cdir_y -= 256;

    Spd_get(pEm, Kan, Seq, 0);

    Joint_move(pEm, Kan, Seq, 0x200);

}

VOID pl_mv03_action(ENEMY_WORK* pEm)
{
    Add_speedXZ(pEm, 0);

    // quick-turn while walking backward
    if (G.Key_trg & KEY_RUN)
    {
        *(ULONG*)((ULONG)pEm + 0x04) = 0xC01;
    }
}

VOID pl_mv05_action(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key)
{
	// quick-reload
    if (Key & KEY_RUN)
    {
        UCHAR Id = G.SaveData.Item_work[St.Equip_item_no].Id;

        LONG Bullet_id = Search_item_id((Item_data_tbl[Id].Item_mix_data)->Object_item_id);

        if ((Bullet_id != -1) && (G.SaveData.Item_work[St.Equip_item_no].Num < Item_data_tbl[Bullet_id].Item_max))
        {
            pEm->Routine_2 = 4;
            pEm->Routine_3 = 0;
        }
    }

    if (Key & KEY_LEFT)
    {
        pEm->Cdir_y -= 64;
    }

    if (Key & KEY_RIGHT)
    {
        pEm->Cdir_y += 64;
    }

    Joint_move(pEm, Kan, Seq, 0x200);
}

VOID TamaReload(ENEMY_WORK* pEm)
{
    UCHAR Id = G.SaveData.Item_work[St.Equip_item_no].Id;

    LONG Bullet_id = Search_item_id((Item_data_tbl[Id].Item_mix_data)->Object_item_id);

    if ((Bullet_id != -1) && (G.SaveData.Item_work[St.Equip_item_no].Num < Item_data_tbl[Bullet_id].Item_max))
    {
        UCHAR Count = Item_data_tbl[Bullet_id].Item_max - G.SaveData.Item_work[St.Equip_item_no].Num;

        if (G.SaveData.Item_work[Bullet_id].Num < Count)
        {
            Count = G.SaveData.Item_work[Bullet_id].Num;
        }

        G.SaveData.Item_work[St.Equip_item_no].Num += Count;

        G.SaveData.Item_work[Bullet_id].Num -= Count;

        if (G.SaveData.Item_work[Bullet_id].Num == 0)
        {
            G.SaveData.Item_work[Bullet_id].Id = 0;

            Sort_item();
        }
    }
}