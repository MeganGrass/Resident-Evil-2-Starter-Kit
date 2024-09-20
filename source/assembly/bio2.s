
	opt	c+

OVERLAY	group

	section OVERLAY.data

	;; CUSTOM
	global BuildDate
	global CdxLbaBin
	global CdxLbaBss
	global CdxLbaDat
	global CdxLbaDo2
	global CdxLbaEmd0
	global CdxLbaEmd1
	global CdxLbaPld
	global CdxLbaPlw
	global CdxLbaSndArms
	global CdxLbaSndCore
	global CdxLbaSndEmd
	global CdxLbaSndMain
	global CdxLbaSndSub
	global CdxLbaRdt
	global CdxLbaXa
	global CdxLbaStr
	global SysDisk
	global SysLanguage
	global SysScenario
	global SysController
	global SysAutoAim
	global BootWeapon
	global DebugValue
	global DebugFlag
	global CdReadMode
	global ItoxBuffer
	global CdReadEx
	global LoadPlwTable
	global SetDisk
	
	;; ASSEMBLY
	global desld_set
	global desld
	global memcpy16
	global setexmask

	;; CD.C
	global Cd_init
	global Cd_system_control
	global Xa_play
	global Xa_control
	global Xa_control_stop
	global Xa_control_init
	global Xa_control_play
	global Xa_seek
	global Xa_control_end
	global Cd_read
	global Cd_read_s
	global Cd_seek
	global Cd_cdsync_cb
	global Cd_ready_cb
	global Cd_set_stereo
	global Set_volume
	global Change_volume

	;; DOOR.C
	global Door_main
	global Door_init
	global Door_move
	global Door_scheduler_main
	global Door_exit
	global Door_Trans
	global DoorSort
	global Door_model_init
	global Door_model_set
	global Door_snd_trans
	global Door_texture_load

	;; EM_SUB.C
	global Hani_ck
	global Add_speedXZ
	global Add_speedXYZ
	global Add_speedXYZsuper
	global Direction_ck
	global Goto00
	global Goto00_ck
	global Goto01
	global Goto01_ck
	global Dir_pos_ck
	global L_pos_ckXZ
	global L_pos_ckXZM
	global Cdir_ck
	global Cdir_ck2
	global Gacha_ch
	global Sikai_ck
	global Set_base_pos
	global Null_pos_set
	global get_null_pos
	global Spd_get
	global Rnd
	global Em_seq_sound
	global move_kuchi
	global Tex_Ani_move
	global Foot_set_pl
	global Kage_work_init
	global Kage_work9_init
	global Kage_work_set
	global Kage_work9_set
	global MulKage
	global Kage_work_sort
	global Kage_work9_sort
	global Kage_work_color_set
	global Kage_work9_color_set
	global Texture_Move
	global Texture_Move_GT3
	global Texture_Move_GT4
	global Texture_Move_GT4_up
	global Rot_neck
	global Rot_neck_em
	global Rot_neck_em_n
	global Neck_Dir_ZY
	global Op_PartsSort00
	global Op_PartsSort05
	global Op_PartsSort06
	global Kami_rot05
	global W_rot
	global W_rot_x
	global Rbj_set
	global Em_dead_flg_on
	global Aida_Jh_init
	global Aida_Jh_move
	global Kg_Jh_init
	global Kg_Jh_move
	global Jh_set
	global MulJh
	global Aida_Jh_sort
	global Jh_sort

	;; EM_SUB2.C
	global Approach
	global Approach_one
	global Mot_play
	global Mot_play2
	global Mot_play_init
	global Mot_play_sp
	global Mot_play2_sp
	global Mot_play2_spxz
	global Em_init_super
	global Branch
	global Ck_em_id
	global Goto00_super
	global Goto01_super
	global Get_parts_world_dir

	;; EM_SET.C
	global Enemy_work_set
	global Em_set
	global Emd_load
	global Set_enemy_work
	global Kill_enemy_work
	global Em_move_tbl_set
	global Em_bin_load
	global Emd_load_file

	;; ESP
	global Esp_init_C
	global Esp_init_R
	global Esp_data_set0
	global Esp_data_set1
	global Esp_call
	global Esp_call3D
	global Esp_call3D2
	global Esp_call2
	global Esp_call3
	global Esp_kill
	global Esp_kill2
	global Esp_die
	global Esp_ctrl
	global Esp_ctrl2
	global Esp_ctrl3
	global Esp_ctrl4
	global Esp_move
	global Esp_pos

	;; GAME.C
	global Game_loop
	global Set_door
	global Gun_light_set
	global Gun_light_reset

	;; JOINT.C
	global Joint_trans2
	global ko_joint_trans2
	global SortGT3_neo
	global SortGT4_neo
	global ko_joint_trans3
	global PartsWork_set
	global PartsWork_link
	global Init_Parts_work
	global Mem_ck_Parts_work
	global Joint_pos_trans
	global Parts_down
	global Parts_bomb
	global Parts_ryu
	global HMatrix
	global HMatrix1
	global Model_color_plus
	global Joint_move
	global J_seq
	global J_seq_hokan
	global rot_data_set02
	global rot_data_set03
	global hokan_svec
	global Pl_set_packet2
	global Pl_set_packet
	global Joint_move_p
	global Joint_move2
	global J_seq2

	;; LINE_SCR.C
	global Scr_effect
	global Scr_quake
	global Scr_rasta
	global line_trans
	global line_scr_end
	global line_mode_set
	global Line_work_init

	;; MAIN.C
	global main
	global Init_system
	global InitGeom_func
	global Init_main
	global Swap_Cbuff
	global Bg_set_mode
	global Bg_draw
	global Fade_set
	global Fade_start
	global Fade_adjust
	global Fade_off
	global Fade_status
	global System_trans
	global Init_global
	global Cut_check
	global Cut_change
	global Ccut_serach
	global Hit_ck_point4
	global Hit_ck_box
	global Card_event_set
	global Logo

	;; MD_SUB.C
	global PresetObjectGT3_neo
	global PresetObjectGT4_neo
	global CompM
	global mapModelingData
	global MulLMatrix
	global SortGT3_lno
	global SortGT4_lno
	global Bomb_Parts_SortGT3
	global Bomb_Parts_SortGT4
	global Ryu_Parts_SortGT3
	global Ryu_Parts_SortGT4
	global mirror_TMD_GT3
	global mirror_PACKET_GT3
	global mirror_TMD_GT4
	global mirror_PACKET_GT4
	global Mirror_model_cp
	global Init_mirror_weapon
	global Mirror_weapon_cp
	global Parts_work_cp
	global Mirror_view
	global Mirror_in_view
	global Mirror_trans
	global Mirror_matrix_set
	global Late_set

	;; MEM_CARD.C
	global Mem_card
	global Card_access
	global Cardaccess_init
	global Cardaccess_exit
	global MC_Mess_disp
	global Cursor_disp
	global Search_f_num
	global Check_card
	global Wslot_check
	global Card_mess_make
	global Save_push
	global Load_pop
	global Clear_event
	global Clear_event2
	global Card_write
	global Card_read
	global Card_search
	global Card_check
	global Card_format_check
	global Card_format
	global Get_card_event
	global Get_card_event2
	global Card_clear

	;; MIZU_SYS.C
	global Mizu_trans
	global Mizu_div_ck
	global Mizu_div_main

	;; MOJIDISP.C
	global Print8
	global Print14
	global Print_main
	global Mess_set
	global Moji_trans_main
	global Mess_disp
	global Branch_disp
	global name_ptr_set
	global mess_trans
	global Name_disp
	global Mess_print
	global moji_trans_main
	global moji_trans_8
	global moji_trans_14
	global Moji_buff_init
	global Moji_init
	global Moji_mode_init

	;; MONITOR.C
	global Init_scheduler
	global Scheduler
	global Task_lexecute
	global Task_lchain
	global Task_execute
	global Task_sleep
	global Task_exit
	global Task_kill
	global Task_chain
	global Task_suspend
	global Task_signal
	global Task_status

	;; MOVIE.C
	global Init_movie_work
	global Movie
	global Movie_init
	global Movie_main
	global Movie_end
	global Movie_exit
	global Open_movie
	global Play_movie
	global Close_movie
	global RuntoImage
	global Mdec_callback
	global Movie_cinesco_init
	global Movie_cinesco_set
	global Fwd_movie
	global Movie_xa_start
	global Movie_xa_stop
	global Set_movie_volume2
	global CdReset2
	global Caption_set
	global Caption_print
	global Decomp_caption

	;; OBA.C
	global Oba_ck_hit
	global Oba_ck_only
	global Oba_set_ofs
	global Oba_ck_em
	global Oba_ck_em2
	global Sca_ck_em

	;; OM.C
	global Om_init
	global Col_chg_init
	global Tex_chg_init
	global Tex_ctr
	global Col_chg
	global Tex_chg
	global Om_move
	global Om_trans
	global Om_move_box
	global Om_set_fall_dir
	global Ob_test_load2
	global Oma_set_ofs
	global Om_explosion_set

	;; OMA.C
	global Oma_ck_oba
	global Oma_ck_om
	global Oma_ck_front
	global Oma_pl_updown_ck
	global Oma_Spl_updown_ck
	global Oma_front_ck
	global Oma_on_check
	global Oma_pull
	global Oma_pull_hosei_x
	global Oma_pull_hosei_z
	global Oma_get_on_om
	global Oma_ob_pull2
	global Omd_in_check
	global Oma_obj_ck_all
	global Oma_hit_ck_all
	global Om_Jump_ck

	;; PAD.C
	global Pad_set
	global Pad_rep_set
	global FUN_8003947c
	global FUN_80039514
	global FUN_800395b8
	global FUN_80039694
	global Init_demo_moji
	global Set_moji_work
	global Free_demo_moji

	;; PC_SYS.C
	global Windows
	global Keyboard_Input
	global Keyboard_set
	global Keyboard
	global Wframe_in_out
	global Wframe_set
	global Wframe_move
	global Get_moji_code
	global Cprint
	global Console_put
	global Console_roll_up
	global Console_clr
	global Console_trans
	global Sprite_Trans
	global Set_sp_work
	global Dr_mode_set

	;; PC_EVENT.C
	global Computer200
	global Computer613
	global Computer_init
	global Computer_exit

	;; PLAYER.C
	global Player_set
	global Pl_before
	global Pl_after
	global Player_move
	global Pl_init
	global Pl_move
	global pl_mv00_pad
	global pl_mv00
	global pl_mv01_pad
	global pl_mv01
	global pl_mv02_pad
	global pl_mv02
	global pl_mv03_pad
	global pl_mv03
	global Lim_dir_ck
	global Pl_neck
	global pl_mv04_pad
	global pl_mv04
	global pl_mv06_pad
	global pl_mv06
	global pl_mv07_pad
	global pl_mv07
	global pl_mv08_pad
	global pl_mv08
	global pl_mv09_pad
	global pl_mv09
	global pl_mv0a_pad
	global pl_mv0a
	global pl_mv0b_pad
	global pl_mv0b
	global Pl_damage
	global pl_dm00
	global pl_dm01
	global pl_dm02
	global pl_dm03
	global Pl_die
	global pl_die00
	global Pl_Em_damage
	global Pl_Em_die
	global Pl_dead
	global Pl_life_down
	global Pl_life_up

	;; PL_WEP.C
	global Pl_weapon_ch
	global Non_init
	global Plw02_init
	global Plw09_init
	global Plw0c_init
	global Plw0f_init
	global Plw12_init
	global Weapon_cls
	global Init_W_Tool
	global W_Tool
	global init_Weapon_at
	global Weapon_at_ck
	global Set_MinMax
	global Attack_r_ck0
	global Attack_r_ck1
	global Em_ck
	global Hand_ck
	global Mag_set
	global Mag_down
	global G_rot_st
	global G_rot
	global Gat_lp_st
	global Gat_rot
	global Pl_water
	global pl_mv05_pad
	global pl_mv05_w0
	global pl_mv05_w0_t2
	global pl_mv05_w0_t6
	global pl_mv05_w1
	global pl_mv05_w1_t0
	global pl_mv05_w1_t1
	global pl_mv05_w1_t2
	global pl_mv05
	global pl_w01_t2_init
	global pl_w02_t2_init
	global pl_w03_t2_init
	global pl_w04_t2_init
	global pl_w05_t2_init
	global pl_w06_t2_init
	global pl_w07_t2_init
	global pl_w08_t2_init
	global pl_w09_t2_init
	global pl_w0a_t2_init
	global pl_w0b_t2_init
	global pl_w0c_t2_init
	global pl_w0d_t2_init
	global pl_w0e_t2_init
	global pl_w0f_t2_init
	global pl_w10_t2_init
	global pl_w11_t2_init
	global pl_w12_t2_init
	global pl_w01_t2_move
	global pl_w02_t2_move
	global pl_w03_t2_move
	global pl_w04_t2_move
	global pl_w05_t2_move
	global pl_w06_t2_move
	global pl_w07_t2_move
	global pl_w08_t2_move
	global pl_w09_t2_move
	global pl_w0a_t2_move
	global pl_w0b_t2_move
	global pl_w0c_t2_move
	global pl_w0d_t2_move
	global pl_w0e_t2_move
	global pl_w0f_t2_move
	global pl_w10_t2_move
	global pl_w11_t2_move
	global pl_w12_t2_move
	global pl_mv05_w1_t3
	global pl_mv05_w1_t4
	global pl_mv05_w1_t5
	global pl_mv05_sub
	global pl_bow_init
	global pl_bow_clr
	global Bow_Lim_dir_ck
	global pl_bow
	global Goto_pro
	global Bow_3D
	global Rot_3D
	global Pos_em_at_ck
	global Pos_pl_at_ck
	global Bow_goto_parts_no
	global pl_mv05_w2
	global pl_mv05_w2_t1
	global pl_mv05_w2_t2
	global pl_mv05_w2_t4
	global pl_mv05_w3
	global pl_mv05_w3_t2
	global pl_mv05_w4
	global pl_mv05_w4_t2
	global pl_mv05_w5
	global pl_mv05_w5_t2

	;; POLY_SUB.C
	global Poly_eff2_init
	global Move_poly_eff2
	global Sort_poly_eff2
	global Poly_eff_init
	global Set_poly_eff
	global Sort_poly_eff

	;; PSP.C
	global Psp_init0
	global Psp_init1
	global Psp_set
	global Psp_trans
	global Psp_ctr

	;; ROOM.C
	global Set_room
	global Set_stage
	global Replace_rdt
	global Em_init_move

	;; ROOT_CK.C
	global Root_ck
	global Rnd_area
	global Guide_check
	global kara_rootck2

	;; SABUN.C
	global Sa_dat_set
	global Sa_parts_mod
	global Sa_parts_allmv2
	global Sa_parts_allmv
	global Sa_parts_offset_allmv

	;; SCA.C
	global Sca_get_area
	global Sca_ck_hit
	global Sca_ck_hit_om
	global Sca_hit_box2
	global Sca_hit_box
	global Sca_hosei_box
	global Sca_hit_naname_a
	global Sca_ck_naname_a
	global Sca_hit_naname_b
	global Sca_ck_naname_b
	global Sca_hit_naname_c
	global Sca_ck_naname_c
	global Sca_hit_naname_d
	global Sca_ck_naname_d
	global Sca_hit_hishi
	global Sca_ck_hishi
	global Sca_hit_circle
	global Sca_ck_circle
	global Sca_hit_koban_x
	global Sca_ck_koban_x
	global Sca_hit_koban_z
	global Sca_ck_koban_z
	global Sca_hit_slope
	global Sca_hit_stairs
	global Sca_hit_curve
	global Sca_get_slope_high
	global Sca_get_stairs_high
	global Sca_get_curve_high
	global Sca_get_ground
	global Sca_get_dir
	global Sca_get_dir_super
	global Sca_get_dir_super_tmp
	global Get_axis
	global Get_axis2
	global Sca_get_pos
	global Sca_get_pos_super
	global Sca_get_pos_super_tmp
	global Sca_ck_line
	global Sca_get_high
	global Sca_get_low
	global Sca_search

	;; SCE_AT.C
	global Sce_at_check
	global Nothing
	global Sce_Door
	global Key_lost
	global Sce_Item
	global Sce_Normal
	global Sce_Message
	global Sce_Event
	global Sce_Flg_chg
	global Sce_Water
	global Sce_Move
	global Sce_Save
	global Save_entrance
	global Sce_Itembox
	global Item_box_entrance
	global Sce_Damage
	global Sce_Status
	global Sce_Hikidashi
	global Hikidashi_entrance
	global Sce_Windows
	global Sce_at
	global Water_ck
	global Floor_check

	;; SCE0.C
	global Sce_test_init
	global FUN_800529fc
	global Em_kind_search
	global Sce_se_set
	global Sce_rnd_set
	global Sce_model_init
	global Sce_work_clr
	global Sce_work_clr_at
	global Sce_work_clr_set
	global Sce_aot_init
	global Event_init
	global Event_exec
	global Sce_col_chg_init
	global Sce_mirror_init
	global Sce_kirakira_set
	global Sce_scheduler_set
	global Sce_scheduler
	global Sce_scheduler_main

	;; SCE1.C
	global Break_point
	global Nop
	global Evt_end
	global Evt_next
	global Evt_chain
	global Evt_exec
	global Evt_kill
	global Ifel_ck
	global Else_ck
	global Endif
	global Sleep
	global Sleeping
	global Wsleep
	global Wsleeping
	global For
	global For2
	global Next
	global While
	global Ewhile
	global Do
	global Edwhile
	global While_main
	global Switch
	global Case
	global Default
	global Eswitch
	global Goto
	global Gosub
	global Return
	global Break
	global Work_copy
	global Rbj_reset
	global Ck
	global Set
	global Cmp
	global Save
	global Copy
	global Calc
	global Calc2
	global Calc_branch
	global Sce_rnd
	global Cut_chg
	global Cut_old
	global Cut_chg_main
	global Cut_auto
	global Cut_replace
	global Cut_be_set
	global Message_on
	global Aot_set
	global Aot_set_4p
	global Door_aot_set
	global Door_aot_set_4p
	global Item_aot_set
	global Item_aot_set_4p
	global Aot_reset
	global Aot_on
	global Obj_model_set
	global Super_set
	global Super_on
	global Super_reset
	global Work_set
	global Parts_set
	global Speed_set
	global Add_speed
	global Add_aspeed
	global Pos_set
	global Dir_set
	global Member_set
	global Member_set2
	global Member_set_branch
	global Member_copy
	global Member_cmp
	global Load_member_branch
	global Member_calc
	global Member_calc2
	global Load_member_addr_branch
	global Dir_ck

	;; SCE2.C
	global Se_on
	global Sca_id_set
	global Sce_espr_on
	global Sce_espr_on2
	global Sce_espr3d_on
	global Sce_espr3d_on2
	global Sce_espr_kill
	global Sce_espr_kill2
	global Sce_espr_control
	global Get_matrix
	global Plc_motion
	global Plc_dest
	global Plc_gun
	global Plc_gun_eff
	global Plc_neck
	global Plc_ret
	global Plc_stop
	global Plc_flg
	global Plc_rot
	global Plc_cnt
	global Sce_em_set
	global Sce_key_ck
	global Sce_trg_ck
	global Sce_bgm_control
	global Sce_bgmtbl_set
	global Sce_fade_set
	global Sce_fade_adjust
	global Xa_on
	global Xa_vol
	global Se_vol
	global Weapon_chg
	global Sce_shake_on
	global Sce_line_start
	global Sce_line_main
	global Sce_line_end
	global Mizu_div_set
	global Keep_Item_ck
	global Sce_Item_lost
	global Sce_Item_get
	global Kage_set
	global Light_pos_set
	global Light_kido_set
	global Light_color_set
	global Light_pos_set2
	global Light_kido_set2
	global Light_color_set2
	global Sce_scr_move
	global Flr_set
	global Movie_on
	global Splc_ret
	global Splc_sce
	global Mirror_set
	global Sce_parts_bomb
	global Sce_parts_down
	global Col_chg_set

	;; SND.C
	global Snd_sys_init
	global Snd_sys_init2
	global Snd_sys_Allvoff
	global Snd_sys_init_sub
	global Snd_sys_init_sub2
	global Snd_sys_start
	global Snd_sys_stereo
	global Snd_sys_core_set
	global Snd_sys_arms_set
	global Snd_sys_room_set
	global Snd_sys_enem_set
	global Snd_sys_pset
	global Snd_bgm_data
	global Snd_bgm_set
	global Snd_bgm_ck
	global Snd_bgm_play_ck
	global Snd_bgm_main
	global Snd_bgm_sub
	global Snd_bgm_fade_ON
	global Snd_bgm_fade
	global Snd_bgm_ctr
	global Snd_bgm_tbl_set
	global Snd_se_stad
	global Snd_se_enem
	global Snd_se_walk
	global Snd_se_call
	global Snd_se_pri_ck
	global Snd_se_3D
	global Snd_se_dir_ck

	;; SPL.C
	global Spl
	global Spl_mv40
	global Spl_mv42
	global Spl_mv41
	global Spl_mv44
	global Spl_mv45
	global Spl_mv47
	global Spl_mv49
	global Spl_mv48
	global Spl_mv4a
	global Spl_mv4b
	global Spl_mv50
	global Spl_mv51
	global Spl_mv00
	global Spl_Init
	global Spl_in40
	global Spl_in42
	global Spl_in41
	global Spl_in44
	global Spl_in45
	global Spl_in47
	global Spl_in48
	global Spl_in4a
	global Spl_in4b
	global Spl_in50
	global Spl_in51
	global Spl_in00
	global Spl_Damage
	global Spl_Die
	global Spl_Dead
	global Spl_dead00
	global Spl_set
	global Spl_chenge00
	global Spl_chenge01
	global Spl_kizu00
	global Spl_chenge02
	global Spl_chenge04
	global Spl_chenge05
	global Spl_chenge06
	global Spl_chenge07
	global Spl_chenge08
	global Spl_chenge09
	global Spl_chenge10
	global Spl_chenge03

	;; SPL_AUTO.C
	global Spl_Root_ck_sys
	global Spl_Auto
	global Aida
	global Aida_move
	global Aida_Move_type00
	global Aida_Move_type01
	global Aida_Move_type02
	global Aida_Move_type03
	global Aida_Move_type04
	global Aida_Move_type05
	global Aida_Move_type06
	global Aida_Move_type07
	global Aida_Move_type08
	global Aida_Move_type09
	global Aida_Move_type0a
	global Aida_em10_at00_pl
	global Aida_em10_at00_spl
	global Aida_em25_at00_pl
	global Aida_em25_at00_spl
	global Aida_em26_at00_pl
	global Aida_em26_at00_spl
	global Aida_mv00_br
	global Aida_mv00_br_1
	global Aida_mv00
	global Aida_em10_at01
	global Aida_em25_at01
	global Aida_em26_at01
	global Aida_mv01_br
	global Aida_mv01_br_1
	global Aida_mv01
	global Aida_mv02_br
	global Aida_mv02_br_1
	global Aida_mv02
	global Aida_mv03_br
	global Aida_mv03
	global Aida_mv04_br
	global Aida_mv04
	global Aida_mv05_br
	global Aida_mv05
	global Aida_mv05_w1
	global Aida_mv05_w1_t0_br
	global Aida_mv05_w1_t0
	global Aida_em10_at05
	global Aida_mv05_w1_t1_br
	global Aida_mv05_w1_t1
	global Aida_mv05_w1_t2_br
	global Aida_mv05_w1_t2
	global Aida_mv05_w1_t3_br
	global Aida_mv05_w1_t3
	global Aida_mv05_w1_t4_br
	global Aida_mv05_w1_t4
	global Aida_mv05_w1_t5_br
	global Aida_mv05_w1_t5
	global Aida_mv06_br
	global Aida_mv06
	global Aida_mv07_br
	global Aida_mv07
	global Aida_mv08_br
	global Aida_mv08
	global Aida_mv09_br
	global Aida_mv09
	global Aida_mv0a_br
	global Aida_mv0a
	global Aida_mv0b_br
	global Aida_mv0b_br_1
	global Aida_mv0b
	global Aida_mv0c_br
	global Aida_mv0c_br_1
	global Aida_mv0d_br
	global Sherry_move
	global Sherry_Move_type00
	global Sherry_Move_type01
	global Sherry_Move_type02
	global Sherry_Move_type03
	global Sherry_Move_type04
	global Sherry_Move_type05
	global Sherry_Move_type06
	global Sherry_Move_type07
	global Sherry_Move_type08
	global Sherry_Move_type09
	global Sherry_Move_type0a
	global Sherry_mv00_br
	global Sherry_mv00
	global Sherry_mv01_br
	global Sherry_mv02_br
	global Sherry_mv06_br
	global Sherry_mv06
	global Sherry_mv0b_br
	global Sherry_mv0c_br
	global Spl_dm00
	global Spl_dm01
	global Spl_die00
	global Aida_before
	global Aida_after
	global Spl_soba_pos_set
	global Spl_enemy_ck
	global Spl_em_pos_ck
	global Spl_em_cdir_ck
	global Spl_pllock_get
	global Spl_life_down

	;; SPL_SCE.C
	global Spl_Scenario
	global Spl_sce00
	global Spl_sce01
	global Spl_sce02
	global Spl_sce03
	global Spl_sce04
	global Spl_sce05
	global Spl_sce06
	global Spl_sce07
	global Spl_sce08
	global Spl_sce09
	global Spl_sce0a
	global Spl_sce0b
	global Spl_sce0c
	global Spl_sce0d
	global Spl_sce0e
	global Spl_sce0f
	global Spl_sce10
	global Spl_sce11
	global Spl_sce12
	global Spl_sce13
	global Spl_sce14
	global Spl_sce15
	global Spl_sce16
	global Spl_sce17
	global Spl_sce18
	global Spl_sce20
	global Spl_sce_mv00
	global Spl_sce_mv01
	global Spl_sce_mv02
	global Spl_sce_mv03
	global Spl_sce_mv04

	;; SPL_SP.C
	global Spl_Sp_Move
	global Spl_sp40_00
	global Spl_sp44_00

	;; STAGE1.C
	global Stage1

	;; STAGE2.C
	global Stage2

	;; STAGE3.C
	global Stage3

	;; STAGE4.C
	global Stage4

	;; STAGE5.C
	global Stage5

	;; STAGE6.C
	global Stage6

	;; STAGE7.C
	global Stage7

	;; STATUS.C
	global Status_init
	global Status_init_m
	global Status
	global St_exit
	global St_fade_out_set
	global St_fade_out_wait
	global St_chenge_pl
	global pl_tim_load
	global St_file_set
	global St_room_set
	global St_disp_name
	global Set_iwork
	global Set_iwork_num
	global Check_pl_life
	global Check_item_space
	global Check_item_mix
	global Search_item
	global Search_item_id
	global Sort_item
	global Shift_item
	global Set_item
	global Pix_trans
	global Pix_trans_pl
	global Pix_move
	global Pix_clear
	global St_pltex_operation
	global Tama_ck_i
	global Tama_decrease_i
	global Tama_reload_ck
	global Tama_reload
	global Check_cursol_distance

	;; ST_SUB00.C
	global St_init00
	global St_main00
	global St_menu0_select
	global St_menu0_item
	global St_com_use_equip
	global St_com_mix
	global St_com_inspect
	global St_menu0_file
	global file_moji_load
	global move_file_tag
	global St_menu0_map
	global St_init_disp_map
	global St_disp_map
	global Check_map_no
	global Check_room_no
	global St_menu1_map
	global St_init03
	global St_main03

	;; ST_SUB01.C
	global St_init01
	global St_main01
	global St_select_menu_m
	global St_select_item_m
	global Exchange_item
	global St_init_itembox
	global St_disp_itembox

	;; ST_SUB02.C
	global St_init02
	global St_main02
	global St_get_check
	global St_get_item
	global St_disp_file2
	global St_get_file

	;; ST_SUB04.C
	global St_init_disp_num
	global St_disp_num
	global print_num
	global St_init_disp_cursol0
	global St_disp_cursol0
	global St_init_disp_cursol1
	global St_disp_cursol1
	global St_init_disp_face
	global St_disp_face
	global St_init_disp_message
	global St_disp_message
	global St_init_disp_frame
	global St_disp_frame
	global St_init_disp_menu0
	global St_disp_menu0
	global St_init_disp_menu1
	global St_disp_menu1
	global St_init_disp_itemlist
	global St_disp_itemlist
	global St_init_disp_equip
	global St_disp_equip
	global St_init_disp_wall
	global St_disp_wall
	global St_init_disp_ECG
	global St_disp_ECG
	global St_init_disp_itp
	global St_disp_itp
	global St_init_disp_filesel
	global St_disp_filesel
	global St_init_disp_file
	global St_disp_file
	global ST_Om_trans
	global model_disp

	;; SUB.C
	global Vram_clr
	global Memcpy
	global Memclr
	global Mapping_tim
	global Mapping_tmd
	global Set_view
	global Set_light
	global Set_Light_data
	global Flg_on
	global Flg_off
	global Flg_ck
	global Rot_vector
	global Rot_vector_super
	global Rot_add_matrix
	global Set_front_pos
	global SetSpadStack
	global ResetSpadStack
	global SetSpadStack2
	global ResetSpadStack2
	global Get_work
	global Free_work

	;; T_ATVIEW.C
	global Disp_atari
	global Disp_atari_id_inc
	global Disp_atari_id_dec
	global Disp_atari_trans
	global Disp_atari_trans2

	;; T_RVIEW.C
	global Rview

	;; T_BLOCK.C
	global Block_data

	;; T_FLOOR.C
	global Floor_data

	;; T_PSP.C
	global T_Psp

	;; T_LIGHT.C
	global Light_data

	;; T_SCA.C
	global Sc_hit

	;; T_SND.C
	global T_Snd

	;; T_KAT0.C
	global init_KI2
	global init_KI2_LINE_F3
	global color_plus_KI2_LINE_F3
	global ki2_set
	global ki_sort
	global Maker_line_sort
	global Enemy_move_tool
	global Enemy_motion_view
	global Enemy_st_view
	global init_Enemy_tool_sitenn
	global Enemy_tool_sitenn
	global Weapon_maker_sort

	;; T_EM_SET.C
	global Tool_em_set

	;; T_SCE_AT.C
	global Tool_sce_at_set

	;; T_ESP.C
	global T_Esp

	;; TRANS.C
	global Prim_trans
	global Trans_pointer_set
	global Eff_sprt_trans
	global Esp_trans_main
	global Esp_trans_3d
	global Trans_work_init

	;; PSYQ
	global start
	global VSync
	global DsPacket
	global SetGeomOffset
	global DsFlush
	global DsIntToPos
	global DsSyncCallback
	global DsReadyCallback
	global DsGetSector
	global DsPosToInt
	global DsCommand
	global DsSystemStatus
	global DsStatus
	global SetTile
	global SetSemiTrans
	global SetDrawMode
	global AddPrim
	global EnterCriticalSection
	global SsSetSerialAttr
	global printf
	global memset
	global DrawSync
	global SsVabTransCompleted
	global SsVabTransBodyPartly
	global DeliverEvent
	global ExitCriticalSection

	;; DATA
	global Xa_no
	global floc
	global Xa_sector00
	global Serial_no
	global cdmode
	global xa_cdmode
	global xa_control_tbl
	global xacontrol_cdmode
	global cdread_cdmode
	global cdread_s_cdmode
	global door_msg
	global door_msg_ofs
	global D_LIGHTMATRIX
	global D_COLORMATRIX
	global Dtex_file
	global Dinfo
	global pDoor_proc_tbl
	global Aida_jh0_tbl
	global Aida_jh0_head
	global Aida_jh1_tbl
	global Aida_jh1_head
	global Aida_jh2_tbl
	global Aida_jh2_head
	global Aida_jh3_tbl
	global Aida_jh3_head
	global Aida_jh4_tbl
	global Aida_jh4_head
	global Aida_jh5_tbl
	global Aida_jh5_head
	global Kg_jh0_tbl
	global Kg_jh0_head
	global cdemd0_pos
	global cdemd0_sum
	global cdemd1_pos
	global cdemd1_sum
	global cdemd2_pos
	global cdemd2_sum
	global cdemd3_pos
	global cdemd3_sum
	global Emd_name
	global Emd_tim_name
	global Room_100
	global Room_102
	global Room_101
	global Room_202
	global Room_109
	global Room_10B
	global Room_110
	global Room_117
	global Room_700
	global Room_702
	global Room_703
	global Room_705
	global Em_stbl_st1
	global Em_stbl_st2
	global Em_stbl_st7
	global Room_Enemy_tbl
	global Esp_tblj
	global sin_tbl
	global quake_tbl1
	global quake_tbl2
	global sinpuku
	global hacho
	global speed
	global mode
	global GsIDMATRIX
	global LIGHTMATRIX
	global COLORMATRIX
	global Bgm_sw_timer
	global No_death_timer
	global Curtain
	global Pause
	global Scrl_h
	global Rect
	global Rect_bg
	global Bomb_tbl
	global Mizu_size_tbl
	global Mizu_tbl
	global Mizu_struct_tbl
	global Div_prim_coord
	global msg_space
	global namelist_tbl_data
	global namelist_tbl_ofs
	global namelist_u_data
	global namelist_u_ofs
	global mess_tbl_data
	global mess_tbl_ofs
	global mess_u_data
	global mess_u_ofs
	global mess_sub_data
	global mess_sub_ofs
	global mess_etc_data
	global mess_etc_ofs
	global branch_data
	global branch_ofs
	global ascii_tbl
	global Ld_task_tbl
	global Movie_tbl
	global pMovie_proc_tbl
	global pDoor_proc_tbl_ex
	;;global Subpl_walk
	;;global Subpl_back
	;;global Subpl_dir
	;;global Subpl_ato
	;;global Subpl_run
	;;global Em4a_zobiparts_tbl
	global Up_add_tbl
	global Down_add_tbl
	global Box_sub_tbl
	global Up_add_Spl_tbl
	global Down_add_Spl_tbl
	global Key_type
	global Stp_bak
	global Key_wait
	global Init_work_tbl
	global pc_mes_data
	global pc_mes_ofs
	;;global Kend
	;;global Mend
	;;global Key_type
	;;global Kend
	;;global Mend
	;;global Key_type
	;;global Subpl_walk
	;;global Subpl_back
	;;global Subpl_dir
	;;global Subpl_ato
	;;global Subpl_run
	;;global Em4a_zobiparts_tbl
	global Pld_no
	global Pl_neck_timer
	global Pld_name
	global Pl_routine
	global Pl_mv_pad
	global Pl_mv
	global Pl_kage_pos
	global pl_water
	global Wat_vec00
	global Pl_dm
	global Pl_die_t
	global Em10_damage_tbl
	global Em15_damage_tbl
	global Em20_damage_tbl
	global Em21_damage_tbl
	global Em22_damage_tbl
	global Em24_damage_tbl
	global Em23_damage_tbl
	global Em25_damage_tbl
	global Em27_damage_tbl
	global Em28_damage_tbl
	global Em29_damage_tbl
	global Em2d_damage_tbl
	global Em2a_damage_tbl
	global Em2b_damage_tbl
	global Em2e_damage_tbl
	global Em30_damage_tbl
	global Em31_damage_tbl
	global Em33_damage_tbl
	global Em34_damage_tbl0
	global Em34_damage_tbl1
	global Em36_damage_tbl
	global Em3a_damage_tbl
	global Em3b_damage_tbl
	global PLW00_W
	global PLW00_S
	global Pl_w011
	global Pl_w01_s1
	global Pl_w0111
	global Pl_w0111_s1
	global Pl_w010
	global Pl_w01_s0
	global Pl_w012
	global Pl_w01_s2
	global PLW02_W
	global PLW02_S
	global PLW05_W
	global PLW05_S
	global PLW13_W
	global PLW13_S
	global PLW07_W
	global PLW07_S
	global PLW08_W
	global PLW08_S
	global PLW0E_W
	global PLW0E_S
	global PLW0F_W
	global PLW0F_S
	global PLW12_W
	global PLW12_S
	global Pl_weapon_tbl
	global pEnemy_damage_tbl
	global Pl_bow_hit_parts
	global Plw_no
	global Pl_weapon_init
	global Pl_weapon_kyan
	global W_at_ck
	global Ghand_len
	global Mw_ck
	global Pl_wep_mag_type
	global Pl_mag
	global G_rot_data_z
	global pl_mv05_w_tbl
	global Gun_jtg_bit
	global pl_mv05_t2_init
	global pl_mv05_t2_spr
	global pl_mv05_w0_tbl
	global pl_mv05_w1_tbl
	global Bow_Room509
	global pl_mv05_w2_tbl
	global pl_mv05_w3_tbl
	global pl_mv05_w4_tbl
	global pl_mv05_w5_tbl
	global Poly_test4
	global ascii_tbl_2
	global Rdt_tbl1
	global Rdt_tbl2
	global Rdt_tbl3
	global Rdt_tbl4
	global Rdt_tbl5
	global Rdt_tbl6
	global Rdt_tbl7
	global Rdt_tbl
	;;global Subpl_walk
	;;global Subpl_back
	;;global Subpl_dir
	;;global Subpl_ato
	;;global Subpl_run
	;;global Em4a_zobiparts_tbl
	global Sca_rtn_tbl
	global Sca_no_ck_tbl
	global Sce_at_jump_tbl
	global em_se_tbl
	global Sce_jmp_tbl
	global Em_kind_tbl
	;;global Subpl_walk
	;;global Subpl_back
	;;global Subpl_dir
	;;global Subpl_ato
	;;global Subpl_run
	;;global Em4a_zobiparts_tbl
	global Flg_addr
	;;global Subpl_walk
	;;global Subpl_back
	;;global Subpl_dir
	;;global Subpl_ato
	;;global Subpl_run
	;;global Em4a_zobiparts_tbl
	global Itp_check_sum
	global EnemSE_floc
	global LRVT
	global PANVT
	global nroom
	global Core_edh
	global Core_vbd
	global Arms_edh
	global Arms_vbd
	global Main_bgm
	global Sub_bgm
	;;global Subpl_walk
	;;global Subpl_back
	;;global Subpl_dir
	;;global Subpl_ato
	;;global Subpl_run
	;;global Em4a_zobiparts_tbl
	global Spl_routine_0
	global Spl_mv
	global Spl_in
	global Spl_dm
	global Spl_die
	global Spl_dead
	;;global Subpl_walk
	;;global Subpl_back
	;;global Subpl_dir
	;;global Subpl_ato
	;;global Subpl_run
	;;global Em4a_zobiparts_tbl
	global Spl_r_pos
	global Aida_Move_type
	global Aida_St_pos
	global Spl_pos_ck_timer
	global Aida_mv_br_type00
	global Aida_mv_type00
	global Aida_mv_br_type01
	global Aida_mv_br_type02
	global Aida_mv_br_type03
	global Aida_mv_br_type04
	global Aida_mv_br_type05
	global Aida_mv_br_type06
	global Aida_mv_br_type07
	global Aida_mv_br_type08
	global Aida_mv_br_type09
	global Aida_mv_br_type0a
	global E_A_at_tbl
	global Aida_em_at00_pl
	global Aida_em_at00_spl
	global Aida_em_at01
	global Aida_mv05_w1_br_tbl
	global Aida_mv05_w1_tbl
	global Aida_em_at05
	global Sherry_Move_type
	global Sherry_St_pos
	global Sherry_mv_br_type00
	global Sherry_mv_br_type01
	global Sherry_mv_br_type02
	global Sherry_mv_br_type03
	global Sherry_mv_br_type04
	global Sherry_mv_br_type05
	global Sherry_mv_br_type06
	global Sherry_mv_br_type07
	global Sherry_mv_br_type08
	global Sherry_mv_br_type09
	global Sherry_mv_br_type0a
	;;global Subpl_walk
	;;global Subpl_back
	;;global Subpl_dir
	;;global Subpl_ato
	;;global Subpl_run
	;;global Em4a_zobiparts_tbl
	global Spl_sce
	;;global Subpl_walk
	;;global Subpl_back
	;;global Subpl_dir
	;;global Subpl_ato
	;;global Subpl_run
	;;global Em4a_zobiparts_tbl
	global Spl_sp
	global init_item_tbl_Leon
	global init_item_tbl_Claire
	global init_item_tbl_Hunk
	global init_item_tbl_ToFu
	global init_item_tbl_Leon_Ex
	global init_item_tbl_Claire_Ex
	global init_item_tbl_Ada_Ex
	global init_item_tbl_Chris_Ex
	global Status_proc_tbl
	global st_light
	global init_item_tbl_Ada
	global init_item_tbl_Sherry
	global maps_floc
	global fits_floc
	global Status_menu0_proc_tbl
	;;global add
	global File_offset
	global map_up_floor
	global map_down_floor
	global Map_char_tbl
	global Status_direct_map_proc_tbl0
	global Status_direct_map_proc_tbl1
	global St_itembox_proc_tbl
	global Ibox_char_tbl
	global f4_tbl
	global Ibox_pos_tbl
	global St_getitem_proc_tbl
	global move_tbl
	;;global add
	global Mix_nodata
	global Mix_beretta
	global Mix_magnam
	global Mix_shotgun
	global Mix_machinegun
	global Mix_fire
	global Mix_bowgun
	global Mix_g_n
	global Mix_g_f
	global Mix_g_a
	global Mix_spark
	global Mix_bullet
	global Mix_dot380
	global Mix_shot_dan
	global Mix_arrow
	global Mix_mag_dan
	global Mix_nen
	global Mix_battley
	global Mix_g_normal
	global Mix_g_fire
	global Mix_g_acid
	global Mix_ink_ribbon
	global Mix_parts_a
	global Mix_parts_b
	global Mix_parts_c
	global Mix_g
	global Mix_r
	global Mix_b
	global Mix_gr
	global Mix_gg
	global Mix_gb
	global Mix_p_bomb
	global Mix_fuse
	global Mix_Jaguar_a
	global Mix_Jaguar_b
	global Item_data_tbl
	global File_data
	global Map_stage1_0
	global Map_stage1_1
	global Map_stage1_2
	global Map_stage1_3
	global Map_stage2_0
	global Map_stage2_1
	global Map_stage3_0
	global Map_stage4_0
	global Map_stage4_1
	global Map_stage5_0
	global Map_stage5_1
	global Map_stage5_2
	global Map_stage5_3
	global Map_stage6_0
	global Map_stage6_1
	global Map_stage6_2
	global Map_stage6_3
	global Map_stage6_4
	global Map_stage6_5
	global Map_stage7_0
	global Map_stage7_1
	global Map_info
	global Ecg_normal_tbl
	global Ecg_caution0_tbl
	global Ecg_caution1_tbl
	global Ecg_danger_tbl
	global Ecg_poison_tbl
	global N_pos
	global Cursol0_char_tbl
	global Cursol0_pos_tbl
	global Cursol1_char_tbl
	global Cursol1_pos_tbl
	global Face_char_tbl
	global Face_subchar_tbl
	global Face_pos_tbl
	global Face_subpos_tbl
	global Message_char_tbl
	global Message_pos_tbl
	global Frame_char_tbl
	global Frame_pos_tbl
	global Menu0_char_tbl
	global Menu0_pos_tbl
	global Menu1_char_tbl
	global Menu1_pos_tbl
	global Itemlist_char_tbl
	global Itemlist_pos_tbl
	global Equip_char_tbl
	global Equip_pos_tbl
	global Ecg_col_tbl
	global Ecg_line_tbl
	global ECG_char_tbl
	global Itemget_char
	global Itemget_pos_tbl
	global v_p
	global v_r
	global pp
	global pMem_man
	;;global Svec
	;;global Svec
	global Poly_ft4_count
	global _spu_RXX
	global _spu_tsa
	global _spu_transMode
	global _spu_mem_mode_plus
	global _spu_mem_mode_unitM
	global _spu_inTransfer
	global _spu_transferCallback
	global _spu_IRQCallback
	global _spu_EVdma
	global _spu_keystat
	global _spu_trans_mode
	global _spu_rev_flag
	global _spu_rev_reserve_wa
	global _spu_rev_offsetaddr
	global _spu_rev_attr
	global _spu_RQvoice
	global _spu_RQmask
	global _spu_zerobuf
	global _spu_env
	global _spu_isCalled
	global _spu_AllocBlockNum
	global _spu_AllocLastNum
	global _spu_memList
	global _spu_rev_startaddr
	global _snd_seq_tick_env
	;;global rsin_tbl
	global _stacksize
	;;global rsin_tbl
	;;global rsin_tbl
	global Vcount
	global GsCLIP3near
	global GsCLIP3far
	global GsOUT_PACKET_P
	global CD_cbsync
	global CD_cbready
	global CD_debug
	global CD_status
	global CD_pos
	global CD_mode
	global CD_com
	global DS_active
	global CD_comstr
	global CD_intstr
	global CDROM_DELAY
	global CDROM_REG0
	global CDROM_REG1
	global CDROM_REG2
	global CDROM_REG3
	;;global CDROM_DELAY
	global COMMON_DELAY
	global DMA_DPCR
	global DMA_DICR
	global DMA_MDEC_OUT_CHCR
	global DMA_CDROM_CHCR
	;;global rsin_tbl
	global SQRT
	global rcossin_tbl
	global ratan_tbl
	global GPU_printf
	global DecDctEnv
	global DCL_DVLC
	global DCC_DVLC
	global CF_DVLC
	global CF2_DVLC
	global _padFuncNextPort
	global _padFuncClrInfo
	global _padFuncGetTxd
	global _padFuncCurrLimit
	global _padFuncPtr2Port
	global _padFuncPort2Info
	global _padFuncSendAuto
	global _padFuncChkEng
	global _padFuncRecvAuto
	global _padFuncClrCmdNo
	global _padInfoDir
	global _padIntExec
	global _padSioChan
	global _padSioState
	global _padTotalCurr
	global _padModeMtap
	global _padChanStart
	global _padChanStop
	global _padFixResult
	global _padCalledIntPad
	;;global __sbss_obj
	global pDoor
	global Stop_bak
	global V
	global Kpos
	global Kofs
	global pPc
	global Hit_flg_0
	global pSca_data
	global Old_x
	global Old_z
	global Hit_flg
	global Gnd_y
	global In_flg
	global Tmp_Sca
	global Key_work
	global Dir_spd
	global Spd_add
	global pOwork
	global Key_work_0
	global pItem_dat
	global pAot
	global EM40_Prim
	global shot
	global num
	global Tmp_matrix
	;;global Svec
	global pStack_bak
	global _padVsyncParam
	global _padRestPeriod
	;;global _padIntExec
	global Poly2_work
	global add_y
	global Reverb_flg
	global Trans
	global PadActData
	global Stframe_no
	global Sedir2
	global SsFCALL
	global m_pl_weapon_tmd
	global G
	global Vab_id
	global _svm_rattr
	global Stsector_offset
	global StRgb24
	global StMode
	global Em_dir
	global Cd_vol
	global Se_pri
	global Move_x
	global pEspdt
	global pDwork
	global bk_cut
	global pEspmv
	global sel_no
	global Entory
	global StFunc1
	global StFunc2
	global _svm_vab_pg
	global StCdIntrFlag
	;;global _svm_vab_pg
	global _svm_vab_vh
	global _svm_damper
	;;global _svm_vab_vh
	global _svm_vab_tn
	;;global _svm_vab_tn
	global CD
	global Channel
	global _spu_RQ
	global Mem_man
	global m_pl_w00_tmd2
	global Ceiling
	global pSce_em
	global St
	global StCHANNEL
	global StStartFrame
	global _svm_stereo_mono
	global Cc_work
	global Pan_vol
	global pVh_tbl
	global Seq_ctr
	global Vm_disp
	global Om_fall_old_dir_x
	global pVm_frm
	global Om_fall_old_dir_z
	global pSpl_near_em
	global UnknownPadInfoByte
	global _snd_ev_flag
	global Rev_vol
	global gpPl_pac_ptr
	global kMaxPrograms
	global CdReadSoundCnt
	global sw
	global Vm_work
	global pStairs
	global Ev0
	global Monitor
	global Ev1
	global Ev2
	global Ev3
	global xx
	global _svm_pg
	global UnkSndSysInitSubFlg
	global yy
	global gpPl_tmd_ptr
	global _svm_vg
	global _svm_vh
	global _svm_tn
	global CChannel
	global _SsVmMaxVoice
	global Bgm
	global gpPl_pac2_ptr
	global UnkMvPadFlg
	global Sce
	global Ev10
	global Loc
	global Ev11
	global Ev13
	global RevD_vol
	global m_pl_weapon_parts
	global gpPl_tmd2_ptr
	global Esp
	global pEdt_adr
	global UnkSndFlg0
	global UnkSndSysFlg0
	global StFinalSector
	global Poly_eff
	global Om_fall_dir_x
	global Main_vol
	global Om_fall_dir_y
	global Om_fall_dir_z
	global f_x
	global f_y
	global GsWSMATRIX
	global Ground_in_flg
	global bk_light
	global pESP
	global _snd_openflag
	global _autopan
	global Ex_battle_rcut
	global _svm_cur
	global Ex_battle_vcut
	global _svm_vab_used
	global Poly_eff2
	global _autovol
	global m_pl_weapon_packet
	global pMovie_result
	global StEmu_Idx
	global Fade_mode
	global Game
	global Demo
	global Key_idx_bak
	global UnknownSetRoomByte
	global Em_l
	global _svm_auto_kof_mode
	global Main
	global pBgm
	global Line
	global UnknownPadSetFlag
	global Ret_Value
	global GsMWSMATRIX
	global Moji
	global Moji_buff
	global _svm_envx_ptr
	global Volume_Se
	global Seq_table
	global pAtv
	global _que
	global Ceiling_in_pos
	global VBLANK_MINUS
	global StRingIdx1
	global StRingIdx2
	global StRingIdx3
	global pCom_work
	global pPsp_prim
	global m_pl_w00_packet
	global _ss_score
	global _SsMarkCallback
	global pPsp_work
	global _snd_seq_s_max
	global StEmu_Addr
	global _snd_seq_t_max
	global StEndFrame
	global StSTART_FLAG
	global pCAot
	global StRingBase
	global StRingAddr
	global _svm_vab_total
	global Old_Fatari
	global MainVbSize
	global _svm_vab_count
	global _svm_vab_start
	global Old_Uatari
	global pFile
	global m_pl_w00_packet2
	global Volume_Bgm
	global RoomVbSize
	global Espid
	global _svm_envx_hist
	global Sedir
	global StRingSize
	global _svm_okof1
	global _svm_okof2


;;
;;	Routine
;;

desld_set:	equ 0x80010000
desld:	equ 0x80010084
memcpy16:	equ 0x80010778
setexmask:	equ 0x800107B4
Cd_init:	equ 0x800128C4
Cd_system_control:	equ 0x80012984
Xa_play:	equ 0x800129B4
Xa_control:	equ 0x80012C68
Xa_control_stop:	equ 0x80012CA4
Xa_control_init:	equ 0x80012CD8
Xa_seek:		equ 0x80012D30
Xa_control_play:	equ 0x80012E70
Xa_control_end:	equ 0x80012F48
Cd_read:	equ 0x80012FB8
Cd_read_s:	equ 0x800132B0
Cd_seek:	equ 0x80013714
Cd_ready_cb:	equ 0x8001376C
Cd_set_stereo:	equ 0x80013A7C
Set_volume:	equ 0x80013AC8
Change_volume:	equ 0x80013B4C
Door_main:	equ 0x80013BC4
Door_init:	equ 0x80013C1C
Door_move:	equ 0x80013EB4
Door_scheduler_main:	equ 0x80014058
Door_exit:	equ 0x8001417C
Door_Trans:	equ 0x80014234
DoorSort:	equ 0x8001468C
Door_model_init:	equ 0x80014B40
Door_model_set:	equ 0x80014BA4
Door_snd_trans:	equ 0x80014CD0
Door_texture_load:	equ 0x80015064
Hani_ck:	equ 0x80015280
Add_speedXZ:	equ 0x800152C8
Add_speedXYZ:	equ 0x80015350
Add_speedXYZsuper:	equ 0x800153F4
Direction_ck:	equ 0x800154AC
Goto00:	equ 0x80015558
Goto00_ck:	equ 0x80015614
Goto01:	equ 0x8001569C
Goto01_ck:	equ 0x80015714
Dir_pos_ck:	equ 0x80015758
L_pos_ckXZ:	equ 0x800157D4
L_pos_ckXZM:	equ 0x80015834
Cdir_ck:	equ 0x80015910
Cdir_ck2:	equ 0x80015930
Gacha_ch:	equ 0x8001598C
Sikai_ck:	equ 0x800159A4
Set_base_pos:	equ 0x80015B94
Null_pos_set:	equ 0x80015CB8
get_null_pos:	equ 0x80015DB0
Spd_get:	equ 0x80015E7C
Rnd:	equ 0x80015FE8
Em_seq_sound:	equ 0x80016028
Tex_Ani_move:	equ 0x80016068
Foot_set_pl:	equ 0x80016200
Kage_work_init:	equ 0x8001633C
Kage_work9_init:	equ 0x8001645C
Kage_work_set:	equ 0x80016480
Kage_work9_set:	equ 0x8001653C
MulKage:	equ 0x800168B4
Kage_work_sort:	equ 0x8001699C
Kage_work9_sort:	equ 0x80016C14
Kage_work_color_set:	equ 0x80016FE4
Kage_work9_color_set:	equ 0x8001700C
Texture_Move:	equ 0x80017054
Texture_Move_GT3:	equ 0x800171D0
Texture_Move_GT4:	equ 0x800172F8
Texture_Move_GT4_up:	equ 0x8001745C
Rot_neck:	equ 0x800177C0
Rot_neck_em:	equ 0x80017D98
Rot_neck_em_n:	equ 0x80017FDC
Neck_Dir_ZY:	equ 0x8001820C
Op_PartsSort00:	equ 0x80018378
Op_PartsSort05:	equ 0x8001844C
Op_PartsSort06:	equ 0x80018648
Kami_rot05:	equ 0x80018728
W_rot:	equ 0x80018CC8
W_rot_x:	equ 0x80018D64
Rbj_set:	equ 0x80018E08
Em_dead_flg_on:	equ 0x80018FB0
Aida_Jh_init:	equ 0x80019024
Aida_Jh_move:	equ 0x800190C0
Kg_Jh_init:	equ 0x800193C0
Kg_Jh_move:	equ 0x800193F0
Jh_set:	equ 0x80019628
MulJh:	equ 0x800197F4
Aida_Jh_sort:	equ 0x80019B3C
Jh_sort:	equ 0x80019CD0
Approach:	equ 0x8001A0E0
Approach_one:	equ 0x8001A1E0
Mot_play:	equ 0x8001A240
Mot_play2:	equ 0x8001A2A4
Mot_play_init:	equ 0x8001A308
Mot_play_sp:	equ 0x8001A330
Mot_play2_sp:	equ 0x8001A3E8
Mot_play2_spxz:	equ 0x8001A4A0
Em_init_super:	equ 0x8001A558
Branch:	equ 0x8001A58C
Ck_em_id:	equ 0x8001A5C0
Goto00_super:	equ 0x8001A644
Goto01_super:	equ 0x8001A858
Get_parts_world_dir:	equ 0x8001A9BC
Enemy_work_set:	equ 0x8001AA38
Em_set:	equ 0x8001AAA0
Emd_load:	equ 0x8001AAA8
Set_enemy_work:	equ 0x8001AD3C
Kill_enemy_work:	equ 0x8001B250
Em_move_tbl_set:	equ 0x8001B274
Em_bin_load:	equ 0x8001B710
Emd_load_file:	equ 0x8001b934
Esp_init_C:	equ 0x8001BABC
Esp_init_R:	equ 0x8001BBA4
Esp_data_set0:	equ 0x8001BCA0
Esp_data_set1:	equ 0x8001BD38
Esp_call:	equ 0x8001BF10
Esp_call3D:	equ 0x8001C224
Esp_call3D2:	equ 0x8001C56C
Esp_call2:	equ 0x8001C8C4
Esp_call3:	equ 0x8001CBE8
Esp_kill:	equ 0x8001CEFC
Esp_kill2:	equ 0x8001CFBC
Esp_die:	equ 0x8001CFFC
Esp_ctrl:	equ 0x8001D0AC
Esp_ctrl2:	equ 0x8001D15C
Esp_ctrl3:	equ 0x8001D180
Esp_ctrl4:	equ 0x8001D240
Esp_move:	equ 0x8001D300
Esp_pos:	equ 0x8001D68C
Esp_00:	equ 0x8001DC28
Esp_01:	equ 0x8001DC30
Esp_02:	equ 0x8001DD2C
Esp_03:	equ 0x8001DE88
Esp_04:	equ 0x8001DF50
Esp_05:	equ 0x8001DF90
Esp_06:	equ 0x8001E11C
Esp_07:	equ 0x8001E154
Esp_08:	equ 0x8001E200
Esp_09:	equ 0x8001E390
Esp_0a:	equ 0x8001E3C4
Esp_0b:	equ 0x8001E4B4
Esp_0c:	equ 0x8001E638
Esp_0d:	equ 0x8001E898
Esp_0e:	equ 0x8001E8B0
Esp_0f:	equ 0x8001ED9C
Esp_10:	equ 0x8001F128
Esp_11:	equ 0x8001F198
Esp_12:	equ 0x8001F2A0
Esp_13:	equ 0x8001F2C0
Esp_14:	equ 0x8001F530
Esp_15:	equ 0x8001F5A4
Esp_16:	equ 0x8001F634
Esp_17:	equ 0x8001F6A4
Esp_18:	equ 0x8001F6E0
Esp_19:	equ 0x8001FA08
Esp_1a:	equ 0x8001FA6C
Esp_1b:	equ 0x8001FA9C
Esp_1c:	equ 0x8001FBD0
Esp_1d:	equ 0x8001FD5C
Esp_1e:	equ 0x8001FECC
Esp_1f:	equ 0x8001FF98
Esp_20:	equ 0x800200B0
Esp_21:	equ 0x80020298
Esp_22:	equ 0x80020364
Esp_23:	equ 0x800204F8
Esp_24:	equ 0x80020510
Esp_25:	equ 0x80020660
Esp_26:	equ 0x800206E0
Esp_27:	equ 0x800206FC
Esp_28:	equ 0x80020758
Esp_29:	equ 0x800207E4
Esp_2a:	equ 0x800208B8
Esp_2b:	equ 0x80020950
Esp_2c:	equ 0x800209CC
Esp_2d:	equ 0x80020ABC
Esp_2e:	equ 0x80020B60
Esp_2f:	equ 0x80020C3C
Esp_30:	equ 0x80020F3C
Esp_31:	equ 0x800215C8
Esp_32:	equ 0x80021970
Esp_33:	equ 0x800219B4
Esp_34:	equ 0x80021A48
Esp_35:	equ 0x80021B00
Esp_36:	equ 0x80021CE4
Esp_37:	equ 0x80021D24
Esp_38:	equ 0x80021E14
Esp_39:	equ 0x80022094
Esp_3a:	equ 0x80022254
Esp_3b:	equ 0x800223F8
Esp_3c:	equ 0x80022454
Esp_3d:	equ 0x80022474
Esp_3e:	equ 0x8002256C
Esp_3f:	equ 0x800226AC
Esp_40:	equ 0x80022728
Esp_41:	equ 0x80022774
Esp_42:	equ 0x800228D8
Esp_43:	equ 0x800229E4
Esp_44:	equ 0x80022ABC
Esp_45:	equ 0x80022EBC
Esp_46:	equ 0x80023204
Esp_47:	equ 0x80023554
Esp_48:	equ 0x8002373C
Esp_49:	equ 0x8002387C
Esp_4a:	equ 0x800238E4
Esp_4b:	equ 0x800239C4
Esp_4c:	equ 0x80023B94
Esp_4d:	equ 0x80023C70
Esp_4e:	equ 0x800241C8
Esp_4f:	equ 0x8002434C
Esp_50:	equ 0x8002453C
Esp_51:	equ 0x800246E8
Esp_52:	equ 0x80024818
Esp_53:	equ 0x800252B8
Esp_54:	equ 0x80025348
Esp_55:	equ 0x8002539C
Esp_56:	equ 0x80025408
Esp_57:	equ 0x8002563C
SeVibOn:	equ 0x8002574C
Esp_58:	equ 0x80025754
Esp_59:	equ 0x8002575C
Esp_5a:	equ 0x80025764
Esp_5b:	equ 0x8002576C
Esp_5c:	equ 0x80025774
Esp_5d:	equ 0x8002577C
Esp_5e:	equ 0x80025784
Esp_5f:	equ 0x8002578C
Game_loop:	equ 0x80025794
Set_door:	equ 0x80026B7C
Gun_light_set:	equ 0x80026ED8
Gun_light_reset:	equ 0x800270EC
Joint_trans2:	equ 0x80027160
ko_joint_trans2:	equ 0x80027434
SortGT3_neo:	equ 0x80027BEC
SortGT4_neo:	equ 0x80027DBC
ko_joint_trans3:	equ 0x80027FF0
PartsWork_set:	equ 0x80028324
PartsWork_link:	equ 0x80028368
Init_Parts_work:	equ 0x80028648
Mem_ck_Parts_work:	equ 0x800289B4
Joint_pos_trans:	equ 0x80028A24
Parts_down:	equ 0x80028AD8
Parts_bomb:	equ 0x80028DAC
Parts_ryu:	equ 0x80028EA4
HMatrix:	equ 0x80028F48
HMatrix1:	equ 0x80029120
Model_color_plus:	equ 0x8002940C
Joint_move:	equ 0x8002959C
J_seq:	equ 0x80029614
hokan_svec:	equ 0x80029B70
Pl_set_packet:	equ 0x80029C94
Joint_move_p:	equ 0x80029E10
Joint_move2:	equ 0x8002A490
J_seq2:	equ 0x8002A508
Scr_effect:	equ 0x8002AA28
Scr_quake:	equ 0x8002AA6C
Scr_rasta:	equ 0x8002AB84
line_trans:	equ 0x8002AC94
line_scr_end:	equ 0x8002ADDC
line_mode_set:	equ 0x8002AE10
Line_work_init:	equ 0x8002AEC8
main:	equ 0x8002AEE0
Init_system:	equ 0x8002B48C
InitGeom_func:	equ 0x8002B6AC
Init_main:	equ 0x8002B6D4
Swap_Cbuff:	equ 0x8002B968
Bg_set_mode:	equ 0x8002BDA8
Bg_draw:	equ 0x8002BDF4
Fade_set:	equ 0x8002C1A0
Fade_adjust:	equ 0x8002C2B0
Fade_off:	equ 0x8002C324
Fade_status:	equ 0x8002C350
System_trans:	equ 0x8002C378
Init_global:	equ 0x8002C610
Cut_check:	equ 0x8002C6B4
Cut_change:	equ 0x8002C7AC
Ccut_serach:	equ 0x8002C7DC
Hit_ck_point4:	equ 0x8002C820
Hit_ck_box:	equ 0x8002C904
Card_event_set:	equ 0x8002C94C
Logo:	equ 0x8002CAC4
PresetObjectGT3_neo:	equ 0x8002CBC4
PresetObjectGT4_neo:	equ 0x8002CD24
CompM:	equ 0x8002CE94
mapModelingData:	equ 0x8002CFD8
MulLMatrix:	equ 0x8002D030
SortGT3_lno:	equ 0x8002D0E8
SortGT4_lno:	equ 0x8002D244
Bomb_Parts_SortGT3:	equ 0x8002D3C8
Bomb_Parts_SortGT4:	equ 0x8002D718
Ryu_Parts_SortGT3:	equ 0x8002DA80
Ryu_Parts_SortGT4:	equ 0x8002DDF0
mirror_TMD_GT3:	equ 0x8002E1B4
mirror_PACKET_GT3:	equ 0x8002E1FC
mirror_TMD_GT4:	equ 0x8002E240
mirror_PACKET_GT4:	equ 0x8002E288
Mirror_model_cp:	equ 0x8002E2D8
Init_mirror_weapon:	equ 0x8002E4F8
Mirror_weapon_cp:	equ 0x8002E548
Parts_work_cp:	equ 0x8002E788
Mirror_view:	equ 0x8002E93C
Mirror_in_view:	equ 0x8002EA40
Mirror_trans:	equ 0x8002EAF8
Mirror_matrix_set:	equ 0x8002ED30
Late_set:	equ 0x8002EEB4
Mizu_trans:	equ 0x8002EF50
Mizu_div_ck:	equ 0x8002F29C
Mizu_div_main:	equ 0x8002F3FC
Print8:	equ 0x8002FA00
Print14:	equ 0x8002FA28
Print_main:	equ 0x8002FA54
Mess_set:	equ 0x8002FE38
Moji_trans_main:	equ 0x8003022C
Mess_disp:	equ 0x8003027C
Branch_disp:	equ 0x80030844
name_ptr_set:	equ 0x80030B9C
mess_trans:	equ 0x80030C9C
Name_disp:	equ 0x80031070
Mess_print:	equ 0x800313A4
moji_trans_main:	equ 0x800316A8
moji_trans_8:	equ 0x80031734
moji_trans_14:	equ 0x800318A4
Moji_buff_init:	equ 0x80031AC4
Moji_init:	equ 0x80031AF4
Moji_mode_init:	equ 0x80031BF0
Init_scheduler:	equ 0x80031CC0
Scheduler:	equ 0x80031D8C
Task_lexecute:	equ 0x80031E80
Task_lchain:	equ 0x80031F00
Task_execute:	equ 0x80031F6C
Task_sleep:	equ 0x80031F94
Task_exit:	equ 0x80031FE4
Task_kill:	equ 0x80032030
Task_chain:	equ 0x8003208C
Task_suspend:	equ 0x800320E0
Task_signal:	equ 0x8003210C
Task_status:	equ 0x80032138
Init_movie_work:	equ 0x80032150
Movie:	equ 0x80032340
Movie_init:	equ 0x80032450
Movie_main:	equ 0x80032700
Movie_end:	equ 0x80032984
Movie_exit:	equ 0x80032AB8
Open_movie:	equ 0x80032CE8
Play_movie:	equ 0x80032FCC
Close_movie:	equ 0x80033118
RuntoImage:	equ 0x8003317C
Mdec_callback:	equ 0x8003324C
Movie_xa_start:	equ 0x8003331C
Movie_xa_stop:	equ 0x80033370
Set_movie_volume2:	equ 0x800333C4
CdReset2:	equ 0x80033440
Oba_ck_hit:	equ 0x80034D0C
Oba_ck_only:	equ 0x800352D8
Oba_set_ofs:	equ 0x80035408
Oba_ck_em:	equ 0x80035530
Oba_ck_em2:	equ 0x800355C4
Sca_ck_em:	equ 0x8003567C
Om_init:	equ 0x80035710
Col_chg_init:	equ 0x800357D8
Tex_chg_init:	equ 0x800358F0
Tex_ctr:	equ 0x80035994
Col_chg:	equ 0x80035AD0
Tex_chg:	equ 0x80035C98
Om_move:	equ 0x80035F68
Om_trans:	equ 0x800363F0
Om_move_box:	equ 0x80036710
Om_set_fall_dir:	equ 0x80036C5C
Ob_test_load2:	equ 0x80036CF8
Oma_set_ofs:	equ 0x80036E30
Oma_ck_oba:	equ 0x80036EF8
Oma_ck_om:	equ 0x80037258
Oma_ck_front:	equ 0x80037450
Oma_pl_updown_ck:	equ 0x800375C8
Oma_Spl_updown_ck:	equ 0x80037940
Oma_front_ck:	equ 0x80037D48
Oma_on_check:	equ 0x80037EAC
Oma_pull:	equ 0x80037F60
Oma_pull_hosei_x:	equ 0x80038664
Oma_pull_hosei_z:	equ 0x800386D0
Oma_get_on_om:	equ 0x8003873C
Oma_ob_pull2:	equ 0x80038818
Omd_in_check:	equ 0x80038950
Oma_obj_ck_all:	equ 0x800389E8
Oma_hit_ck_all:	equ 0x80038A98
Om_Jump_ck:	equ 0x80038B84
Pad_set:	equ 0x80038BBC
Pad_rep_set:	equ 0x80039464
Windows:	equ 0x80039818
Keyboard_Input:	equ 0x800398AC
Keyboard_set:	equ 0x80039B30
Keyboard:	equ 0x80039B88
Wframe_in_out:	equ 0x80039ED4
Wframe_set:	equ 0x8003A034
Wframe_move:	equ 0x8003A148
Get_moji_code:	equ 0x8003A28C
Cprint:	equ 0x8003A298
Console_put:	equ 0x8003A56C
Console_roll_up:	equ 0x8003A5A4
Console_clr:	equ 0x8003A668
Console_trans:	equ 0x8003A6AC
Sprite_Trans:	equ 0x8003A794
Set_sp_work:	equ 0x8003A8CC
Dr_mode_set:	equ 0x8003A92C
Computer200:	equ 0x8003A9F4
Computer613:	equ 0x8003B264
Computer_init:	equ 0x8003B7E8
Computer_exit:	equ 0x8003B918
Player_set:	equ 0x8003BAF0
Pl_before:	equ 0x8003BED8
Pl_after:	equ 0x8003BF7C
Player_move:	equ 0x8003BFAC
Pl_init:	equ 0x8003C210
Pl_move:	equ 0x8003C57C
pl_mv00_pad:	equ 0x8003C5F8
pl_mv00:	equ 0x8003C780
pl_mv01_pad:	equ 0x8003C924
pl_mv01:	equ 0x8003CBDC
pl_mv02_pad:	equ 0x8003CE24
pl_mv02:	equ 0x8003D0E8
pl_mv03_pad:	equ 0x8003D3E0
pl_mv03:	equ 0x8003D5F4
Lim_dir_ck:	equ 0x8003D96C
Pl_neck:	equ 0x8003DB38
pl_mv04_pad:	equ 0x8003DD48
pl_mv04:	equ 0x8003DFF4
pl_mv06_pad:	equ 0x8003E1D4
pl_mv06:	equ 0x8003E1DC
pl_mv07_pad:	equ 0x8003E314
pl_mv07:	equ 0x8003E31C
pl_mv08_pad:	equ 0x8003E8CC
pl_mv08:	equ 0x8003E8DC
pl_mv09_pad:	equ 0x8003EC60
pl_mv09:	equ 0x8003EC70
pl_mv0a_pad:	equ 0x8003F0FC
pl_mv0a:	equ 0x8003F174
pl_mv0b_pad:	equ 0x8003F420
pl_mv0b:	equ 0x8003F428
Pl_damage:	equ 0x8003F600
pl_dm00:	equ 0x8003F658
pl_dm01:	equ 0x8003F778
pl_dm02:	equ 0x8003F8E4
pl_dm03:	equ 0x8003FC3C
Pl_die:	equ 0x8003FEE4
pl_die00:	equ 0x8003FF3C
Pl_Em_damage:	equ 0x8004006C
Pl_Em_die:	equ 0x800400D0
Pl_dead:	equ 0x80040134
Pl_life_down:	equ 0x800401D4
Pl_life_up:	equ 0x800402F4
Pl_weapon_ch:	equ 0x800408C8
Non_init:	equ 0x80040C40
Plw02_init:	equ 0x80040C48
Plw09_init:	equ 0x80040CF4
Plw0c_init:	equ 0x80040D68
Plw0f_init:	equ 0x80040EDC
Plw12_init:	equ 0x80040F5C
Weapon_cls:	equ 0x80041060
Init_W_Tool:	equ 0x80041088
W_Tool:	equ 0x80041090
init_Weapon_at:	equ 0x80041098
Weapon_at_ck:	equ 0x800410CC
Set_MinMax:	equ 0x80041B20
Attack_r_ck0:	equ 0x80041CE4
Attack_r_ck1:	equ 0x80041EF8
Em_ck:	equ 0x80042144
Hand_ck:	equ 0x80042368
Mag_set:	equ 0x80042470
Mag_down:	equ 0x80042644
G_rot_st:	equ 0x800428A0
G_rot:	equ 0x800428CC
Gat_lp_st:	equ 0x8004297C
Gat_rot:	equ 0x800429C0
Pl_water:	equ 0x80042AAC
pl_mv05_pad:	equ 0x80042C20
pl_mv05_w0:	equ 0x80042C28
pl_mv05_w0_t2:	equ 0x80042C64
pl_mv05_w0_t6:	equ 0x800431F8
pl_mv05_w1:	equ 0x80043230
pl_mv05_w1_t0:	equ 0x8004326C
pl_mv05_w1_t1:	equ 0x8004362C
pl_mv05_w1_t2:	equ 0x80043908
pl_mv05:	equ 0x80043DF8
pl_w01_t2_init:	equ 0x80043ECC
pl_w02_t2_init:	equ 0x80043ED4
pl_w03_t2_init:	equ 0x80043EFC
pl_w04_t2_init:	equ 0x80043F24
pl_w05_t2_init:	equ 0x80043F2C
pl_w06_t2_init:	equ 0x80043F54
pl_w07_t2_init:	equ 0x80043F7C
pl_w08_t2_init:	equ 0x80043FA4
pl_w09_t2_init:	equ 0x80043FCC
pl_w0a_t2_init:	equ 0x80043FF4
pl_w0b_t2_init:	equ 0x8004401C
pl_w0c_t2_init:	equ 0x80044044
pl_w0d_t2_init:	equ 0x800440CC
pl_w0e_t2_init:	equ 0x800440F4
pl_w0f_t2_init:	equ 0x800440FC
pl_w10_t2_init:	equ 0x80044104
pl_w11_t2_init:	equ 0x8004410C
pl_w12_t2_init:	equ 0x80044134
pl_w01_t2_move:	equ 0x8004413C
pl_w02_t2_move:	equ 0x8004418C
pl_w03_t2_move:	equ 0x8004429C
pl_w04_t2_move:	equ 0x800443AC
pl_w05_t2_move:	equ 0x800444E0
pl_w06_t2_move:	equ 0x800445EC
pl_w07_t2_move:	equ 0x80044730
pl_w08_t2_move:	equ 0x80044908
pl_w09_t2_move:	equ 0x80044B44
pl_w0a_t2_move:	equ 0x80044F44
pl_w0b_t2_move:	equ 0x80045090
pl_w0c_t2_move:	equ 0x800451DC
pl_w0d_t2_move:	equ 0x8004522C
pl_w0e_t2_move:	equ 0x8004534C
pl_w0f_t2_move:	equ 0x80045354
pl_w10_t2_move:	equ 0x800454A0
pl_w11_t2_move:	equ 0x80045588
pl_w12_t2_move:	equ 0x80045648
pl_mv05_w1_t3:	equ 0x80045850
pl_mv05_w1_t4:	equ 0x800459E4
pl_mv05_w1_t5:	equ 0x80045B38
pl_mv05_sub:	equ 0x80045C10
pl_bow_init:	equ 0x80045E78
pl_bow_clr:	equ 0x800460AC
Bow_Lim_dir_ck:	equ 0x8004618C
pl_bow:	equ 0x80046304
Goto_pro:	equ 0x80046F44
Bow_3D:	equ 0x80046F98
Rot_3D:	equ 0x80047030
Pos_em_at_ck:	equ 0x800470C0
Pos_pl_at_ck:	equ 0x80047664
Bow_goto_parts_no:	equ 0x80047858
pl_mv05_w2:	equ 0x8004799C
pl_mv05_w2_t1:	equ 0x800479D8
pl_mv05_w2_t2:	equ 0x80047C6C
pl_mv05_w2_t4:	equ 0x800481CC
pl_mv05_w3:	equ 0x800482D8
pl_mv05_w3_t2:	equ 0x80048314
pl_mv05_w4:	equ 0x8004879C
pl_mv05_w4_t2:	equ 0x800487D8
pl_mv05_w5:	equ 0x80048B50
pl_mv05_w5_t2:	equ 0x80048B8C
Poly_eff2_init:	equ 0x80048F24
Move_poly_eff2:	equ 0x80048FFC
Sort_poly_eff2:	equ 0x800493A0
Poly_eff_init:	equ 0x80049644
Set_poly_eff:	equ 0x800496B8
Sort_poly_eff:	equ 0x800498F4
Psp_init0:	equ 0x80049A9C
Psp_init1:	equ 0x80049AD0
Psp_set:	equ 0x80049B1C
Psp_trans:	equ 0x80049CA8
Psp_ctr:	equ 0x80049DF0
Set_room:	equ 0x80049E48
Set_stage:	equ 0x8004A3C0
Replace_rdt:	equ 0x8004A414
Em_init_move:	equ 0x8004A694
Root_ck:	equ 0x8004A808
Rnd_area:	equ 0x8004AA50
Guide_check:	equ 0x8004AAB8
kara_rootck2:	equ 0x8004AB60
Sa_dat_set:	equ 0x8004B3B8
Sa_parts_mod:	equ 0x8004B434
Sa_parts_allmv2:	equ 0x8004B734
Sa_parts_allmv:	equ 0x8004BAF0
Sa_parts_offset_allmv:	equ 0x8004BE28
Sca_get_area:	equ 0x8004C198
Sca_ck_hit:	equ 0x8004C1BC
Sca_ck_hit_om:	equ 0x8004C658
Sca_hit_box2:	equ 0x8004C858
Sca_hit_box:	equ 0x8004C900
Sca_hosei_box:	equ 0x8004CA68
Sca_hit_naname_a:	equ 0x8004CBD0
Sca_ck_naname_a:	equ 0x8004CFC8
Sca_hit_naname_b:	equ 0x8004D048
Sca_ck_naname_b:	equ 0x8004D484
Sca_hit_naname_c:	equ 0x8004D508
Sca_ck_naname_c:	equ 0x8004D940
Sca_hit_naname_d:	equ 0x8004D9B4
Sca_ck_naname_d:	equ 0x8004DDE8
Sca_hit_hishi:	equ 0x8004DE64
Sca_ck_hishi:	equ 0x8004EA14
Sca_hit_circle:	equ 0x8004EC50
Sca_ck_circle:	equ 0x8004ED84
Sca_hit_koban_x:	equ 0x8004EDF0
Sca_ck_koban_x:	equ 0x8004EF0C
Sca_hit_koban_z:	equ 0x8004F044
Sca_ck_koban_z:	equ 0x8004F17C
Sca_hit_slope:	equ 0x8004F2AC
Sca_hit_stairs:	equ 0x8004F49C
Sca_hit_curve:	equ 0x8004F6F8
Sca_get_slope_high:	equ 0x8004F8B8
Sca_get_stairs_high:	equ 0x8004FA28
Sca_get_curve_high:	equ 0x8004FB38
Sca_get_ground:	equ 0x8004FBA0
Sca_get_dir:	equ 0x80050110
Sca_get_dir_super:	equ 0x800501BC
Sca_get_dir_super_tmp:	equ 0x800503BC
Get_axis:	equ 0x80050454
Get_axis2:	equ 0x800504DC
Sca_get_pos:	equ 0x8005057C
Sca_get_pos_super:	equ 0x800505FC
Sca_get_pos_super_tmp:	equ 0x8005075C
Sca_ck_line:	equ 0x80050858
Sca_get_high:	equ 0x80050F80
Sca_get_low:	equ 0x80050FC8
Sca_search:	equ 0x80050FF4
Sce_at_check:	equ 0x80051088
Nothing:	equ 0x800514EC
Sce_Door:	equ 0x80051514
Key_lost:	equ 0x80051718
Sce_Item:	equ 0x80051884
Sce_Normal:	equ 0x80051940
Sce_Message:	equ 0x80051948
Sce_Event:	equ 0x80051980
Sce_Flg_chg:	equ 0x800519C0
Sce_Water:	equ 0x80051A2C
Sce_Move:	equ 0x80051A48
Sce_Save:	equ 0x80051AB0
Save_entrance:	equ 0x80051B04
Sce_Itembox:	equ 0x80051C20
Item_box_entrance:	equ 0x80051C64
Sce_Damage:	equ 0x80051E74
Sce_Status:	equ 0x80052004
Sce_Hikidashi:	equ 0x80052044
Hikidashi_entrance:	equ 0x800522CC
Sce_Windows:	equ 0x80052620
Sce_at:	equ 0x8005264C
Water_ck:	equ 0x800527B4
Floor_check:	equ 0x800528E8
Sce_test_init:	equ 0x800529B4
Em_kind_search:	equ 0x80052AF4
Sce_se_set:	equ 0x80052B38
Sce_rnd_set:	equ 0x80052CA0
Sce_model_init:	equ 0x80052D14
Sce_work_clr:	equ 0x80052E20
Sce_work_clr_at:	equ 0x80052E7C
Sce_work_clr_set:	equ 0x80052F3C
Sce_aot_init:	equ 0x800530C0
Event_init:	equ 0x800530EC
Event_exec:	equ 0x80053138
Sce_col_chg_init:	equ 0x80053244
Sce_mirror_init:	equ 0x800532D8
Sce_kirakira_set:	equ 0x80053394
Sce_scheduler_set:	equ 0x80053528
Sce_scheduler:	equ 0x80053644
Sce_scheduler_main:	equ 0x800536C4
Break_point:	equ 0x800537CC
Nop:	equ 0x800537E4
Evt_end:	equ 0x800537FC
Evt_next:	equ 0x80053860
Evt_chain:	equ 0x80053878
Evt_exec:	equ 0x800538A4
Evt_kill:	equ 0x800538DC
Ifel_ck:	equ 0x80053924
Else_ck:	equ 0x80053964
Endif:	equ 0x800539A0
Sleep:	equ 0x800539DC
Sleeping:	equ 0x80053A24
Wsleep:	equ 0x80053A8C
Wsleeping:	equ 0x80053AC0
For:	equ 0x80053B1C
For2:	equ 0x80053BD4
Next:	equ 0x80053CBC
While:	equ 0x80053D3C
Ewhile:	equ 0x80053E0C
Do:	equ 0x80053E50
Edwhile:	equ 0x80053EC4
While_main:	equ 0x80053F50
Switch:	equ 0x80054020
Case:	equ 0x800540F8
Default:	equ 0x80054110
Eswitch:	equ 0x80054128
Goto:	equ 0x8005415C
Gosub:	equ 0x800541A8
Return:	equ 0x80054210
Break:	equ 0x80054268
Work_copy:	equ 0x800542B4
Rbj_reset:	equ 0x80054310
Ck:	equ 0x80054354
Set:	equ 0x800543B4
Cmp:	equ 0x80054474
Save:	equ 0x8005451C
Copy:	equ 0x8005454C
Calc:	equ 0x8005458C
Calc2:	equ 0x800545D8
Calc_branch:	equ 0x80054634
Sce_rnd:	equ 0x80054760
Cut_chg:	equ 0x8005478C
Cut_old:	equ 0x8005481C
Cut_chg_main:	equ 0x80054884
Cut_auto:	equ 0x800548C8
Cut_replace:	equ 0x80054930
Cut_be_set:	equ 0x80054A14
Message_on:	equ 0x80054A8C
Aot_set:	equ 0x80054AF4
Aot_set_4p:	equ 0x80054B60
Door_aot_set:	equ 0x80054BE4
Door_aot_set_4p:	equ 0x80054C50
Item_aot_set:	equ 0x80054CD4
Item_aot_set_4p:	equ 0x80055008
Aot_reset:	equ 0x80055154
Aot_on:	equ 0x800551C8
Obj_model_set:	equ 0x80055260
Super_set:	equ 0x8005550C
Super_on:	equ 0x80055680
Super_reset:	equ 0x800558B0
Work_set:	equ 0x80055904
Parts_set:	equ 0x800559D0
Speed_set:	equ 0x80055A84
Add_speed:	equ 0x80055AB0
Add_aspeed:	equ 0x80055B2C
Pos_set:	equ 0x80055BA0
Dir_set:	equ 0x80055BD0
Member_set:	equ 0x80055C00
Member_set2:	equ 0x80055C50
Member_set_branch:	equ 0x80055CB0
Member_copy:	equ 0x80055E38
Member_cmp:	equ 0x80055E8C
Load_member_branch:	equ 0x80055F50
Member_calc:	equ 0x80056188
Member_calc2:	equ 0x800561F4
Load_member_addr_branch:	equ 0x80056264
Dir_ck:	equ 0x800563E8
Se_on:	equ 0x80056428
Sca_id_set:	equ 0x8005655C
Sce_espr_on:	equ 0x800565A4
Sce_espr_on2:	equ 0x80056644
Sce_espr3d_on:	equ 0x800566F0
Sce_espr3d_on2:	equ 0x800567B4
Sce_espr_kill:	equ 0x80056884
Sce_espr_kill2:	equ 0x800568E8
Sce_espr_control:	equ 0x800569D4
Get_matrix:	equ 0x80056A38
Plc_motion:	equ 0x80056B8C
Plc_dest:	equ 0x80056BD8
Plc_gun:	equ 0x80056DC0
Plc_gun_eff:	equ 0x80056DF8
Plc_neck:	equ 0x80056E5C
Plc_ret:	equ 0x80056F9C
Plc_stop:	equ 0x80056FF0
Plc_flg:	equ 0x80057038
Plc_rot:	equ 0x800570BC
Plc_cnt:	equ 0x80057120
Sce_em_set:	equ 0x8005714C
Sce_key_ck:	equ 0x80057DA8
Sce_trg_ck:	equ 0x80057DE4
Sce_bgm_control:	equ 0x80057E20
Sce_bgmtbl_set:	equ 0x80057E98
Sce_fade_set:	equ 0x80057EF0
Sce_fade_adjust:	equ 0x80057FD8
Xa_on:	equ 0x80058028
Xa_vol:	equ 0x80058090
Se_vol:	equ 0x800580CC
Sce_shake_on:	equ 0x80058164
Sce_line_start:	equ 0x80058214
Sce_line_main:	equ 0x80058260
Sce_line_end:	equ 0x800582B8
Mizu_div_set:	equ 0x800582F0
Keep_Item_ck:	equ 0x800584F0
Sce_Item_lost:	equ 0x800585E4
Sce_Item_lost2:	equ 0x80058660
Weapon_chg:	equ 0x80058704
Sce_Item_get:	equ 0x800587B8
Kage_set:	equ 0x80058898
Light_pos_set:	equ 0x800589D4
Light_kido_set:	equ 0x80058A8C
Light_color_set:	equ 0x80058AD8
Light_pos_set2:	equ 0x80058B40
Light_kido_set2:	equ 0x80058BFC
Light_color_set2:	equ 0x80058C4C
Sce_scr_move:	equ 0x80058CB8
Flr_set:	equ 0x80058CE4
Movie_on:	equ 0x80058D64
Splc_ret:	equ 0x80058DAC
Splc_sce:	equ 0x80058E48
Evt_next2:	equ 0x80058EB0
Mirror_set:	equ 0x80058EF8
Sce_parts_bomb:	equ 0x80058F78
Sce_parts_down:	equ 0x80059030
Col_chg_set:	equ 0x800590E0
Poison_ck:	equ 0x800592F8
Poison_clr:	equ 0x80059318
Vib_set0:	equ 0x80059348
Vib_set1:	equ 0x80059394
Vib_fade_set:	equ 0x800593E4
Snd_sys_init:	equ 0x80059438
Snd_sys_init2:	equ 0x80059514
Snd_sys_Allvoff:	equ 0x80059634
Snd_sys_init_sub:	equ 0x80059654
Snd_sys_init_sub2:	equ 0x800598A8
Snd_sys_start:	equ 0x8005990C
Snd_sys_stereo:	equ 0x8005998C
Snd_sys_core_set:	equ 0x80059A00
Snd_sys_arms_set:	equ 0x80059C74
Snd_sys_room_set:	equ 0x80059E54
Snd_sys_enem_set:	equ 0x8005A09C
Snd_sys_pset:	equ 0x8005A338
Snd_bgm_data:	equ 0x8005A414
Snd_bgm_set:	equ 0x8005A444
Snd_bgm_ck:	equ 0x8005A714
Snd_bgm_play_ck:	equ 0x8005A888
Snd_bgm_main:	equ 0x8005A97C
Snd_bgm_sub:	equ 0x8005AE50
Snd_bgm_fade_ON:	equ 0x8005B2E4
Snd_bgm_fade:	equ 0x8005B3B0
Snd_bgm_ctr:	equ 0x8005B6F0
Snd_bgm_tbl_set:	equ 0x8005B9F4
Snd_se_stad:	equ 0x8005BA28
Snd_se_enem:	equ 0x8005BD6C
Snd_se_walk:	equ 0x8005C040
Snd_se_call:	equ 0x8005C5E4
Snd_se_pri_ck:	equ 0x8005C92C
Snd_se_3D:	equ 0x8005C970
Snd_se_dir_ck:	equ 0x8005CDA4
Spl:	equ 0x8005CFC8
Spl_mv40:	equ 0x8005D0BC
Spl_mv42:	equ 0x8005D10C
Spl_mv41:	equ 0x8005D12C
Spl_mv44:	equ 0x8005D1D0
Spl_mv45:	equ 0x8005D238
Spl_mv47:	equ 0x8005D27C
Spl_mv49:	equ 0x8005D29C
Spl_mv48:	equ 0x8005D2BC
Spl_mv4a:	equ 0x8005D2DC
Spl_mv4b:	equ 0x8005D30C
Spl_mv50:	equ 0x8005D314
Spl_mv51:	equ 0x8005D3A4
Spl_mv00:	equ 0x8005D3C4
Spl_Init:	equ 0x8005D3CC
Spl_in40:	equ 0x8005D85C
Spl_in42:	equ 0x8005DA3C
Spl_in41:	equ 0x8005DA94
Spl_in44:	equ 0x8005DC74
Spl_in45:	equ 0x8005DDDC
Spl_in47:	equ 0x8005DED8
Spl_in48:	equ 0x8005DF30
Spl_in4a:	equ 0x8005DF38
Spl_in4b:	equ 0x8005E1C0
Spl_in50:	equ 0x8005E1F8
Spl_in51:	equ 0x8005E2A0
Spl_in00:	equ 0x8005E358
Spl_Damage:	equ 0x8005E360
Spl_Die:	equ 0x8005E39C
Spl_Dead:	equ 0x8005E3D8
Spl_dead00:	equ 0x8005E414
Spl_set:	equ 0x8005E41C
Spl_chenge00:	equ 0x8005E50C
Spl_chenge01:	equ 0x8005E6F0
Spl_kizu00:	equ 0x8005EAAC
Spl_chenge02:	equ 0x8005EB80
Spl_chenge04:	equ 0x8005ECFC
Spl_chenge05:	equ 0x8005F044
Spl_chenge06:	equ 0x8005F354
Spl_chenge07:	equ 0x8005F634
Spl_chenge08:	equ 0x8005FBB4
Spl_chenge09:	equ 0x8005FE6C
Spl_chenge10:	equ 0x800600B8
Spl_Root_ck_sys:	equ 0x80060374
Spl_Auto:	equ 0x800605AC
Aida:	equ 0x80060648
Aida_move:	equ 0x80060650
Aida_Move_type00:	equ 0x80060750
Aida_Move_type01:	equ 0x800607D4
Aida_Move_type02:	equ 0x80060858
Aida_Move_type03:	equ 0x800608DC
Aida_Move_type04:	equ 0x80060960
Aida_Move_type05:	equ 0x800609E4
Aida_Move_type06:	equ 0x80060A68
Aida_Move_type07:	equ 0x80060AEC
Aida_Move_type08:	equ 0x80060B70
Aida_Move_type09:	equ 0x80060BF4
Aida_Move_type0a:	equ 0x80060C78
Aida_em10_at00_pl:	equ 0x80060CFC
Aida_em10_at00_spl:	equ 0x80060E08
Aida_em25_at00_pl:	equ 0x80060EE4
Aida_em25_at00_spl:	equ 0x80060FEC
Aida_em26_at00_pl:	equ 0x80061140
Aida_em26_at00_spl:	equ 0x80061148
Aida_mv00_br:	equ 0x80061150
Aida_mv00_br_1:	equ 0x800613C0
Aida_mv00:	equ 0x800614F8
Aida_em10_at01:	equ 0x80061594
Aida_em25_at01:	equ 0x80061654
Aida_em26_at01:	equ 0x8006170C
Aida_mv01_br:	equ 0x80061714
Aida_mv01_br_1:	equ 0x800619E4
Aida_mv01:	equ 0x80061BBC
Aida_mv02_br:	equ 0x80061D90
Aida_mv02_br_1:	equ 0x80061F68
Aida_mv02:	equ 0x800620EC
Aida_mv03_br:	equ 0x80062248
Aida_mv03:	equ 0x80062318
Aida_mv04_br:	equ 0x80062490
Aida_mv04:	equ 0x800624F8
Aida_mv05_br:	equ 0x800625DC
Aida_mv05:	equ 0x80062618
Aida_mv05_w1:	equ 0x80062678
Aida_mv05_w1_t0_br:	equ 0x800626B4
Aida_mv05_w1_t0:	equ 0x800626BC
Aida_em10_at05:	equ 0x800627DC
Aida_mv05_w1_t1_br:	equ 0x800628C4
Aida_mv05_w1_t1:	equ 0x80062954
Aida_mv05_w1_t2_br:	equ 0x80062A20
Aida_mv05_w1_t2:	equ 0x80062A28
Aida_mv05_w1_t3_br:	equ 0x80062C44
Aida_mv05_w1_t3:	equ 0x80062C4C
Aida_mv05_w1_t4_br:	equ 0x80062CC0
Aida_mv05_w1_t4:	equ 0x80062CC8
Aida_mv05_w1_t5_br:	equ 0x80062D24
Aida_mv05_w1_t5:	equ 0x80062D2C
Aida_mv06_br:	equ 0x80062DC4
Aida_mv06:	equ 0x80062DCC
Aida_mv07_br:	equ 0x80062E90
Aida_mv07:	equ 0x80062E98
Aida_mv08_br:	equ 0x80063164
Aida_mv08:	equ 0x8006316C
Aida_mv09_br:	equ 0x8006351C
Aida_mv09:	equ 0x80063524
Aida_mv0a_br:	equ 0x800638C0
Aida_mv0a:	equ 0x800638C8
Aida_mv0b_br:	equ 0x800638D0
Aida_mv0b_br_1:	equ 0x80063930
Aida_mv0b:	equ 0x80063998
Aida_mv0c_br:	equ 0x800639A0
Aida_mv0c_br_1:	equ 0x80063ABC
Aida_mv0d_br:	equ 0x80063B94
Sherry_move:	equ 0x80063BEC
Sherry_Move_type00:	equ 0x80063CEC
Sherry_Move_type01:	equ 0x80063D8C
Sherry_Move_type02:	equ 0x80063E2C
Sherry_Move_type03:	equ 0x80063ECC
Sherry_Move_type04:	equ 0x80063F6C
Sherry_Move_type05:	equ 0x8006400C
Sherry_Move_type06:	equ 0x800640AC
Sherry_Move_type07:	equ 0x8006414C
Sherry_Move_type08:	equ 0x800641EC
Sherry_Move_type09:	equ 0x8006428C
Sherry_Move_type0a:	equ 0x8006432C
Sherry_mv00_br:	equ 0x800643CC
Sherry_mv00:	equ 0x800645D8
Sherry_mv01_br:	equ 0x80064814
Sherry_mv02_br:	equ 0x80064ACC
Sherry_mv06_br:	equ 0x80064D90
Sherry_mv0b_br:	equ 0x80064E5C
Sherry_mv0c_br:	equ 0x80064EBC
Spl_dm00:	equ 0x80064FA8
Spl_dm01:	equ 0x800650A8
Spl_die00:	equ 0x800651F0
Aida_before:	equ 0x800652FC
Aida_after:	equ 0x8006531C
Spl_soba_pos_set:	equ 0x80065324
Spl_enemy_ck:	equ 0x80065518
Spl_em_pos_ck:	equ 0x80065890
Spl_em_cdir_ck:	equ 0x80065A0C
Spl_pllock_get:	equ 0x80065B18
GsGetWorkBase:	equ 0x80065B8C
Spl_life_down:	equ 0x80065B9C
Spl_Scenario:	equ 0x80065C88
Spl_sce00:	equ 0x80065DD0
Spl_sce01:	equ 0x80065DF8
Spl_sce02:	equ 0x80065E18
Spl_sce03:	equ 0x80065E40
Spl_sce04:	equ 0x80065E68
Spl_sce05:	equ 0x80065FB8
Spl_sce06:	equ 0x80066138
Spl_sce07:	equ 0x800661C0
Spl_sce08:	equ 0x8006629C
Spl_sce09:	equ 0x8006637C
Spl_sce0a:	equ 0x80066450
Spl_sce0b:	equ 0x80066478
Spl_sce0c:	equ 0x80066498
Spl_sce0d:	equ 0x800664C0
Spl_sce0e:	equ 0x800664E8
Spl_sce0f:	equ 0x800664F0
Spl_sce10:	equ 0x800664F8
Spl_sce11:	equ 0x80066500
Spl_sce12:	equ 0x80066508
Spl_sce13:	equ 0x8006667C
Spl_sce14:	equ 0x80066684
Spl_sce15:	equ 0x8006668C
Spl_sce16:	equ 0x80066760
Spl_sce17:	equ 0x80066768
Spl_sce18:	equ 0x80066770
Spl_sce20:	equ 0x80066778
Spl_sce_mv00:	equ 0x800669B0
Spl_sce_mv01:	equ 0x80066AFC
Spl_sce_mv02:	equ 0x80066BCC
Spl_sce_mv03:	equ 0x80066D24
Spl_sce_mv04:	equ 0x80066DEC
Spl_Sp_Move:	equ 0x80067004
Spl_sp40_00:	equ 0x8006704C
Spl_sp44_00:	equ 0x80067984
Status_init:	equ 0x80068068
Status_init_m:	equ 0x80068484
Status:	equ 0x800689BC
St_exit:	equ 0x80068CD4
St_fade_out_set:	equ 0x80068F08
St_fade_out_wait:	equ 0x80068F40
St_chenge_pl:	equ 0x80068F9C
pl_tim_load:	equ 0x80069210
St_file_set:	equ 0x800692DC
St_room_set:	equ 0x8006931C
St_disp_name:	equ 0x800693D0
Set_iwork:	equ 0x8006947C
Set_iwork_num:	equ 0x800694B8
Check_pl_life:	equ 0x80069538
Check_item_space:	equ 0x80069590
Check_item_mix:	equ 0x800695B0
Search_item:	equ 0x80069668
Search_item_id:	equ 0x800696CC
Sort_item:	equ 0x80069714
Shift_item:	equ 0x800698B4
Set_item:	equ 0x80069ADC
Pix_trans:	equ 0x80069BB4
Pix_trans_pl:	equ 0x80069C40
Pix_move:	equ 0x80069D88
Pix_clear:	equ 0x80069E54
St_pltex_operation:	equ 0x80069EEC
Tama_ck_i:	equ 0x80069F54
Tama_decrease_i:	equ 0x8006A0CC
Tama_reload_ck:	equ 0x8006A23C
Tama_reload:	equ 0x8006A2B4
Check_cursol_distance:	equ 0x8006A38C
St_init00:	equ 0x8006A574
St_main00:	equ 0x8006A774
St_menu0_select:	equ 0x8006A7F0
St_menu0_item:	equ 0x8006A994
St_com_use_equip:	equ 0x8006AFFC
St_com_mix:	equ 0x8006B358
St_com_inspect:	equ 0x8006C2B0
St_menu0_file:	equ 0x8006C6E4
file_moji_load:	equ 0x8006D444
move_file_tag:	equ 0x8006D550
St_menu0_map:	equ 0x8006D650
St_init_disp_map:	equ 0x8006DEA0
St_disp_map:	equ 0x8006E120
Check_map_no:	equ 0x8006E7F0
Check_room_no:	equ 0x8006EAE8
St_menu1_map:	equ 0x8006ECB8
St_init03:	equ 0x8006EFD8
St_main03:	equ 0x8006F164
St_init04:	equ 0x8006F6A8
St_main04:	equ 0x8006F8B4
St_init01:	equ 0x8006F900
St_main01:	equ 0x8006FB64
St_select_menu_m:	equ 0x8006FBD4
St_select_item_m:	equ 0x8006FC58
Exchange_item:	equ 0x800703B8
St_init_itembox:	equ 0x80070E58
St_disp_itembox:	equ 0x800710DC
St_init02:	equ 0x80071BA0
St_main02:	equ 0x80071E14
St_get_check:	equ 0x80071EB4
St_get_item:	equ 0x80072050
St_disp_file2:	equ 0x800724B4
St_get_file:	equ 0x8007274C
St_init_disp_num:	equ 0x80072C1C
St_disp_num:	equ 0x80072C6C
print_num:	equ 0x8007300C
St_init_disp_cursol0:	equ 0x80073250
St_disp_cursol0:	equ 0x80073350
St_init_disp_cursol1:	equ 0x80073578
St_disp_cursol1:	equ 0x80073674
St_init_disp_face:	equ 0x80073880
St_disp_face:	equ 0x80073AB0
St_init_disp_message:	equ 0x80073DA0
St_disp_message:	equ 0x80073ED0
St_init_disp_frame:	equ 0x80074014
St_disp_frame:	equ 0x80074160
St_init_disp_menu0:	equ 0x80074300
St_disp_menu0:	equ 0x800743F8
St_init_disp_menu1:	equ 0x80074610
St_disp_menu1:	equ 0x80074888
St_init_disp_itemlist:	equ 0x80074A94
St_disp_itemlist:	equ 0x80074BB0
St_init_disp_equip:	equ 0x80074E80
St_disp_equip:	equ 0x80074F4C
St_init_disp_wall:	equ 0x800751EC
St_disp_wall:	equ 0x8007526C
St_init_disp_ECG:	equ 0x80075360
St_disp_ECG:	equ 0x800754AC
St_init_disp_itp:	equ 0x80075A00
St_disp_itp:	equ 0x80075C28
St_init_disp_filesel:	equ 0x80075DC4
St_disp_filesel:	equ 0x80075E98
St_init_disp_file:	equ 0x80075FD0
St_disp_file:	equ 0x800761B8
ST_Om_trans:	equ 0x80076498
model_disp:	equ 0x80076640
Vram_clr:	equ 0x800769C4
Memcpy:	equ 0x80076A00
Memclr:	equ 0x80076A28
Mapping_tim:	equ 0x80076A40
Mapping_tmd:	equ 0x80076B60
Set_view:	equ 0x80076CB0
Set_light:	equ 0x80076F88
Set_Light_data:	equ 0x80077200
Flg_on:	equ 0x8007730C
Flg_off:	equ 0x80077334
Flg_ck:	equ 0x80077360
Enemy_st_view:	equ 0x80077384
Rot_vector_super:	equ 0x800773EC
Rot_add_matrix:	equ 0x8007746C
Set_front_pos:	equ 0x80077600
SetSpadStack:	equ 0x8007769C
ResetSpadStack:	equ 0x800776D8
SetSpadStack2:	equ 0x80077708
ResetSpadStack2:	equ 0x8007774C
Get_work:	equ 0x8007777C
Free_work:	equ 0x800777F4
Prim_trans:	equ 0x80077874
Trans_pointer_set:	equ 0x800778F8
Eff_sprt_trans:	equ 0x80077924
Esp_trans_main:	equ 0x80077ED0
Esp_trans_3d:	equ 0x80078174
Trans_work_init:	equ 0x800783B4
__main:	equ 0x80078400
start:	equ 0x80078408
stup1:	equ 0x8007842C
stup0:	equ 0x800784A8
SpuClearReverbWorkArea:	equ 0x800784C4
_spu_init:	equ 0x80078660
_spu_writeByIO:	equ 0x800788F4
_spu_FiDMA:	equ 0x80078AC0
_spu_r_:	equ 0x80078B80
_spu_t:	equ 0x80078C2C
_spu_write:	equ 0x80078EBC
_spu_read:	equ 0x80078F44
_spu_FsetRXX:	equ 0x80078FAC
_spu_FsetRXXa:	equ 0x80078FF4
_spu_FgetRXXa:	equ 0x80079098
_spu_FsetPCR:	equ 0x800790D4
_spu_FsetDelayW:	equ 0x80079134
_spu_FsetDelayR:	equ 0x80079160
_spu_FwaitFs:	equ 0x8007918C
_SpuInit:	equ 0x800791F4
SpuStart:	equ 0x800792EC
_SpuDataCallback:	equ 0x80079368
_SpuIsInAllocateArea:	equ 0x8007938C
_SpuIsInAllocateArea_:	equ 0x8007940C
SpuGetKeyStatus:	equ 0x80079694
SpuSetTransferMode:	equ 0x80079728
_SsClose:	equ 0x80079E34
SsSeqClose:	equ 0x80079FB0
SsSepClose:	equ 0x80079FD4
_SsSndSetDecres:	equ 0x80079FF8
SsSeqSetDecrescendo_0:	equ 0x8007A120
SsSeqSetDecrescendo:	equ 0x8007A188
SsEnd:	equ 0x8007A280
_SsInit:	equ 0x8007A344
SsInit:	equ 0x8007A42C
SpuInit:	equ 0x8007A45C
SsSetLoop:	equ 0x8007A47C
SsIsEos:	equ 0x8007A4BC
SsSeqOpen:	equ 0x8007A4FC
_SsContBankChange:	equ 0x8007A81C
_SsContDataEntry:	equ 0x8007A894
_SsContMainVol:	equ 0x8007ACBC
_SsContPanpot:	equ 0x8007AD8C
_SsContExpression:	equ 0x8007AE54
_SsContDamper:	equ 0x8007AF3C
SsSetTempo:	equ 0x8007AF50
_SsContExternal:	equ 0x8007AFE4
_SsContNrpn1:	equ 0x8007B06C
_SsContNrpn2:	equ 0x8007B19C
_SsContRpn1:	equ 0x8007B2D0
_SsContRpn2:	equ 0x8007B340
_SsContResetAll:	equ 0x8007B3B0
_SsSetNrpnVabAttr0:	equ 0x8007B46C
_SsSetNrpnVabAttr1:	equ 0x8007B4FC
_SsSetNrpnVabAttr2:	equ 0x8007B5B8
_SsSetNrpnVabAttr3:	equ 0x8007B648
_SsSetNrpnVabAttr4:	equ 0x8007B6D8
_SsUtResolveADSR:	equ 0x8007B78C
_SsUtBuildADSR:	equ 0x8007B7E8
_SsSetNrpnVabAttr5:	equ 0x8007B888
_SsSetNrpnVabAttr6:	equ 0x8007B940
_SsSetNrpnVabAttr7:	equ 0x8007B9F0
_SsSetNrpnVabAttr8:	equ 0x8007BAA0
_SsSetNrpnVabAttr9:	equ 0x8007BB54
_SsSetNrpnVabAttr10:	equ 0x8007BC0C
_SsSetNrpnVabAttr11:	equ 0x8007BCC0
_SsSetNrpnVabAttr12:	equ 0x8007BD68
_SsSetNrpnVabAttr13:	equ 0x8007BE44
_SsSetNrpnVabAttr14:	equ 0x8007BEE4
_SsSetNrpnVabAttr15:	equ 0x8007BF84
_SsSetNrpnVabAttr16:	equ 0x8007BFA8
_SsSetNrpnVabAttr17:	equ 0x8007BFD0
_SsSetNrpnVabAttr18:	equ 0x8007BFF4
_SsSetNrpnVabAttr19:	equ 0x8007C018
_SsSetPitchBend:	equ 0x8007C03C
_SsSetControlChange:	equ 0x8007C0EC
_SsGetMetaEvent:	equ 0x8007C324
_SsNoteOn:	equ 0x8007C4F4
_SsSetProgramChange:	equ 0x8007C5C8
_SsReadDeltaValue:	equ 0x8007C638
_SsInitSoundSeq:	equ 0x8007C6E8
_SsSndSetPauseMode:	equ 0x8007CA34
SsSeqPause:	equ 0x8007CB04
SsSepPause:	equ 0x8007CB2C
SsSeqPlay:	equ 0x8007CB58
SsSepPlay:	equ 0x8007CB90
SsQuit:	equ 0x8007CBC8
SpuQuit:	equ 0x8007CBE8
_SsSndSetReplayMode:	equ 0x8007CC64
SsSeqReplay:	equ 0x8007CD00
SsSepReplay:	equ 0x8007CD28
Snd_SetPlayMode:	equ 0x8007CD54
SsSetSerialAttr:	equ 0x8007CE70
SpuSetCommonAttr:	equ 0x8007CF04
SsSetMVol:	equ 0x8007D298
SsSetRVol:	equ 0x8007D2E8
SpuSetReverbDepth:	equ 0x8007D370
_SsStart:	equ 0x8007D3E8
SsStart:	equ 0x8007D650
SsStart2:	equ 0x8007D670
_SsTrapIntrVSync:	equ 0x8007D690
_SsSeqCalledTbyT_1per2:	equ 0x8007D6D0
SsSeqCalledTbyT:	equ 0x8007D720
_SsSndCrescendo:	equ 0x8007D994
_SsSndDecrescendo:	equ 0x8007DCB4
_SsSndPause:	equ 0x8007E060
_SsSndPlay:	equ 0x8007E0FC
_SsSeqPlay:	equ 0x8007E128
_SsSeqGetEof:	equ 0x8007E230
_SsGetSeqData:	equ 0x8007E474
_SsSndNextSep:	equ 0x8007E818
_SsSndReplay:	equ 0x8007E914
_SsSndStop:	equ 0x8007E974
SsSeqStop:	equ 0x8007EAF8
SsSepStop:	equ 0x8007EB20
SsSetSerialVol:	equ 0x8007EB4C
SsSetTableSize:	equ 0x8007EC48
SsSetTickMode:	equ 0x8007EE20
_SsSndSetVol:	equ 0x8007EF8C
SsSeqSetVol:	equ 0x8007F018
SsSepSetVol:	equ 0x8007F078
SsSeqGetVol:	equ 0x8007F104
_SsSndTempo:	equ 0x8007F138
SsUtAllKeyOff:	equ 0x8007F358
SsUtGetProgAtr:	equ 0x8007FA84
SsUtGetVagAtr:	equ 0x8007FB8C
SsUtKeyOn:	equ 0x8007FDC8
SsUtKeyOff:	equ 0x80080164
SsUtKeyOnV:	equ 0x800802B8
SsUtKeyOffV:	equ 0x8008064C
SsUtSetReverbDelay:	equ 0x800806C4
SpuSetReverbModeParam:	equ 0x80080704
_spu_setReverbAttr:	equ 0x80080BFC
SsUtSetReverbDepth:	equ 0x800810CC
SsUtSetReverbType:	equ 0x80081164
SsUtGetReverbType:	equ 0x80081208
SpuSetReverb:	equ 0x80081218
SsUtSetReverbFeedback:	equ 0x800812E8
SsUtReverbOff:	equ 0x80081328
SsUtReverbOn:	equ 0x80081348
SsUtSetVagAtr:	equ 0x80081368
SsUtGetDetVVol:	equ 0x80081530
SsUtSetDetVVol:	equ 0x8008156C
SsUtGetVVol:	equ 0x800815D8
SsUtSetVVol:	equ 0x80081688
SpuGetVoiceVolume:	equ 0x80081714
_SsVmAlloc:	equ 0x80081774
SpuSetNoiseVoice:	equ 0x80081A00
_SpuSetAnyVoice:	equ 0x80081A24
_SsVmDoAllocate:	equ 0x80081CEC
_SsVmDamperOff:	equ 0x80081EFC
_SsVmDamperOn:	equ 0x80081F0C
_SsVmFlush:	equ 0x80081F20
_SsVmInit:	equ 0x8008239C
SpuInitMalloc:	equ 0x800826BC
_spu_setInTransfer:	equ 0x80082710
_spu_getInTransfer:	equ 0x8008273C
_SsVmKeyOn:	equ 0x80082754
_SsVmKeyOff:	equ 0x80082CD8
_SsVmSeKeyOn:	equ 0x80082E24
_SsVmSeKeyOff:	equ 0x80082F10
KeyOnCheck:	equ 0x80082F44
note2pitch:	equ 0x80082F4C
note2pitch2:	equ 0x80083010
vmNoiseOn:	equ 0x8008310C
_SsVmKeyOffNow:	equ 0x80083690
_SsVmKeyOnNow:	equ 0x80083760
_SsVmPBVoice:	equ 0x80083C2C
_SsVmPitchBend:	equ 0x80083E2C
_SsVmSetProgVol:	equ 0x80083F1C
_SsVmGetProgVol:	equ 0x80083F90
_SsVmSetProgPan:	equ 0x80083FE4
_SsVmGetProgPan:	equ 0x80084058
_SsVmSetSeqVol:	equ 0x800840AC
_SsVmGetSeqVol:	equ 0x800845E8
_SsVmGetSeqLVol:	equ 0x8008464C
_SsVmGetSeqRVol:	equ 0x80084694
_SsVmSeqKeyOff:	equ 0x800846DC
_SsVmSelectToneAndVag:	equ 0x80084778
_SsVmSetVol:	equ 0x8008482C
_SsVmVSetUp:	equ 0x80084DA8
SsSetMono:	equ 0x80084E6C
SsSetStereo:	equ 0x80084E80
SsSetReservedVoice:	equ 0x80084E90
SsVabClose:	equ 0x80084EC0
SpuFree:	equ 0x80084F44
_spu_gcSPU:	equ 0x80084FC0
SsVabFakeBody:	equ 0x800852C8
SsVabOpenHead:	equ 0x80085338
SsVabOpenHeadSticky:	equ 0x80085368
SsVabFakeHead:	equ 0x80085398
SsVabOpenHeadWithMode:	equ 0x800853C8
SpuMalloc:	equ 0x800857A4
SsVabTransBody:	equ 0x80085A6C
SpuWrite:	equ 0x80085B2C
SpuSetTransferStartAddr:	equ 0x80085B8C
SsVabTransBodyPartly:	equ 0x80085BE4
SpuWritePartly:	equ 0x80085D44
SsVabTransCompleted:	equ 0x80085DD0
SpuIsTransferCompleted:	equ 0x80085DF8
VSync:	equ 0x80085EA0
v_wait:	equ 0x80085FE8
ResetCallback:	equ 0x80086084
InterruptCallback:	equ 0x800860B4
DMACallback:	equ 0x800860E4
VSyncCallback:	equ 0x80086114
VSyncCallbacks:	equ 0x80086148
StopCallback:	equ 0x80086178
RestartCallback:	equ 0x800861A8
CheckCallback:	equ 0x800861D8
GetIntrMask:	equ 0x800861E8
SetIntrMask:	equ 0x80086200
startIntr:	equ 0x8008621C
trapIntr:	equ 0x800862F8
setIntr:	equ 0x800864E0
stopIntr:	equ 0x80086634
restartIntr:	equ 0x800866E0
startIntrVSync:	equ 0x80086794
trapIntrVSync:	equ 0x800867EC
setIntrVSync:	equ 0x80086864
startIntrDMA:	equ 0x800868BC
trapIntrDMA:	equ 0x8008690C
setIntrDMA:	equ 0x80086A90
memclr:	equ 0x80086B38
SetVideoMode:	equ 0x80086B64
GsGetWorkBase_0:	equ 0x80086B7C
StSetRing:	equ 0x80086B8C
StClearRing:	equ 0x80086BBC
StUnSetRing:	equ 0x80086C1C
CdStatus:	equ 0x80086CA0
CdMode:	equ 0x80086CB0
CdLastCom:	equ 0x80086CC0
CdLastPos:	equ 0x80086CD0
CdReset:	equ 0x80086CE0
CdFlush:	equ 0x80086D4C
CdSetDebug:	equ 0x80086D6C
CdComstr:	equ 0x80086D84
CdIntstr:	equ 0x80086DB8
CdSync:	equ 0x80086DEC
CdReady:	equ 0x80086E0C
CdSyncCallback:	equ 0x80086E2C
CdReadyCallback:	equ 0x80086E44
CdControl:	equ 0x80086E5C
CdControlF:	equ 0x80086F94
CdControlB:	equ 0x800870C0
CdMix:	equ 0x80087204
CdGetSector:	equ 0x80087224
CdGetSector2:	equ 0x80087244
CdDataCallback:	equ 0x80087264
CdDataSync:	equ 0x80087288
CdIntToPos:	equ 0x800872AC
CdPosToInt:	equ 0x800873AC
getintr:	equ 0x8008742C
CD_sync:	equ 0x800879B4
CD_ready:	equ 0x80087C34
CD_cw:	equ 0x80087F00
CD_vol:	equ 0x8008831C
CD_flush:	equ 0x800883A4
CD_initvol:	equ 0x80088484
CD_initintr:	equ 0x80088578
CD_init:	equ 0x800885C8
CD_datasync:	equ 0x800887B4
CD_getsector:	equ 0x80088920
CD_getsector2:	equ 0x80088A20
CD_set_test_parmnum:	equ 0x80088B10
callback:	equ 0x80088B20
StSetStream:	equ 0x80088C04
StFreeRing:	equ 0x80088C8C
init_ring_status:	equ 0x80088D44
StGetNext:	equ 0x80088D80
StSetMask:	equ 0x80088E44
StCdInterrupt:	equ 0x80088E64
mem2mem:	equ 0x800897D4
dma_execute:	equ 0x80089808
data_ready_callback:	equ 0x800899C4
StGetBackloc:	equ 0x80089A50
StGetBackloc_0:	equ 0x80089A54
CQ_clear_queue:	equ 0x80089AB4
CQ_delete_command:	equ 0x80089AE4
CQ_last_queue:	equ 0x80089BD4
CQ_error_flush:	equ 0x80089C2C
CQ_execute:	equ 0x80089DE0
CQ_sync_system:	equ 0x80089E58
CQ_add_result:	equ 0x8008A080
DsInit:	equ 0x8008A110
DsReset:	equ 0x8008A254
DsClose:	equ 0x8008A360
DsCommand:	equ 0x8008A380
DsPacket:	equ 0x8008A5A8
DsSync:	equ 0x8008A8C4
DsReady:	equ 0x8008AAC4
DsFlush:	equ 0x8008AB74
DsSystemStatus:	equ 0x8008AC04
GsGetWorkBase_1:	equ 0x8008AC54
DsStatus:	equ 0x8008AC64
DsShellOpen:	equ 0x8008AC84
DsLastCom:	equ 0x8008ACA4
CQ_vsync_system:	equ 0x8008ACC4
CQ_ready_system:	equ 0x8008AD6C
DS_init:	equ 0x8008AE68
DS_reset_members:	equ 0x8008AF04
DS_close:	equ 0x8008B014
DS_cw:	equ 0x8008B058
DS_vsync_callback:	equ 0x8008B0DC
DS_sync_callback:	equ 0x8008B0EC
DS_ready_callback:	equ 0x8008B0FC
DS_system_status:	equ 0x8008B10C
DS_lastcom:	equ 0x8008B124
DS_lastmode:	equ 0x8008B134
DS_lastpos:	equ 0x8008B144
DS_lastseek:	equ 0x8008B154
DS_lastread:	equ 0x8008B164
DS_status:	equ 0x8008B174
DS_sync:	equ 0x8008B184
DS_ready:	equ 0x8008B1A8
GsGetWorkBase_2:	equ 0x8008B1CC
DS_cw_root:	equ 0x8008B1DC
DS_vsync_system:	equ 0x8008B2FC
DS_sync_system:	equ 0x8008B5EC
DS_sync_for_user:	equ 0x8008B6E0
DS_sync_for_system:	equ 0x8008B8D8
DS_sync_for_void:	equ 0x8008BA60
DS_ready_system:	equ 0x8008BB70
DS_scan_result:	equ 0x8008BC3C
DS_stop:	equ 0x8008BCBC
DS_restart:	equ 0x8008BD1C
GsGetWorkBase_3:	equ 0x8008BD30
parcpy:	equ 0x8008BD40
rescpy:	equ 0x8008BD88
tipDsSystem:	equ 0x8008BDD0
DsMix:	equ 0x8008BEBC
DsGetSector:	equ 0x8008BEDC
DsGetSector2:	equ 0x8008BEFC
DsDataSync:	equ 0x8008BF1C
DsIntToPos:	equ 0x8008BF3C
DsPosToInt:	equ 0x8008C040
DsSetDebug:	equ 0x8008C0C0
DsLastPos:	equ 0x8008C0D8
DsControlF:	equ 0x8008C130
DsControl:	equ 0x8008C158
DsControlB:	equ 0x8008C1C4
DsRead:	equ 0x8008C230
DS_read_cbsync:	equ 0x8008C340
DS_read_cbready:	equ 0x8008C374
DS_read_cbdata:	equ 0x8008C534
DsReadSync:	equ 0x8008C628
DsReadCallback:	equ 0x8008C69C
DsReadBreak:	equ 0x8008C6B4
DsReadMode:	equ 0x8008C730
DsRead2:	equ 0x8008C74C
StCdInterrupt2:	equ 0x8008C82C
DsStartReadySystem:	equ 0x8008C84C
DsEndReadySystem:	equ 0x8008C8D8
ER_cbready:	equ 0x8008C938
ER_retry:	equ 0x8008CBC4
ER_cbsync:	equ 0x8008CC44
DsSyncCallback: equ 0x8008cc78
DsReadyCallback:	equ 0x8008cc8c
DsStartCallback:	equ 0x8008CCA0
rsin:	equ 0x8008CCC4
sin_1:	equ 0x8008CD00
rcos:	equ 0x8008CD90
MatrixNormal_0:	equ 0x8008CE30
MatrixNormal_1:	equ 0x8008CF50
MatrixNormal_2:	equ 0x8008D068
MatrixNormal_3:	equ 0x8008D070
catan:	equ 0x8008D190
InitGeom:	equ 0x8008D26C
SquareRoot0:	equ 0x8008D2F4
InvSquareRoot:	equ 0x8008D384
VectorNormalS:	equ 0x8008D410
VectorNormal:	equ 0x8008D424
VectorNormalSS:	equ 0x8008D450
MatrixNormal:	equ 0x8008D53C
SquareRoot12:	equ 0x8008D624
MulMatrix0:	equ 0x8008D6C4
ApplyMatrixLV:	equ 0x8008D7D4
MulMatrix:	equ 0x8008D934
MulMatrix2:	equ 0x8008DA44
ApplyMatrix:	equ 0x8008DB54
ApplyMatrixSV:	equ 0x8008DBA4
ScaleMatrix:	equ 0x8008DC04
SetRotMatrix:	equ 0x8008DD34
SetLightMatrix:	equ 0x8008DD64
SetColorMatrix:	equ 0x8008DD94
SetTransMatrix:	equ 0x8008DDC4
SetBackColor:	equ 0x8008DDE4
SetGeomOffset:	equ 0x8008DE04
SetGeomScreen:	equ 0x8008DE24
LightColor:	equ 0x8008DE34
DpqColorLight:	equ 0x8008DE5C
DpqColor3:	equ 0x8008DE84
Intpl:	equ 0x8008DEC0
Square12:	equ 0x8008DEE4
Square0:	equ 0x8008DF0C
AverageZ3:	equ 0x8008DF34
AverageZ4:	equ 0x8008DF54
OuterProduct12:	equ 0x8008DF78
OuterProduct0:	equ 0x8008DFD0
Lzc:	equ 0x8008E028
RotTransPers:	equ 0x8008E044
RotTransPers3:	equ 0x8008E074
RotAverage3:	equ 0x8008E0D4
RotAverage4:	equ 0x8008E134
TransposeMatrix:	equ 0x8008E1B4
RotMatrix:	equ 0x8008E1F4
RotMatrixYXZ:	equ 0x8008E484
RotMatrixX:	equ 0x8008E714
RotMatrixY:	equ 0x8008E8B4
RotMatrixZ:	equ 0x8008EA54
DivideGT3:	equ 0x8008EBF4
ReadSZfifo3:	equ 0x8008EDCC
RotAverageNclip3:	equ 0x8008EDEC
RCpolyGT3:	equ 0x8008EE7C
RCpolyGT3A:	equ 0x8008EE84
ratan2:	equ 0x8008F31C
_patch_gte:	equ 0x8008F49C
LoadTPage:	equ 0x8008F53C
LoadClut:	equ 0x8008F628
LoadClut2:	equ 0x8008F690
SetDefDrawEnv:	equ 0x8008F6F8
SetDefDispEnv:	equ 0x8008F7B0
GetTPage:	equ 0x8008F7EC
GetClut:	equ 0x8008F828
DumpTPage:	equ 0x8008F840
DumpClut:	equ 0x8008F8A0
NextPrim:	equ 0x8008F8E0
IsEndPrim:	equ 0x8008F8FC
AddPrim:	equ 0x8008F918
AddPrims:	equ 0x8008F954
CatPrim:	equ 0x8008F990
TermPrim:	equ 0x8008F9B4
SetSemiTrans:	equ 0x8008F9CC
SetShadeTex:	equ 0x8008F9F4
SetPolyF3:	equ 0x8008FA1C
SetPolyFT3:	equ 0x8008FA30
SetPolyG3:	equ 0x8008FA44
SetPolyGT3:	equ 0x8008FA58
SetPolyF4:	equ 0x8008FA6C
SetPolyFT4:	equ 0x8008FA80
SetPolyG4:	equ 0x8008FA94
SetPolyGT4:	equ 0x8008FAA8
SetSprt8:	equ 0x8008FABC
SetSprt16:	equ 0x8008FAD0
SetSprt:	equ 0x8008FAE4
SetTile1:	equ 0x8008FAF8
SetTile8:	equ 0x8008FB0C
SetTile16:	equ 0x8008FB20
SetTile:	equ 0x8008FB34
SetLineF2:	equ 0x8008FB48
SetLineG2:	equ 0x8008FB5C
SetLineF3:	equ 0x8008FB70
SetLineG3:	equ 0x8008FB90
SetLineF4:	equ 0x8008FBB0
SetLineG4:	equ 0x8008FBD0
SetDrawTPage:	equ 0x8008FBF0
SetDrawMove:	equ 0x8008FC1C
SetDrawLoad:	equ 0x8008FC7C
MargePrim:	equ 0x8008FCE8
DumpDrawEnv:	equ 0x8008FD20
DumpDispEnv:	equ 0x8008FE34
ResetGraph:	equ 0x8008FEE0
SetGraphReverse:	equ 0x80090064
SetGraphDebug:	equ 0x80090178
SetGraphQueue:	equ 0x800901DC
GetGraphType:	equ 0x80090288
GetGraphDebug:	equ 0x80090298
DrawSyncCallback:	equ 0x800902A8
SetDispMask:	equ 0x80090304
DrawSync:	equ 0x800903A0
checkRECT:	equ 0x8009040C
ClearImage:	equ 0x80090534
ClearImage2:	equ 0x800905C8
LoadImage:	equ 0x80090664
StoreImage:	equ 0x800906C8
MoveImage:	equ 0x8009072C
ClearOTag:	equ 0x800907F0
ClearOTagR:	equ 0x800908A8
DrawPrim:	equ 0x80090940
DrawOTag:	equ 0x800909A0
PutDrawEnv:	equ 0x80090A14
DrawOTagEnv:	equ 0x80090B18
GetDrawEnv:	equ 0x80090C34
PutDispEnv:	equ 0x80090C6C
GetDispEnv:	equ 0x80091114
GetODE:	equ 0x8009114C
SetTexWindow:	equ 0x8009117C
SetDrawArea:	equ 0x800911B8
SetDrawOffset:	equ 0x8009123C
SetPriority:	equ 0x80091280
SetDrawMode:	equ 0x800912AC
SetDrawEnv:	equ 0x80091304
SetDrawEnv2:	equ 0x8009151C
get_mode:	equ 0x800917AC
get_cs:	equ 0x80091804
get_ce:	equ 0x800918D0
get_ofs:	equ 0x8009199C
get_tw:	equ 0x800919E0
get_dx:	equ 0x80091A64
_status:	equ 0x80091B14
_otc:	equ 0x80091B2C
_clr:	equ 0x80091C14
_dws:	equ 0x80091E70
_drs:	equ 0x800920AC
_ctl:	equ 0x80092330
_getctl:	equ 0x80092358
_cwb:	equ 0x8009236C
_cwc:	equ 0x800923BC
_param:	equ 0x80092408
_addque:	equ 0x80092438
_addque2:	equ 0x8009245C
_exeque:	equ 0x8009273C
_reset:	equ 0x80092A28
_sync:	equ 0x80092B84
set_alarm:	equ 0x80092CCC
get_alarm:	equ 0x80092D00
_version:	equ 0x80092E6C
OpenTIM:	equ 0x80092F74
ReadTIM:	equ 0x80092F84
OpenTMD:	equ 0x80092FEC
ReadTMD:	equ 0x8009302C
get_tim_addr:	equ 0x800932D8
get_tmd_addr:	equ 0x800933F8
unpack_packet:	equ 0x80093590
DecDCTReset:	equ 0x80094870
DecDCTGetEnv:	equ 0x800948A8
DecDCTPutEnv:	equ 0x80094934
DecDCTBufSize:	equ 0x800949D0
DecDCTin:	equ 0x800949DC
DecDCTout:	equ 0x80094A58
DecDCTinSync:	equ 0x80094A78
DecDCToutSync:	equ 0x80094AB4
DecDCTinCallback:	equ 0x80094AF0
DecDCToutCallback:	equ 0x80094B14
MDEC_reset:	equ 0x80094B38
MDEC_in:	equ 0x80094C34
MDEC_out:	equ 0x80094CC8
MDEC_in_sync:	equ 0x80094D58
MDEC_out_sync:	equ 0x80094DF0
MDEC_status:	equ 0x80094E88
timeout:	equ 0x80094EA0
DecDCTvlcSize2:	equ 0x80094FD4
DecDCTvlc2:	equ 0x80095004
_bu_init:	equ 0x80095368
InitCARD:	equ 0x80095378
StartCARD:	equ 0x800953CC
StopCARD:	equ 0x80095404
InitCARD2:	equ 0x80095434
StartCARD2:	equ 0x80095444
StopCARD2:	equ 0x80095454
_ExitCard:	equ 0x80095464
_patch_card:	equ 0x8009553C
_patch_card2:	equ 0x800955F4
InitHeap:	equ 0x80095684
FlushCache:	equ 0x80095694
GPU_cw:	equ 0x800956A4
_96_remove:	equ 0x800956BC
DeliverEvent:	equ 0x800956D4
OpenEvent:	equ 0x800956E4
CloseEvent:	equ 0x800956F4
WaitEvent:	equ 0x80095704
TestEvent:	equ 0x80095714
EnableEvent:	equ 0x80095724
DisableEvent:	equ 0x80095734
OpenTh:	equ 0x80095744
CloseTh:	equ 0x80095754
ChangeTh:	equ 0x80095764
ReturnFromException:	equ 0x80095774
ResetEntryInt:	equ 0x80095784
HookEntryInt:	equ 0x80095794
EnterCriticalSection:	equ 0x800957A4
ExitCriticalSection:	equ 0x800957B4
open:	equ 0x800957C4
lseek:	equ 0x800957D4
read:	equ 0x800957E4
write:	equ 0x800957F4
close:	equ 0x80095804
format:	equ 0x80095814
nextfile:	equ 0x80095824
ChangeClearPAD:	equ 0x80095834
GetGp:	equ 0x80095844
ChangeClearRCnt:	equ 0x80095854
SetRCnt:	equ 0x80095864
GetRCnt:	equ 0x80095900
StartRCnt:	equ 0x80095938
StopRCnt:	equ 0x80095968
ResetRCnt:	equ 0x8009599C
firstfile:	equ 0x800959D4
firstfile2:	equ 0x80095C74
PadEnableCom:	equ 0x80096134
_padSetVsyncParam:	equ 0x8009624C
_IsVSync:	equ 0x80096278
_padChkVsync:	equ 0x8009644C
_padStartCom:	equ 0x80096460
_padStopCom:	equ 0x8009652C
_padInitSioMode:	equ 0x80096570
_padSioRW:	equ 0x8009696C
_padSioRW2:	equ 0x80096B44
SysEnqIntRP:	equ 0x80096D14
SysDeqIntRP:	equ 0x80096D24
_padClrIntSio0:	equ 0x80096D7C
_padWaitRXready:	equ 0x80096E0C
PadInitDirect:	equ 0x80097C74
setRC2wait:	equ 0x80098754
chkRC2wait:	equ 0x80098774
puts:	equ 0x8009881C
setjmp:	equ 0x80098834
strcpy:	equ 0x80098854
bzero:	equ 0x80098864
memcpy:	equ 0x80098874
memset:	equ 0x80098884
printf:	equ 0x80098894

FUN_80039694:				equ 0x80039694

FUN_800529fc:				equ 0x800529fc

FUN_8003947c:				equ 0x8003947c
FUN_80039514:				equ 0x80039514
FUN_800395b8:				equ 0x800395b8


;;
;;	Data
;;

Xa_no:								equ 0x80010818

floc:								equ 0x800988a4
Xa_sector00:						equ 0x8009a37c
Serial_no:							equ 0x8009a3e0
cdmode:								equ 0x8009a414
xa_cdmode:							equ 0x8009a415
xa_control_tbl:						equ 0x8009a418
xacontrol_cdmode:					equ 0x8009a428
cdread_cdmode:						equ 0x8009a429
cdread_s_cdmode:					equ 0x8009a42a
door_msg:							equ 0x8009a42c
door_msg_ofs:						equ 0x8009a468
D_LIGHTMATRIX:						equ 0x8009a470
D_COLORMATRIX:						equ 0x8009a490
Dtex_file:							equ 0x8009a4b0
Dinfo:								equ 0x8009a520
pDoor_proc_tbl:						equ 0x8009a7b4
Aida_jh0_tbl:						equ 0x8009a7c4
Aida_jh0_head:						equ 0x8009a8e8
Aida_jh1_tbl:						equ 0x8009a920
Aida_jh1_head:						equ 0x8009a97c
Aida_jh2_tbl:						equ 0x8009a9b4
Aida_jh2_head:						equ 0x8009aa10
Aida_jh3_tbl:						equ 0x8009aa48
Aida_jh3_head:						equ 0x8009aa58
Aida_jh4_tbl:						equ 0x8009aa90
Aida_jh4_head:						equ 0x8009aad8
Aida_jh5_tbl:						equ 0x8009ab10
Aida_jh5_head:						equ 0x8009ab58
Kg_jh0_tbl:							equ 0x8009ab90
Kg_jh0_head:						equ 0x8009ac60
cdemd0_pos:							equ 0x8009adf4
cdemd0_sum:							equ 0x8009b754
cdemd1_pos:							equ 0x8009b754	;; relocated from 0x8009b880
cdemd1_sum:							equ 0x8009c1e0
cdemd2_pos:							equ 0x8009c30c
cdemd2_sum:							equ 0x8009cc6c
cdemd3_pos:							equ 0x8009cd98
cdemd3_sum:							equ 0x8009d358
Emd_name:							equ 0x8009d410
Emd_tim_name:						equ 0x8009d444
Room_100:							equ 0x8009d478
Room_102:							equ 0x8009d498
Room_101:							equ 0x8009d4a8
Room_202:							equ 0x8009d4b8
Room_109:							equ 0x8009d4c8
Room_10B:							equ 0x8009d4d8
Room_110:							equ 0x8009d4e8
Room_117:							equ 0x8009d528
Room_700:							equ 0x8009d598
Room_702:							equ 0x8009d5b8
Room_703:							equ 0x8009d5d8
Room_705:							equ 0x8009d5f8
Em_stbl_st1:						equ 0x8009d648
Em_stbl_st2:						equ 0x8009d728
Em_stbl_st7:						equ 0x8009d818
Room_Enemy_tbl:						equ 0x8009d848
Esp_tblj:							equ 0x8009d868
sin_tbl:							equ 0x8009d9f4
quake_tbl1:							equ 0x8009daf4
quake_tbl2:							equ 0x8009db14
sinpuku:							equ 0x8009db34
hacho:								equ 0x8009db38
speed:								equ 0x8009db3c
mode:								equ 0x8009db40
GsIDMATRIX:							equ 0x8009db44
LIGHTMATRIX:						equ 0x8009db64
COLORMATRIX:						equ 0x8009db84
Bgm_sw_timer:						equ 0x8009dba2
No_death_timer:						equ 0x8009dba3
Curtain:							equ 0x8009dbac
Pause:								equ 0x8009dbec
Scrl_h:								equ 0x8009dc0c
Rect:								equ 0x8009dc10
Rect_bg:							equ 0x8009dc20
Bomb_tbl:							equ 0x8009dc28
Mizu_size_tbl:						equ 0x8009dca0
Mizu_tbl:							equ 0x8009dcc0
Mizu_struct_tbl:					equ 0x8009dcd0
Div_prim_coord:						equ 0x8009ddcc
msg_space:							equ 0x8009de34
namelist_tbl_data:					equ 0x8009df3c
namelist_tbl_ofs:					equ 0x8009e438
namelist_u_data:					equ 0x8009e550
namelist_u_ofs:						equ 0x8009ebac
mess_tbl_data:						equ 0x8009ecc4
mess_tbl_ofs:						equ 0x8009ef9c
mess_u_data:						equ 0x8009efcc
mess_u_ofs:							equ 0x8009f368
mess_sub_data:						equ 0x8009f398
mess_sub_ofs:						equ 0x800a0674
mess_etc_data:						equ 0x800a075c
mess_etc_ofs:						equ 0x800a1e7c
branch_data:						equ 0x800a1f64
branch_ofs:							equ 0x800a2040
ascii_tbl:							equ 0x800a2094
Ld_task_tbl:						equ 0x800a20b8
Movie_tbl:							equ 0x800a216c
pMovie_proc_tbl:					equ 0x800a23ac
pDoor_proc_tbl_ex:					equ 0x800a242c
;;Subpl_walk:							equ 0x800a2444
;;Subpl_back:							equ 0x800a2484
;;Subpl_dir:							equ 0x800a24c4
;;Subpl_ato:							equ 0x800a2504
;;Subpl_run:							equ 0x800a2544
;;Em4a_zobiparts_tbl:					equ 0x800a2584
Up_add_tbl:							equ 0x800a2594
Down_add_tbl:						equ 0x800a25bc
Box_sub_tbl:						equ 0x800a25e4
Up_add_Spl_tbl:						equ 0x800a260c
Down_add_Spl_tbl:					equ 0x800a264c
Key_type:							equ 0x800a26a0		;; Pad_set
Stp_bak:							equ 0x800a2700
Key_wait:							equ 0x800a2704
Init_work_tbl:						equ 0x800a2708
pc_mes_data:						equ 0x800a3dc8
pc_mes_ofs:							equ 0x800a3e68
;;Kend:								equ 0x800a3e7c		;; Computer200
;;Mend:								equ 0x800a3e80		;; Computer200
;;Key_type:							equ 0x800a3e84		;; Computer200
;;Kend:								equ 0x800a3e88		;; Computer613
;;Mend:								equ 0x800a3e8c		;; Computer613
;;Key_type:							equ 0x800a3e90		;; Computer613
;;Subpl_walk:							equ 0x800a3e94
;;Subpl_back:							equ 0x800a3ed4
;;Subpl_dir:							equ 0x800a3f14
;;Subpl_ato:							equ 0x800a3f54
;;Subpl_run:							equ 0x800a3f94
;;Em4a_zobiparts_tbl:					equ 0x800a3fd4
Pld_no:								equ 0x800a3fe4
Pl_neck_timer:						equ 0x800a4004
Pld_name:							equ 0x800a4008
Pl_routine:							equ 0x800a4030
Pl_mv_pad:							equ 0x800a4054
Pl_mv:								equ 0x800a4084
Pl_kage_pos:						equ 0x800a40b4
pl_water:							equ 0x800a40c4
Wat_vec00:							equ 0x800a40d4
Pl_dm:								equ 0x800a40e4
Pl_die_t:							equ 0x800a40fc
Em10_damage_tbl:					equ 0x800a412c
Em15_damage_tbl:					equ 0x800a42a8
Em20_damage_tbl:					equ 0x800a4424
Em21_damage_tbl:					equ 0x800a45a0
Em22_damage_tbl:					equ 0x800a471c
Em24_damage_tbl:					equ 0x800a4898
Em23_damage_tbl:					equ 0x800a4a14
Em25_damage_tbl:					equ 0x800a4b90
Em27_damage_tbl:					equ 0x800a4d0c
Em28_damage_tbl:					equ 0x800a4e88
Em29_damage_tbl:					equ 0x800a5004
Em2d_damage_tbl:					equ 0x800a5180
Em2a_damage_tbl:					equ 0x800a52fc
Em2b_damage_tbl:					equ 0x800a5478
Em2e_damage_tbl:					equ 0x800a55f4
Em30_damage_tbl:					equ 0x800a5770
Em31_damage_tbl:					equ 0x800a58ec
Em33_damage_tbl:					equ 0x800a5a68
Em34_damage_tbl0:					equ 0x800a5be4
Em34_damage_tbl1:					equ 0x800a5d60
Em36_damage_tbl:					equ 0x800a5edc
Em3a_damage_tbl:					equ 0x800a6058
Em3b_damage_tbl:					equ 0x800a61d4
PLW00_W:							equ 0x800a6350
PLW00_S:							equ 0x800a63a4
Pl_w011:							equ 0x800a63a8
Pl_w01_s1:							equ 0x800a6434
Pl_w0111:							equ 0x800a6444
Pl_w0111_s1:						equ 0x800a64d0
Pl_w010:							equ 0x800a64e0
Pl_w01_s0:							equ 0x800a656c
Pl_w012:							equ 0x800a657c
Pl_w01_s2:							equ 0x800a6608
PLW02_W:							equ 0x800a6618
PLW02_S:							equ 0x800a666c
PLW05_W:							equ 0x800a6670
PLW05_S:							equ 0x800a66c4
PLW13_W:							equ 0x800a66c8
PLW13_S:							equ 0x800a671c
PLW07_W:							equ 0x800a6724
PLW07_S:							equ 0x800a6778
PLW08_W:							equ 0x800a6788
PLW08_S:							equ 0x800a67dc
PLW0E_W:							equ 0x800a67f0
PLW0E_S:							equ 0x800a6844
PLW0F_W:							equ 0x800a6848
PLW0F_S:							equ 0x800a689c
PLW12_W:							equ 0x800a68a4
PLW12_S:							equ 0x800a68f8
Pl_weapon_tbl:						equ 0x800a6900
pEnemy_damage_tbl:					equ 0x800a6ac8
Pl_bow_hit_parts:					equ 0x800a6b88
Plw_no:								equ 0x800a6d08
Pl_weapon_init:						equ 0x800a6d28
Pl_weapon_kyan:						equ 0x800a6d78
W_at_ck:							equ 0x800a6db4
Ghand_len:							equ 0x800a6dd0
Mw_ck:								equ 0x800a6e68
Pl_wep_mag_type:					equ 0x800a6e78
Pl_mag:								equ 0x800a6e90
G_rot_data_z:						equ 0x800a6ea8
pl_mv05_w_tbl:						equ 0x800a6f3c
Gun_jtg_bit:						equ 0x800a6f8c
pl_mv05_t2_init:					equ 0x800a6f94
pl_mv05_t2_spr:						equ 0x800a6fe0
pl_mv05_w0_tbl:						equ 0x800a702c
pl_mv05_w1_tbl:						equ 0x800a7048
Bow_Room509:						equ 0x800a7060
pl_mv05_w2_tbl:						equ 0x800a7068
pl_mv05_w3_tbl:						equ 0x800a7080
pl_mv05_w4_tbl:						equ 0x800a7098
pl_mv05_w5_tbl:						equ 0x800a70b0
Poly_test4:							equ 0x800a70c8
ascii_tbl_2:						equ 0x800a70e8
Rdt_tbl1:							equ 0x800a70fc
Rdt_tbl2:							equ 0x800a7138
Rdt_tbl3:							equ 0x800a7170
Rdt_tbl4:							equ 0x800a7190
Rdt_tbl5:							equ 0x800a71b8
Rdt_tbl6:							equ 0x800a71d0
Rdt_tbl7:							equ 0x800a7200
Rdt_tbl:							equ 0x800a7210
;;Subpl_walk:							equ 0x800a722c
;;Subpl_back:							equ 0x800a726c
;;Subpl_dir:							equ 0x800a72ac
;;Subpl_ato:							equ 0x800a72ec
;;Subpl_run:							equ 0x800a732c
;;Em4a_zobiparts_tbl:					equ 0x800a736c
Sca_rtn_tbl:						equ 0x800a737c
Sca_no_ck_tbl:						equ 0x800a73b4
Sce_at_jump_tbl:					equ 0x800a73c4
em_se_tbl:							equ 0x800a7400
Sce_jmp_tbl:						equ 0x800a74c8
Em_kind_tbl:						equ 0x800a7704
;;Subpl_walk:							equ 0x800a7778
;;Subpl_back:							equ 0x800a77b8
;;Subpl_dir:							equ 0x800a77f8
;;Subpl_ato:							equ 0x800a7838
;;Subpl_run:							equ 0x800a7878
;;Em4a_zobiparts_tbl:					equ 0x800a78b8
Flg_addr:							equ 0x800a78c8
;;Subpl_walk:							equ 0x800a7968
;;Subpl_back:							equ 0x800a79a8
;;Subpl_dir:							equ 0x800a79e8
;;Subpl_ato:							equ 0x800a7a28
;;Subpl_run:							equ 0x800a7a68
;;Em4a_zobiparts_tbl:					equ 0x800a7aa8
Itp_check_sum:						equ 0x800a7ab8
EnemSE_floc:						equ 0x800a7b1c
LRVT:								equ 0x800a7fb0
PANVT:								equ 0x800a8030
nroom:								equ 0x800a80b0
Core_edh:							equ 0x800a80b8
Core_vbd:							equ 0x800a80e8
Arms_edh:							equ 0x800a8118
Arms_vbd:							equ 0x800a8140
Main_bgm:							equ 0x800a8168
Sub_bgm:							equ 0x800a81e8
;;Subpl_walk:							equ 0x800a8268
;;Subpl_back:							equ 0x800a82a8
;;Subpl_dir:							equ 0x800a82e8
;;Subpl_ato:							equ 0x800a8328
;;Subpl_run:							equ 0x800a8368
;;Em4a_zobiparts_tbl:					equ 0x800a83a8
Spl_routine_0:						equ 0x800a83b8
Spl_mv:								equ 0x800a83dc
Spl_in:								equ 0x800a844c
Spl_dm:								equ 0x800a84bc
Spl_die:							equ 0x800a84cc
Spl_dead:							equ 0x800a84d0
;;Subpl_walk:							equ 0x800a84d4
;;Subpl_back:							equ 0x800a8514
;;Subpl_dir:							equ 0x800a8554
;;Subpl_ato:							equ 0x800a8594
;;Subpl_run:							equ 0x800a85d4
;;Em4a_zobiparts_tbl:					equ 0x800a8614
Spl_r_pos:							equ 0x800a8624
Aida_Move_type:						equ 0x800a863c
Aida_St_pos:						equ 0x800a8668
Spl_pos_ck_timer:					equ 0x800a8673
Aida_mv_br_type00:					equ 0x800a8674
Aida_mv_type00:						equ 0x800a86ac
Aida_mv_br_type01:					equ 0x800a86e4
Aida_mv_br_type02:					equ 0x800a871c
Aida_mv_br_type03:					equ 0x800a8754
Aida_mv_br_type04:					equ 0x800a878c
Aida_mv_br_type05:					equ 0x800a87c4
Aida_mv_br_type06:					equ 0x800a87fc
Aida_mv_br_type07:					equ 0x800a8834
Aida_mv_br_type08:					equ 0x800a886c
Aida_mv_br_type09:					equ 0x800a88a4
Aida_mv_br_type0a:					equ 0x800a88dc
E_A_at_tbl:							equ 0x800a8914
Aida_em_at00_pl:					equ 0x800a8944
Aida_em_at00_spl:					equ 0x800a8950
Aida_em_at01:						equ 0x800a895c
Aida_mv05_w1_br_tbl:				equ 0x800a8968
Aida_mv05_w1_tbl:					equ 0x800a8980
Aida_em_at05:						equ 0x800a8998
Sherry_Move_type:					equ 0x800a89a0
Sherry_St_pos:						equ 0x800a89cc
Sherry_mv_br_type00:				equ 0x800a89d8
Sherry_mv_br_type01:				equ 0x800a8a10
Sherry_mv_br_type02:				equ 0x800a8a48
Sherry_mv_br_type03:				equ 0x800a8a80
Sherry_mv_br_type04:				equ 0x800a8ab8
Sherry_mv_br_type05:				equ 0x800a8af0
Sherry_mv_br_type06:				equ 0x800a8b28
Sherry_mv_br_type07:				equ 0x800a8b60
Sherry_mv_br_type08:				equ 0x800a8b98
Sherry_mv_br_type09:				equ 0x800a8bd0
Sherry_mv_br_type0a:				equ 0x800a8c08
;;Subpl_walk:							equ 0x800a8c40
;;Subpl_back:							equ 0x800a8c80
;;Subpl_dir:							equ 0x800a8cc0
;;Subpl_ato:							equ 0x800a8d00
;;Subpl_run:							equ 0x800a8d40
;;Em4a_zobiparts_tbl:					equ 0x800a8d80
Spl_sce:							equ 0x800a8d90
;;Subpl_walk:							equ 0x800a8e14
;;Subpl_back:							equ 0x800a8e54
;;Subpl_dir:							equ 0x800a8e94
;;Subpl_ato:							equ 0x800a8ed4
;;Subpl_run:							equ 0x800a8f14
;;Em4a_zobiparts_tbl:					equ 0x800a8f54
Spl_sp:								equ 0x800a8f62
init_item_tbl_Leon:					equ 0x800a9264
init_item_tbl_Claire:				equ 0x800a9285
init_item_tbl_Hunk:					equ 0x800a92a6
init_item_tbl_ToFu:					equ 0x800a92c7
init_item_tbl_Leon_Ex:				equ 0x800a92e8
init_item_tbl_Claire_Ex:			equ 0x800a9309
init_item_tbl_Ada_Ex:				equ 0x800a932a
init_item_tbl_Chris_Ex:				equ 0x800a934b
Status_proc_tbl:					equ 0x800a936c
st_light:							equ 0x800a93a8
init_item_tbl_Ada:					equ 0x800a93d0
init_item_tbl_Sherry:				equ 0x800a93f1
maps_floc:							equ 0x800a9414
fits_floc:							equ 0x800a94b4
Status_menu0_proc_tbl:				equ 0x800a9aac
;;add:								equ 0x800a9ac4		;; St_menu0_file
File_offset:						equ 0x800a9ad0
map_up_floor:						equ 0x800a9aec
map_down_floor:						equ 0x800a9b04
Map_char_tbl:						equ 0x800a9b8c
Status_direct_map_proc_tbl0:		equ 0x800a9b94
Status_direct_map_proc_tbl1:		equ 0x800a9ba8
St_itembox_proc_tbl:				equ 0x800a9bb4
Ibox_char_tbl:						equ 0x800a9bc4
f4_tbl:								equ 0x800a9c28
Ibox_pos_tbl:						equ 0x800a9c38
St_getitem_proc_tbl:				equ 0x800a9c9c
move_tbl:							equ 0x800a9cb0
;;add:								equ 0x800a9cdc		;; St_get_file
Mix_nodata:							equ 0x800a9ce8
Mix_beretta:						equ 0x800a9cec
Mix_magnam:							equ 0x800a9cf4
Mix_shotgun:						equ 0x800a9cfc
Mix_machinegun:						equ 0x800a9d04
Mix_fire:							equ 0x800a9d08
Mix_bowgun:							equ 0x800a9d0c
Mix_g_n:							equ 0x800a9d10
Mix_g_f:							equ 0x800a9d1c
Mix_g_a:							equ 0x800a9d28
Mix_spark:							equ 0x800a9d34
Mix_bullet:							equ 0x800a9d38
Mix_dot380:							equ 0x800a9d50
Mix_shot_dan:						equ 0x800a9d58
Mix_arrow:							equ 0x800a9d64
Mix_mag_dan:						equ 0x800a9d6c
Mix_nen:							equ 0x800a9d78
Mix_battley:						equ 0x800a9d80
Mix_g_normal:						equ 0x800a9d88
Mix_g_fire:							equ 0x800a9d98
Mix_g_acid:							equ 0x800a9da8
Mix_ink_ribbon:						equ 0x800a9db8
Mix_parts_a:						equ 0x800a9dbc
Mix_parts_b:						equ 0x800a9dc0
Mix_parts_c:						equ 0x800a9dc4
Mix_g:								equ 0x800a9dd0
Mix_r:								equ 0x800a9de4
Mix_b:								equ 0x800a9dec
Mix_gr:								equ 0x800a9df8
Mix_gg:								equ 0x800a9dfc
Mix_gb:								equ 0x800a9e04
Mix_p_bomb:							equ 0x800a9e0c
Mix_fuse:							equ 0x800a9e10
Mix_Jaguar_a:						equ 0x800a9e14
Mix_Jaguar_b:						equ 0x800a9e18
Item_data_tbl:						equ 0x800a9e1c
File_data:							equ 0x800aa144
Map_stage1_0:						equ 0x800aa1a8
Map_stage1_1:						equ 0x800aa228
Map_stage1_2:						equ 0x800aa268
Map_stage1_3:						equ 0x800aa358
Map_stage2_0:						equ 0x800aa388
Map_stage2_1:						equ 0x800aa4a8
Map_stage3_0:						equ 0x800aa558
Map_stage4_0:						equ 0x800aa608
Map_stage4_1:						equ 0x800aa668
Map_stage5_0:						equ 0x800aa738
Map_stage5_1:						equ 0x800aa778
Map_stage5_2:						equ 0x800aa7a8
Map_stage5_3:						equ 0x800aa7d8
Map_stage6_0:						equ 0x800aa7f8
Map_stage6_1:						equ 0x800aa858
Map_stage6_2:						equ 0x800aa868
Map_stage6_3:						equ 0x800aa878
Map_stage6_4:						equ 0x800aa948
Map_stage6_5:						equ 0x800aa988
Map_stage7_0:						equ 0x800aa9b8
Map_stage7_1:						equ 0x800aaa18
Map_info:							equ 0x800aaa38
Ecg_normal_tbl:						equ 0x800aaad8
Ecg_caution0_tbl:					equ 0x800aab78
Ecg_caution1_tbl:					equ 0x800aac18
Ecg_danger_tbl:						equ 0x800aacb8
Ecg_poison_tbl:						equ 0x800aad58
N_pos:								equ 0x800aadf8
Cursol0_char_tbl:					equ 0x800aae40
Cursol0_pos_tbl:					equ 0x800aae4c
Cursol1_char_tbl:					equ 0x800aae70
Cursol1_pos_tbl:					equ 0x800aae7c
Face_char_tbl:						equ 0x800aaea0
Face_subchar_tbl:					equ 0x800aaed4
Face_pos_tbl:						equ 0x800aaefc
Face_subpos_tbl:					equ 0x800aaf30
Message_char_tbl:					equ 0x800aaf58
Message_pos_tbl:					equ 0x800aaf9c
Frame_char_tbl:						equ 0x800aafe0
Frame_pos_tbl:						equ 0x800ab024
Menu0_char_tbl:						equ 0x800ab068
Menu0_pos_tbl:						equ 0x800ab088
Menu1_char_tbl:						equ 0x800ab0a8
Menu1_pos_tbl:						equ 0x800ab0cc
Itemlist_char_tbl:					equ 0x800ab0f0
Itemlist_pos_tbl:					equ 0x800ab10c
Equip_char_tbl:						equ 0x800ab128
Equip_pos_tbl:						equ 0x800ab144
Ecg_col_tbl:						equ 0x800ab160
Ecg_line_tbl:						equ 0x800ab180
ECG_char_tbl:						equ 0x800ab194
Itemget_char:						equ 0x800ab19c
Itemget_pos_tbl:					equ 0x800ab1bc
v_p:								equ 0x800ab1dc
v_r:								equ 0x800ab1e8
pp:									equ 0x800ab1f4
pMem_man:							equ 0x800ab204
;;Svec:								equ 0x800ab208		;; Rot_vector
;;Svec:								equ 0x800ab210		;; Rot_vector_super
Poly_ft4_count:						equ 0x800ab218
_spu_RXX:							equ 0x800ab21c
_spu_tsa:							equ 0x800ab234
_spu_transMode:						equ 0x800ab238
_spu_mem_mode_plus:					equ 0x800ab244
_spu_mem_mode_unitM:				equ 0x800ab24c
_spu_inTransfer:					equ 0x800ab250
_spu_transferCallback:				equ 0x800ab254
_spu_IRQCallback:					equ 0x800ab258
_spu_EVdma:							equ 0x800ab280
_spu_keystat:						equ 0x800ab284
_spu_trans_mode:					equ 0x800ab288
_spu_rev_flag:						equ 0x800ab28c
_spu_rev_reserve_wa:				equ 0x800ab290
_spu_rev_offsetaddr:				equ 0x800ab294
_spu_rev_attr:						equ 0x800ab29c
_spu_RQvoice:						equ 0x800ab2ac
_spu_RQmask:						equ 0x800ab2b0
_spu_zerobuf:						equ 0x800ab2e4
_spu_env:							equ 0x800ab6e4
_spu_isCalled:						equ 0x800ab6e8
_spu_AllocBlockNum:					equ 0x800ab6ec
_spu_AllocLastNum:					equ 0x800ab6f0
_spu_memList:						equ 0x800ab6f4
_spu_rev_startaddr:					equ 0x800ab6f8
_snd_seq_tick_env:					equ 0x800aba28
;;rsin_tbl:							equ 0x800abb48		;; rcos
_stacksize:							equ 0x800abbcc
;;rsin_tbl:							equ 0x800ac348		;; sin_1
;;rsin_tbl:							equ 0x800acb48		;; rcos
Vcount:								equ 0x800acd00
GsCLIP3near:						equ 0x800acd30
GsCLIP3far:							equ 0x800acd30
GsOUT_PACKET_P:						equ 0x800acd30
CD_cbsync:							equ 0x800acdec
CD_cbready:							equ 0x800acdf0
CD_debug:							equ 0x800acdf8
CD_status:							equ 0x800acdfc
CD_pos:								equ 0x800ace08
CD_mode:							equ 0x800ace0c
CD_com:								equ 0x800ace0d
DS_active:							equ 0x800ace10
CD_comstr:							equ 0x800ace14
CD_intstr:							equ 0x800ace94
CDROM_DELAY:						equ 0x800ad0e8
CDROM_REG0:							equ 0x800ad14c
CDROM_REG1:							equ 0x800ad150
CDROM_REG2:							equ 0x800ad154
CDROM_REG3:							equ 0x800ad158
;;CDROM_DELAY:						equ 0x800ad15c
COMMON_DELAY:						equ 0x800ad160
DMA_DPCR:							equ 0x800ad164
DMA_DICR:							equ 0x800ad168
DMA_MDEC_OUT_CHCR:					equ 0x800ad16c
DMA_CDROM_CHCR:						equ 0x800ad17c
;;rsin_tbl:							equ 0x800ad348		;; rcos, sin_1
SQRT:								equ 0x800adb8c
rcossin_tbl:						equ 0x800adeac
ratan_tbl:							equ 0x800b1eac
GPU_printf:							equ 0x800b26fc
DecDctEnv:							equ 0x800b2824
DCL_DVLC:							equ 0x800b296c
DCC_DVLC:							equ 0x800b2d6c
CF_DVLC:							equ 0x800b316c
CF2_DVLC:							equ 0x800c316c
_padFuncNextPort:					equ 0x800c399c
_padFuncClrInfo:					equ 0x800c39a0
_padFuncGetTxd:						equ 0x800c39a4
_padFuncCurrLimit:					equ 0x800c39a8
_padFuncPtr2Port:					equ 0x800c39ac
_padFuncPort2Info:					equ 0x800c39b0
_padFuncSendAuto:					equ 0x800c39b4
_padFuncChkEng:						equ 0x800c39b8
_padFuncRecvAuto:					equ 0x800c39bc
_padFuncClrCmdNo:					equ 0x800c39c0
_padInfoDir:						equ 0x800c39d0
_padIntExec:						equ 0x800c39d4
_padSioChan:						equ 0x800c39dc
_padSioState:						equ 0x800c39e0
_padTotalCurr:						equ 0x800c39e4
_padModeMtap:						equ 0x800c39e8
_padChanStart:						equ 0x800c39ec
_padChanStop:						equ 0x800c39f0
_padFixResult:						equ 0x800c39f4
_padCalledIntPad:					equ 0x800c3a04
;;__sbss_obj:							equ 0x800c3a48
pDoor:								equ 0x800c3a80
Stop_bak:							equ 0x800c3a88
V:									equ 0x800c3a8c
Kpos:								equ 0x800c3a9c
Kofs:								equ 0x800c3ab0
pPc:								equ 0x800c3ab8
;;Hit_flg:							equ 0x800c3b68		;; Sca_ck_hit
pSca_data:							equ 0x800c3b6c
Old_x:								equ 0x800c3b70
Old_z:								equ 0x800c3b74
;;Hit_flg:							equ 0x800c3b78		;; Sca_ck_hit_om
Gnd_y:								equ 0x800c3b7c
In_flg:								equ 0x800c3b80
Tmp_Sca:							equ 0x800c3b84
Key_work:							equ 0x800c3b98
Dir_spd:							equ 0x800c3b9c
Spd_add:							equ 0x800c3ba0
pOwork:								equ 0x800c3ba4
Key_work_0:							equ 0x800c3ba8
pItem_dat:							equ 0x800c3bac
pAot:								equ 0x800c3bb0
EM40_Prim:							equ 0x800c3bb8
shot:								equ 0x800c3bd0
num:								equ 0x800c3bd8
Tmp_matrix:							equ 0x800c3be0
;;Svec:								equ 0x800c3c20		;; Set_front_pos
pStack_bak:							equ 0x800c3c28
_padVsyncParam:						equ 0x800c40a8
_padRestPeriod:						equ 0x800c40b8
;;_padIntExec:						equ 0x800c40bc		;; copy of _padIntExec
Poly2_work: 						equ 0x800c4348
add_y: 								equ 0x800c4408
Reverb_flg: 						equ 0x800c4410
Trans: 								equ 0x800c4418
PadActData: 						equ 0x800cbc20
Stframe_no: 						equ 0x800cbc24
Sedir2: 							equ 0x800cbc30
SsFCALL: 							equ 0x800cbc38
m_pl_weapon_tmd: 					equ 0x800cc1e0
G: 									equ 0x800cc1e8
Vab_id: 							equ 0x800d4c48
_svm_rattr: 						equ 0x800d4c50
Stsector_offset: 					equ 0x800d4c64
StRgb24: 							equ 0x800d4c68
StMode: 							equ 0x800d4c6c
Em_dir: 							equ 0x800d4c70
Cd_vol: 							equ 0x800d4c78
Se_pri: 							equ 0x800d4ca0
Move_x: 							equ 0x800d4cd0
pEspdt: 							equ 0x800d4cd8
pDwork: 							equ 0x800d4dd8
bk_cut: 							equ 0x800d4e00
pEspmv: 							equ 0x800d4e18
sel_no: 							equ 0x800d4f18
Entory: 							equ 0x800d4f20
StFunc1: 							equ 0x800d5218
StFunc2: 							equ 0x800d521c
_svm_vab_pg: 						equ 0x800d5228
StCdIntrFlag: 						equ 0x800d5268
;;_svm_vab_pg: 						equ 0x800d5268
_svm_vab_vh: 						equ 0x800d5270
_svm_damper: 						equ 0x800d52b0
;;_svm_vab_vh: 						equ 0x800d52b0
_svm_vab_tn: 						equ 0x800d52b8
;;_svm_vab_tn: 						equ 0x800d52f8
CD: 								equ 0x800d5300
Channel: 							equ 0x800d5b80
_spu_RQ: 							equ 0x800d5b88
Mem_man: 							equ 0x800d5ba0
m_pl_w00_tmd2: 						equ 0x800d5be0
Ceiling: 							equ 0x800d5be4
pSce_em: 							equ 0x800d5be8
St: 								equ 0x800d5bf0
StCHANNEL: 							equ 0x800d6c38
StStartFrame: 						equ 0x800d6c3c
_svm_stereo_mono: 					equ 0x800d6c40
Cc_work: 							equ 0x800d6c48
Pan_vol: 							equ 0x800d7598
pVh_tbl: 							equ 0x800d75a0
Seq_ctr: 							equ 0x800d75c0
Vm_disp: 							equ 0x800d75d8
Om_fall_old_dir_x: 					equ 0x800d7638
pVm_frm: 							equ 0x800d763c
Om_fall_old_dir_z: 					equ 0x800d7642
pSpl_near_em: 						equ 0x800d7648
UnknownPadInfoByte: 				equ 0x800d7654
_snd_ev_flag: 						equ 0x800d7658
Rev_vol: 							equ 0x800d765c
gpPl_pac_ptr: 						equ 0x800d7660
kMaxPrograms: 						equ 0x800d7664
CdReadSoundCnt: 					equ 0x800d7668
sw: 								equ 0x800d766c
Vm_work: 							equ 0x800d7670
pStairs: 							equ 0x800d7694
Ev0: 								equ 0x800d7698
Monitor: 							equ 0x800d76a0
Ev1: 								equ 0x800d7828
Ev2: 								equ 0x800d782c
Ev3: 								equ 0x800d7830
xx: 								equ 0x800d7834
_svm_pg: 							equ 0x800d7838
UnkSndSysInitSubFlg: 				equ 0x800d783c
yy: 								equ 0x800d783e
gpPl_tmd_ptr: 						equ 0x800d7840
_svm_vg: 							equ 0x800d7844
_svm_vh: 							equ 0x800d7848
_svm_tn: 							equ 0x800d784c
CChannel: 							equ 0x800d7850
_SsVmMaxVoice: 						equ 0x800d7854
Bgm: 								equ 0x800d7856
gpPl_pac2_ptr: 						equ 0x800d7858
UnkMvPadFlg: 						equ 0x800d785c
Sce: 								equ 0x800d7860
Ev10: 								equ 0x800d8cd4
Loc: 								equ 0x800d8cd8
Ev11: 								equ 0x800d8cdc
Ev13: 								equ 0x800d8ce0
RevD_vol: 							equ 0x800d8ce4
m_pl_weapon_parts: 					equ 0x800d8ce8
gpPl_tmd2_ptr: 						equ 0x800d8cec
Esp: 								equ 0x800d8cf0
pEdt_adr: 							equ 0x800dbb70
UnkSndFlg0: 						equ 0x800dbb88
UnkSndSysFlg0: 						equ 0x800dbb8c
StFinalSector: 						equ 0x800dbb90
Poly_eff: 							equ 0x800dbb98
Om_fall_dir_x: 						equ 0x800dcb98
Main_vol: 							equ 0x800dcb9c
Om_fall_dir_y: 						equ 0x800dcba0
Om_fall_dir_z: 						equ 0x800dcba2
f_x: 								equ 0x800dcba4
f_y: 								equ 0x800dcba6
GsWSMATRIX: 						equ 0x800dcba8
Ground_in_flg: 						equ 0x800dcbc8
bk_light: 							equ 0x800dcbcc
pESP: 								equ 0x800dcbd0
_snd_openflag: 						equ 0x800dcbd4
_autopan: 							equ 0x800dcbd8
Ex_battle_rcut: 					equ 0x800dcbe0
_svm_cur: 							equ 0x800dcc31
Ex_battle_vcut: 					equ 0x800dcc50
_svm_vab_used: 						equ 0x800dcc68
Poly_eff2: 							equ 0x800dce30
_autovol: 							equ 0x800df330
m_pl_weapon_packet: 				equ 0x800df334
pMovie_result: 						equ 0x800df338
StEmu_Idx: 							equ 0x800df33c
Fade_mode: 							equ 0x800df340
Game: 								equ 0x800df348
Demo: 								equ 0x800df390
Key_idx_bak: 						equ 0x800dfad6
UnknownSetRoomByte: 				equ 0x800dfad7
Em_l: 								equ 0x800dfad8
_svm_auto_kof_mode: 				equ 0x800dfade
Main: 								equ 0x800dfae0
pBgm: 								equ 0x800dfd64
Line: 								equ 0x800dfd68
UnknownPadSetFlag: 					equ 0x800e2a80
Ret_Value: 							equ 0x800e2a88
GsMWSMATRIX: 						equ 0x800e2a90
Moji: 								equ 0x800e2ab0
Moji_buff: 							equ 0x800e8438
_svm_envx_ptr: 						equ 0x800e8764
Volume_Se: 							equ 0x800e8768
Seq_table: 							equ 0x800e8770
pAtv: 								equ 0x800e8980
_que: 								equ 0x800e8998
Ceiling_in_pos: 					equ 0x800ea198
VBLANK_MINUS: 						equ 0x800ea228
StRingIdx1: 						equ 0x800ea22c
StRingIdx2: 						equ 0x800ea230
StRingIdx3: 						equ 0x800ea234
pCom_work: 							equ 0x800ea23c
pPsp_prim: 							equ 0x800ea240
m_pl_w00_packet: 					equ 0x800ea248
_ss_score: 							equ 0x800ea250
_SsMarkCallback: 					equ 0x800ea2d0
pPsp_work: 							equ 0x800eaad0
_snd_seq_s_max: 					equ 0x800ead72
StEmu_Addr: 						equ 0x800ead74
_snd_seq_t_max: 					equ 0x800ead78
StEndFrame: 						equ 0x800ead7c
StSTART_FLAG: 						equ 0x800ead90
pCAot: 								equ 0x800ead94
StRingBase: 						equ 0x800ead98
StRingAddr: 						equ 0x800ead9c
_svm_vab_total: 					equ 0x800eada0
Old_Fatari: 						equ 0x800eade0
MainVbSize: 						equ 0x800eade4
_svm_vab_count: 					equ 0x800eade8
_svm_vab_start: 					equ 0x800eadf0
Old_Uatari: 						equ 0x800eae30
pFile: 								equ 0x800eae34
m_pl_w00_packet2: 					equ 0x800eae38
Volume_Bgm: 						equ 0x800eae3c
RoomVbSize: 						equ 0x800eae40
Espid: 								equ 0x800eae48
_svm_envx_hist: 					equ 0x800eae5c
Sedir: 								equ 0x800eae98
StRingSize: 						equ 0x800eae9c
_svm_okof1: 						equ 0x800eaea0
_svm_okof2: 						equ 0x800eaea2


;;
;;	Custom Data
;;
BuildDate:							equ 0x80010000		;; CHAR[16]		Build Date (written after assembly)
CdxLbaBin:							equ 0x80010010		;; ULONG		pDiscTable (BIN)
CdxLbaBss:							equ 0x80010014		;; ULONG		pDiscTable (BSS)
CdxLbaDat:							equ 0x80010018		;; ULONG		pDiscTable (DATA)
CdxLbaDo2:							equ 0x8001001C		;; ULONG		pDiscTable (DOOR)
CdxLbaEmd0:							equ 0x80010020		;; ULONG		pDiscTable (CDEMD0)
CdxLbaEmd1:							equ 0x80010024		;; ULONG		pDiscTable (CDEMD1)
CdxLbaPld:							equ 0x80010028		;; ULONG		pDiscTable (PLD)
CdxLbaPlw:							equ 0x8001002C		;; ULONG		pDiscTable (PLW)
CdxLbaSndArms:						equ 0x80010030		;; ULONG		pDiscTable (SNDARMS)
CdxLbaSndCore:						equ 0x80010034		;; ULONG		pDiscTable (SNDCORE)
CdxLbaSndEmd:						equ 0x80010038		;; ULONG		pDiscTable (SNDEMD)
CdxLbaSndMain:						equ 0x8001003C		;; ULONG		pDiscTable (SNDMAIN)
CdxLbaSndSub:						equ 0x80010040		;; ULONG		pDiscTable (SNDSUB)
CdxLbaRdt:							equ 0x80010044		;; ULONG		pDiscTable (RDT)
CdxLbaXa:							equ 0x80010048		;; ULONG		pDiscTable (XA)
CdxLbaStr:							equ 0x8001004C		;; ULONG		pDiscTable (STR)

SysDisk:							equ	0x80010050
SysScenario:						equ 0x80010051
SysController:						equ	0x80010052
SysLanguage:						equ 0x80010053

DebugFlag:							equ 0x80010054
DebugValue:							equ 0x80010058
CdReadMode:							equ 0x8001005C

ItoxBuffer:							equ 0x800107C0


;;
;;	CDX Function
;;
CdReadEx:							equ 0x80013038
SetDisk:							equ 0x800A70FC
LoadPlwTable:						equ 0x8009CEB8
