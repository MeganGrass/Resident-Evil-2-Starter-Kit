
#include "DATA.H"

#include "FLAG.H"

#include "PRINT.H"

extern "C" {

	/*
	*	0x800107c0		__rdata_org
	*	0x800128c4		__rdata_orgend
	*	0x800128c4		__text_org
	*	0x800988a4		__text_orgend
	*	0x800988a4		__sdata_org, __sdata_orgend
	*	0x800988a4		__data_org
	*	0x800c3a80		__data_orgend
	*	0x800c3a80		__sbss_org, __sbss_orgend
	*	0x800c3a80		__bss_org
	*	0x800eaea8		__bss_orgend
	*/

	extern tagEDT_TABLE_WORK Enemy_edt;					// 0x801f8e10

	/*
	*	rdata
	*/
	extern SHORT Xa_no[10];								// 0x80010818


	/*
	*	data
	*/
	extern tagfpos floc[859];							// 0x800988a4
	extern SHORT Xa_sector00[16][3];					// 0x8009a37c
	extern CHAR Serial_no[44];							// 0x8009a3e0	// unused
	extern UCHAR cdmode;								// 0x8009a414
	extern UCHAR xa_cdmode;								// 0x8009a415
	extern ULONG(*xa_control_tbl)[4];					// 0x8009a418
	extern UCHAR xacontrol_cdmode;						// 0x8009a428
	extern UCHAR cdread_cdmode;							// 0x8009a429
	extern UCHAR cdread_s_cdmode;						// 0x8009a42a
	extern UCHAR door_msg[60];							// 0x8009a42c
	extern USHORT door_msg_ptr[60];						// 0x8009a468
	extern MATRIX D_LIGHTMATRIX;						// 0x8009a470
	extern MATRIX D_COLORMATRIX;						// 0x8009a490
	extern USHORT Dtex_file[55];						// 0x8009a4b0	// DO2 file code numbers, no longer used
	extern DOOR_INFO Dinfo[55];							// 0x8009a520
	extern ULONG(*pDoor_proc_tbl)[4];					// 0x8009a7b4
	extern JH_TBL Aida_jh0_tbl[73];						// 0x8009a7c4
	extern JH_HEAD Aida_jh0_head;						// 0x8009a8e8
	extern JH_TBL Aida_jh1_tbl[23];						// 0x8009a920
	extern JH_HEAD Aida_jh1_head;						// 0x8009a97c
	extern JH_TBL Aida_jh2_tbl[23];						// 0x8009a9b4
	extern JH_HEAD Aida_jh2_head;						// 0x8009aa10
	extern JH_TBL Aida_jh3_tbl[4];						// 0x8009aa48
	extern JH_HEAD Aida_jh3_head;						// 0x8009aa58
	extern JH_TBL Aida_jh4_tbl[18];						// 0x8009aa90
	extern JH_HEAD Aida_jh4_head;						// 0x8009aad8
	extern JH_TBL Aida_jh5_tbl[18];						// 0x8009ab10
	extern JH_HEAD Aida_jh5_head;						// 0x8009aad8
	extern JH_TBL Kg_jh0_tbl[52];						// 0x8009ab90
	extern JH_HEAD Kg_jh0_head;							// 0x8009ac60
	//extern JH_TBL [73];						// 0x8009ac98	// used for PL0A
	//extern JH_HEAD ;							// 0x8009adbc	// used for PL0A
	extern DATA_POS cdemd0_pos[300];					// 0x8009adf4
	extern UCHAR cdemd0_sum[300];						// 0x8009b754
	extern DATA_POS cdemd1_pos[300];					// 0x8009b880	// relocated to 0x8009B754
	extern UCHAR cdemd1_sum[300];						// 0x8009c1e0
	extern DATA_POS cdemd2_pos[300];					// 0x8009c30c	// unused
	extern UCHAR cdemd2_sum[300];						// 0x8009cc6c	// unused
	extern DATA_POS cdemd3_pos[300];					// 0x8009cd98	// unused
	extern UCHAR cdemd3_sum[300];						// 0x8009d358	// unused
	extern CHAR Emd_name[52];							// 0x8009d410	// unused
	extern CHAR Emd_tim_name[52];						// 0x8009d444	// unused
	extern ROOM_ENEMY_TBL Room_100[2];					// 0x8009d478
	extern ROOM_ENEMY_TBL Room_102;						// 0x8009d498
	extern ROOM_ENEMY_TBL Room_101;						// 0x8009d4a8
	extern ROOM_ENEMY_TBL Room_202;						// 0x8009d4b8
	extern ROOM_ENEMY_TBL Room_109;						// 0x8009d4c8
	extern ROOM_ENEMY_TBL Room_10B;						// 0x8009d4d8
	extern ROOM_ENEMY_TBL Room_110[4];					// 0x8009d4e8
	extern ROOM_ENEMY_TBL Room_117[7];					// 0x8009d528
	extern ROOM_ENEMY_TBL Room_700[2];					// 0x8009d598
	extern ROOM_ENEMY_TBL Room_702[2];					// 0x8009d5b8
	extern ROOM_ENEMY_TBL Room_703[2];					// 0x8009d5d8
	extern ROOM_ENEMY_TBL Room_705[5];					// 0x8009d5f8
	extern SET_EM_JMP Em_stbl_st1[28];					// 0x8009d648
	extern SET_EM_JMP Em_stbl_st2[30];					// 0x8009d728
	extern SET_EM_JMP Em_stbl_st7[6];					// 0x8009d818
	extern SET_EM_JMP* Room_Enemy_tbl[8];				// 0x8009d848	// unused
	extern ULONG(*Esp_tblj)[96];						// 0x8009d868
	extern CHAR sin_tbl[256];							// 0x8009d9f4
	extern UCHAR quake_tbl1[32];						// 0x8009daf4
	extern UCHAR quake_tbl2[32];						// 0x8009db14
	extern LONG sinpuku;								// 0x8009db34
	extern LONG hacho;									// 0x8009db38
	extern LONG speed;									// 0x8009db3C
	extern LONG mode;									// 0x8009db40
	extern MATRIX GsIDMATRIX;							// 0x8009db44
	extern MATRIX LIGHTMATRIX;							// 0x8009db64
	extern MATRIX COLORMATRIX;							// 0x8009db84
	extern UCHAR Bgm_sw_timer;							// 0x8009dba2
	extern UCHAR No_death_timer;						// 0x8009dba3
	extern TILE Curtain[2][2];							// 0x8009dbac
	extern TILE Pause[2];								// 0x8009dbac
	extern LONG Scrl_h;									// 0x8009dc0c
	extern RECT Rect;									// 0x8009dc10
	extern RECT Rect_bg;								// 0x8009dc20
	extern SHORT Bomb_tbl[2][30];						// 0x8009dc28
	extern UCHAR Mizu_size_tbl[15][2];					// 0x8009dca0
	extern UCHAR Mizu_tbl[15];							// 0x8009dcc0
	extern USHORT Mizu_struct_tbl[125];					// 0x8009dcd0
	extern UCHAR Div_prim_coord[13][8];					// 0x8009ddcc
	extern UCHAR msg_space[264];						// 0x8009de34
	extern UCHAR namelist_tbl_data[1276];				// 0x8009df3c
	extern USHORT namelist_tbl_ofs[140];				// 0x8009e438
	extern UCHAR namelist_u_data[1628];					// 0x8009e550
	extern USHORT namelist_u_ofs[140];					// 0x8009ebac
	extern UCHAR mess_tbl_data[728];					// 0x8009ecc4
	extern USHORT mess_tbl_ofs[24];						// 0x8009ef9c
	extern UCHAR mess_u_data[924];						// 0x8009efcc
	extern USHORT mess_u_ofs[24];						// 0x8009f368
	extern UCHAR mess_sub_data[4828];					// 0x8009f398
	extern USHORT mess_sub_ofs[116];					// 0x800a0674
	extern UCHAR mess_etc_data[5920];					// 0x800a075c
	extern USHORT mess_etc_ofs[116];					// 0x800a1e7c
	extern UCHAR branch_data[220];						// 0x800a1f64
	extern USHORT branch_ofs[42];						// 0x800a2040
	extern CHAR ascii_tbl[2][17];						// 0x800a2094
	extern LOADTASK Ld_task_tbl[15];					// 0x800a20b8
	extern MOVIE_TBL Movie_tbl[18];						// 0x800a216c
	extern ULONG(*pMovie_proc_tbl)[5];					// 0x800a23ac
	extern ULONG(*pDoor_proc_tbl_ex)[5];				// 0x800a242c
	//extern UCHAR Subpl_walk[32][2];						// 0x800a2444
	//extern UCHAR Subpl_back[32][2];						// 0x800a2484
	//extern UCHAR Subpl_dir[32][2];						// 0x800a24c4
	//extern UCHAR Subpl_ato[32][2];						// 0x800a2504
	//extern UCHAR Subpl_run[32][2];						// 0x800a2544
	//extern UCHAR Em4a_zobiparts_tbl[7][2];				// 0x800a2584
	extern USHORT Up_add_tbl[20];						// 0x800a2594
	extern USHORT Down_add_tbl[20];						// 0x800a25bc
	extern SHORT Box_sub_tbl[20];						// 0x800a25e4
	extern USHORT Up_add_Spl_tbl[32];					// 0x800a260c
	extern USHORT Down_add_Spl_tbl[32];					// 0x800a264c
	extern USHORT Key_type[3][16];						// 0x800a26a0
	extern INT Stp_bak;									// 0x800a2700
	extern UCHAR Key_wait;								// 0x800a2704
	extern SP_WORK Init_work_tbl[364];					// 0x800a2708
	extern UCHAR pc_mes_data[160];						// 0x800a3dc8
	extern USHORT pc_mes_ofs[10];						// 0x800a3e68
	//extern ULONG Kend;									// 0x800a3e7c	// Computer, Stage 2 Room 00
	//extern ULONG Mend;									// 0x800a3e80	// Computer, Stage 2 Room 00
	//extern UCHAR Key_type;								// 0x800a3e84	// Computer, Stage 2 Room 00
	//extern ULONG Kend;									// 0x800a3e88	// Computer, Stage 6 Room 13
	//extern ULONG Mend;									// 0x800a3e8c	// Computer, Stage 6 Room 13
	//extern UCHAR Key_type;								// 0x800a3e90	// Computer, Stage 6 Room 13
	//extern UCHAR Subpl_walk[32][2];						// 0x800a3e94
	//extern UCHAR Subpl_back[32][2];						// 0x800a3ed4
	//extern UCHAR Subpl_dir[32][2];						// 0x800a3f14
	//extern UCHAR Subpl_ato[32][2];						// 0x800a3f54
	//extern UCHAR Subpl_run[32][2];						// 0x800a3f94
	//extern UCHAR Em4a_zobiparts_tbl[7][2];				// 0x800a3fd4
	extern USHORT Pld_no[16];							// 0x800a3fe4	// PLD file code numbers, no longer used
	extern UCHAR Pl_neck_timer;							// 0x800a4004
	extern CHAR Pld_name[40];							// 0x800a4008	// unused
	extern ULONG(*Pl_routine)[9];						// 0x800a4030
	extern ULONG(*Pl_mv_pad)[12];						// 0x800a4054	// relocated to 0x80010080, now ULONG(*Pl_mv_pad)[16]
	extern ULONG(*Pl_mv)[12];							// 0x800a4084	// relocated to 0x800100C0, now ULONG(*Pl_mv)[16]
	extern VECTOR Pl_kage_pos;							// 0x800a40b4
	extern VECTOR pl_water;								// 0x800a40c4	// unused
	extern VECTOR Wat_vec00;							// 0x800a40d4	// unused
	extern ULONG(*Pl_dm)[6];							// 0x800a40e4
	extern ULONG(*Pl_die_t)[1];							// 0x800a40fc
	extern ATTACK_WEAPON_EM Em10_damage_tbl[19];		// 0x800a412c
	extern ATTACK_WEAPON_EM Em15_damage_tbl[19];		// 0x800a42a8
	extern ATTACK_WEAPON_EM Em20_damage_tbl[19];		// 0x800a4424
	extern ATTACK_WEAPON_EM Em21_damage_tbl[19];		// 0x800a45a0
	extern ATTACK_WEAPON_EM Em22_damage_tbl[19];		// 0x800a471c
	extern ATTACK_WEAPON_EM Em24_damage_tbl[19];		// 0x800a4898
	extern ATTACK_WEAPON_EM Em23_damage_tbl[19];		// 0x800a4a14
	extern ATTACK_WEAPON_EM Em25_damage_tbl[19];		// 0x800a4b90
	extern ATTACK_WEAPON_EM Em27_damage_tbl[19];		// 0x800a4d0c
	extern ATTACK_WEAPON_EM Em28_damage_tbl[19];		// 0x800a4e88
	extern ATTACK_WEAPON_EM Em29_damage_tbl[19];		// 0x800a5004
	extern ATTACK_WEAPON_EM Em2d_damage_tbl[19];		// 0x800a5180
	extern ATTACK_WEAPON_EM Em2a_damage_tbl[19];		// 0x800a52fc
	extern ATTACK_WEAPON_EM Em2b_damage_tbl[19];		// 0x800a5478
	extern ATTACK_WEAPON_EM Em2e_damage_tbl[19];		// 0x800a55f4
	extern ATTACK_WEAPON_EM Em30_damage_tbl[19];		// 0x800a5770
	extern ATTACK_WEAPON_EM Em31_damage_tbl[19];		// 0x800a58ec
	extern ATTACK_WEAPON_EM Em33_damage_tbl[19];		// 0x800a5a68
	extern ATTACK_WEAPON_EM Em34_damage_tbl0[19];		// 0x800a5be4
	extern ATTACK_WEAPON_EM Em34_damage_tbl1[19];		// 0x800a5d60	// unused, probably for PL1
	extern ATTACK_WEAPON_EM Em36_damage_tbl[19];		// 0x800a5edc
	extern ATTACK_WEAPON_EM Em3a_damage_tbl[19];		// 0x800a6058
	extern ATTACK_WEAPON_EM Em3b_damage_tbl[19];		// 0x800a61d4
	extern ATTACK_WORK3 PLW00_W[3];						// 0x800a6350
	extern ATTACK_SEQ PLW00_S[2];						// 0x800a63a4
	extern ATTACK_WORK3 Pl_w011[5];						// 0x800a63a8
	extern ATTACK_SEQ Pl_w01_s1[8];						// 0x800a6434
	extern ATTACK_WORK3 Pl_w0111[5];					// 0x800a6444	// unused, probably for PL1
	extern ATTACK_SEQ Pl_w0111_s1[8];					// 0x800a64d0	// unused, probably for PL1
	extern ATTACK_WORK3 Pl_w010[5];						// 0x800a64e0
	extern ATTACK_SEQ Pl_w01_s0[8];						// 0x800a656c
	extern ATTACK_WORK3 Pl_w012[5];						// 0x800a657c
	extern ATTACK_SEQ Pl_w01_s2[8];						// 0x800a6608
	extern ATTACK_WORK3 PLW02_W[3];						// 0x800a6618
	extern ATTACK_SEQ PLW02_S[2];						// 0x800a666c
	extern ATTACK_WORK3 PLW05_W[3];						// 0x800a6670
	extern ATTACK_SEQ PLW05_S[2];						// 0x800a66c4
	extern ATTACK_WORK3 PLW13_W[3];						// 0x800a66c8
	extern ATTACK_SEQ PLW13_S[4];						// 0x800a671c
	extern ATTACK_WORK3 PLW07_W[3];						// 0x800a6724
	extern ATTACK_SEQ PLW07_S[8];						// 0x800a6778
	extern ATTACK_WORK3 PLW08_W[3];						// 0x800a6788
	extern ATTACK_SEQ PLW08_S[10];						// 0x800a67dc
	extern ATTACK_WORK3 PLW0E_W[3];						// 0x800a67f0
	extern ATTACK_SEQ PLW0E_S[2];						// 0x800a6844
	extern ATTACK_WORK3 PLW0F_W[3];						// 0x800a6848
	extern ATTACK_SEQ PLW0F_S[4];						// 0x800a689c
	extern ATTACK_WORK3 PLW12_W[3];						// 0x800a68a4
	extern ATTACK_SEQ PLW12_S[4];						// 0x800a68f8
	extern ATTACK_WEAPON_TBL Pl_weapon_tbl[19][3];		// 0x800a6900
	extern ATTACK_WEAPON_EM* pEnemy_damage_tbl[48];		// 0x800a6ac8
	extern BOW_HIT_PARTS Pl_bow_hit_parts[48];			// 0x800a6b88
	extern USHORT Plw_no[16];							// 0x800a6d08	// PLW file code numbers, no longer used
	extern ULONG(*Pl_weapon_init)[20];					// 0x800a6d28
	extern UCHAR Pl_weapon_kyan[19][3];					// 0x800a6d78
	extern UCHAR W_at_ck[3][9];							// 0x800a6db4
	extern SHORT Ghand_len[19][4];						// 0x800a6dd0
	extern CHAR Mw_ck[16];								// 0x800a6e68
	extern UCHAR Pl_wep_mag_type[24];					// 0x800a6e78
	extern PL_MAG_TBL Pl_mag[4];						// 0x800a6e90
	extern SHORT G_rot_data_z[20];						// 0x800a6ea8
	extern ULONG(*pl_mv05_w_tbl)[20];					// 0x800a6f3c
	extern UCHAR Gun_jtg_bit[5];						// 0x800a6f8c
	extern ULONG(*pl_mv05_t2_init)[19];					// 0x800a6f94
	extern ULONG(*pl_mv05_t2_spr)[19];					// 0x800a6fe0
	extern ULONG(*pl_mv05_w0_tbl)[7];					// 0x800a702c
	extern ULONG(*pl_mv05_w1_tbl)[6];					// 0x800a7048
	extern SHORT Bow_Room509[4];						// 0x800a7060
	extern ULONG(*pl_mv05_w2_tbl)[6];					// 0x800a7068
	extern ULONG(*pl_mv05_w3_tbl)[6];					// 0x800a7080
	extern ULONG(*pl_mv05_w4_tbl)[6];					// 0x800a7098
	extern ULONG(*pl_mv05_w5_tbl)[6];					// 0x800a70b0
	extern SVECTOR Poly_test4[4];						// 0x800a70c8
	//extern CHAR ascii_tbl[20];						// 0x800a70e8	// unused
	extern USHORT Rdt_tbl1[30];							// 0x800a70fc	// RDT file code numbers, no longer used
	extern USHORT Rdt_tbl2[28];							// 0x800a7138	// RDT file code numbers, no longer used
	extern USHORT Rdt_tbl3[16];							// 0x800a7170	// RDT file code numbers, no longer used
	extern USHORT Rdt_tbl4[20];							// 0x800a7190	// RDT file code numbers, no longer used
	extern USHORT Rdt_tbl5[12];							// 0x800a71b8	// RDT file code numbers, no longer used
	extern USHORT Rdt_tbl6[24];							// 0x800a71d0	// RDT file code numbers, no longer used
	extern USHORT Rdt_tbl7[8];							// 0x800a7200	// RDT file code numbers, no longer used
	extern ULONG(*Rdt_tbl)[7];							// 0x800a7210	// RDT file code numbers, no longer used
	//extern UCHAR Subpl_walk[32][2];						// 0x800a722c
	//extern UCHAR Subpl_back[32][2];						// 0x800a726c
	//extern UCHAR Subpl_dir[32][2];						// 0x800a72ac
	//extern UCHAR Subpl_ato[32][2];						// 0x800a72ec
	//extern UCHAR Subpl_run[32][2];						// 0x800a732c
	//extern UCHAR Em4a_zobiparts_tbl[7][2];				// 0x800a736c
	extern ULONG(*Sca_rtn_tbl)[14];						// 0x800a737c
	extern UCHAR Sca_no_ck_tbl[14];						// 0x800a73b4
	extern ULONG(*Sce_at_jump_tbl)[15];					// 0x800a73c4
	extern UCHAR em_se_tbl[200];						// 0x800a7400
	extern ULONG(*Sce_jmp_tbl)[143];					// 0x800a74c8
	extern UCHAR Em_kind_tbl[111];						// 0x800a76f4
	//extern UCHAR Subpl_walk[32][2];						// 0x800a7778
	//extern UCHAR Subpl_back[32][2];						// 0x800a77b8
	//extern UCHAR Subpl_dir[32][2];						// 0x800a77f8
	//extern UCHAR Subpl_ato[32][2];						// 0x800a7838
	//extern UCHAR Subpl_run[32][2];						// 0x800a7878
	//extern UCHAR Em4a_zobiparts_tbl[7][2];				// 0x800a78b8
	extern ULONG(*Flg_addr)[40];						// 0x800a78c8
	//extern UCHAR Subpl_walk[32][2];						// 0x800a7968
	//extern UCHAR Subpl_back[32][2];						// 0x800a79a8
	//extern UCHAR Subpl_dir[32][2];						// 0x800a79e8
	//extern UCHAR Subpl_ato[32][2];						// 0x800a7a28
	//extern UCHAR Subpl_run[32][2];						// 0x800a7a68
	//extern UCHAR Em4a_zobiparts_tbl[7][2];				// 0x800a7aa8
	extern UCHAR Itp_check_sum[100];					// 0x800a7ab8	// CD read functions have been rewriten to ignore file integrity, so this needs to be un-referenced
	extern tagfpos EnemSE_floc[146];					// 0x800a7b1c
	extern UCHAR LRVT[128];								// 0x800a7fb0
	extern UCHAR PANVT[128];							// 0x800a8030
	extern UCHAR nroom[8];								// 0x800a80b0	// Room count per stage (used for reading bgm ids from save data), no longer used
	extern UCHAR Core_edh[24];							// 0x800a80b8	// Core file code numbers, no longer used
	extern UCHAR Core_vbd[24];							// 0x800a80e8	// Core file code numbers, no longer used
	extern UCHAR Arms_edh[20];							// 0x800a8118	// Arms file code numbers, no longer used
	extern UCHAR Arms_vbd[20];							// 0x800a8140	// Arms file code numbers, no longer used
	extern UCHAR Main_bgm[64];							// 0x800a8168	// BGM file code numbers, no longer used
	extern UCHAR Sub_bgm[64];							// 0x800a81e8	// BGM file code numbers, no longer used
	//extern UCHAR Subpl_walk[32][2];						// 0x800a8268
	//extern UCHAR Subpl_back[32][2];						// 0x800a82a8
	//extern UCHAR Subpl_dir[32][2];						// 0x800a82e8
	//extern UCHAR Subpl_ato[32][2];						// 0x800a8328
	//extern UCHAR Subpl_run[32][2];						// 0x800a8368
	//extern UCHAR Em4a_zobiparts_tbl[7][2];				// 0x800a83a8
	extern ULONG(*Spl_routine_0)[9];					// 0x800a83b8
	extern ULONG(*Spl_mv)[28];							// 0x800a83dc
	extern ULONG(*Spl_in)[28];							// 0x800a844c
	extern ULONG(*Spl_dm)[4];							// 0x800a84bc
	extern ULONG(*Spl_die)[1];							// 0x800a84cc
	extern ULONG(*Spl_dead)[1];							// 0x800a84d0
	//extern UCHAR Subpl_walk[32][2];						// 0x800a84d4
	//extern UCHAR Subpl_back[32][2];						// 0x800a8514
	//extern UCHAR Subpl_dir[32][2];						// 0x800a8554
	//extern UCHAR Subpl_ato[32][2];						// 0x800a8594
	//extern UCHAR Subpl_run[32][2];						// 0x800a85d4
	//extern UCHAR Em4a_zobiparts_tbl[7][2];				// 0x800a8614
	extern SHORT Spl_r_pos[2][6];						// 0x800a8624
	extern ULONG(*Aida_Move_type)[11];					// 0x800a863c
	extern UCHAR Aida_St_pos[11];						// 0x800a8668
	extern UCHAR Spl_pos_ck_timer;						// 0x800a8673
	extern ULONG(*Aida_mv_br_type00)[14];				// 0x800a8674
	extern ULONG(*Aida_mv_type00)[14];					// 0x800a86ac
	extern ULONG(*Aida_mv_br_type01)[14];				// 0x800a86e4
	extern ULONG(*Aida_mv_br_type02)[14];				// 0x800a871c
	extern ULONG(*Aida_mv_br_type03)[14];				// 0x800a8754
	extern ULONG(*Aida_mv_br_type04)[14];				// 0x800a878c
	extern ULONG(*Aida_mv_br_type05)[14];				// 0x800a87c4
	extern ULONG(*Aida_mv_br_type06)[14];				// 0x800a87fc
	extern ULONG(*Aida_mv_br_type07)[14];				// 0x800a8834
	extern ULONG(*Aida_mv_br_type08)[14];				// 0x800a886c
	extern ULONG(*Aida_mv_br_type09)[14];				// 0x800a88a4
	extern ULONG(*Aida_mv_br_type0a)[14];				// 0x800a88dc
	extern UCHAR E_A_at_tbl[48];						// 0x800a8914
	extern ULONG(*Aida_em_at00_pl)[3];					// 0x800a8944
	extern ULONG(*Aida_em_at00_spl)[3];					// 0x800a8950
	extern ULONG(*Aida_em_at01)[3];						// 0x800a895c
	extern ULONG(*Aida_mv05_w1_br_tbl)[6];				// 0x800a8968
	extern ULONG(*Aida_mv05_w1_tbl)[6];					// 0x800a8980
	extern ULONG(*Aida_em_at05)[2];						// 0x800a8998
	extern ULONG(*Sherry_Move_type)[11];				// 0x800a89a0
	extern UCHAR Sherry_St_pos[11];						// 0x800a89cc
	extern ULONG(*Sherry_mv_br_type00)[14];				// 0x800a89d8
	extern ULONG(*Sherry_mv_br_type01)[14];				// 0x800a8a10
	extern ULONG(*Sherry_mv_br_type02)[14];				// 0x800a8a48
	extern ULONG(*Sherry_mv_br_type03)[14];				// 0x800a8a80
	extern ULONG(*Sherry_mv_br_type04)[14];				// 0x800a8ab8
	extern ULONG(*Sherry_mv_br_type05)[14];				// 0x800a8af0
	extern ULONG(*Sherry_mv_br_type06)[14];				// 0x800a8b28
	extern ULONG(*Sherry_mv_br_type07)[14];				// 0x800a8b60
	extern ULONG(*Sherry_mv_br_type08)[14];				// 0x800a8b98
	extern ULONG(*Sherry_mv_br_type09)[14];				// 0x800a8bd0
	extern ULONG(*Sherry_mv_br_type0a)[14];				// 0x800a8c08
	//extern UCHAR Subpl_walk[32][2];						// 0x800a8c40
	//extern UCHAR Subpl_back[32][2];						// 0x800a8c80
	//extern UCHAR Subpl_dir[32][2];						// 0x800a8cc0
	//extern UCHAR Subpl_ato[32][2];						// 0x800a8d00
	//extern UCHAR Subpl_run[32][2];						// 0x800a8d40
	//extern UCHAR Em4a_zobiparts_tbl[7][2];				// 0x800a8d80
	extern ULONG(*Spl_sce)[33];							// 0x800a8d90
	//extern UCHAR Subpl_walk[32][2];						// 0x800a8e14
	//extern UCHAR Subpl_back[32][2];						// 0x800a8e54
	//extern UCHAR Subpl_dir[32][2];						// 0x800a8e94
	//extern UCHAR Subpl_ato[32][2];						// 0x800a8ed4
	//extern UCHAR Subpl_run[32][2];						// 0x800a8f14
	//extern UCHAR Em4a_zobiparts_tbl[7][2];				// 0x800a8f54
	extern ULONG(*Spl_sp)[24][8];						// 0x800a8d90
	extern UCHAR init_item_tbl_Leon[11][3];				// 0x800a8f62
	extern UCHAR init_item_tbl_Claire[11][3];			// 0x800a9285
	extern UCHAR init_item_tbl_Hunk[11][3];				// 0x800a92a6
	extern UCHAR init_item_tbl_ToFu[11][3];				// 0x800a92c7
	extern UCHAR init_item_tbl_Leon_Ex[11][3];			// 0x800a92e8
	extern UCHAR init_item_tbl_Claire_Ex[11][3];		// 0x800a9309
	extern UCHAR init_item_tbl_Ada_Ex[11][3];			// 0x800a932a
	extern UCHAR init_item_tbl_Chris_Ex[11][3];			// 0x800a934b
	extern ULONG(*Status_proc_tbl)[5][3];				// 0x800a936c
	extern LIGHT_CUT_DATA st_light;						// 0x800a93a8
	extern UCHAR init_item_tbl_Ada[11][3];				// 0x800a93d0
	extern UCHAR init_item_tbl_Sherry[11][3];			// 0x800a93f1
	extern tagfpos maps_floc[20];						// 0x800a9414
	extern tagfpos fits_floc[120];						// 0x800a94b4
	extern ULONG(*Status_menu0_proc_tbl)[6];			// 0x800a9aac
	//extern UCHAR add[12];								// 0x800a9ac4	// St_menu0_file
	extern UCHAR File_offset[24];						// 0x800a9ad0
	extern UCHAR map_up_floor[24];						// 0x800a9aec
	extern UCHAR map_down_floor[24];					// 0x800a9b04
	extern UCHAR Map_char_tbl[2][4];					// 0x800a9b8c
	extern ULONG(*Status_direct_map_proc_tbl0)[3];		// 0x800a9b94
	extern ULONG(*Status_direct_map_proc_tbl1)[3];		// 0x800a9ba8	// copy of Status_direct_map_proc_tbl0
	extern ULONG(*St_itembox_proc_tbl)[4];				// 0x800a9bb4
	extern UCHAR Ibox_char_tbl[25][4];					// 0x800a9bc4
	extern UCHAR f4_tbl[4][4];							// 0x800a9c28
	extern SHORT Ibox_pos_tbl[25][2];					// 0x800a9c38
	extern ULONG(*St_getitem_proc_tbl)[5];				// 0x800a9c9c
	extern CHAR move_tbl[11][4];						// 0x800a9cb0
	//extern UCHAR add[12];								// 0x800a9cdc	// St_get_file
	extern ITEM_MIX_DATA Mix_nodata;					// 0x800a9ce8
	extern ITEM_MIX_DATA Mix_beretta[2];				// 0x800a9cec
	extern ITEM_MIX_DATA Mix_magnam[2];					// 0x800a9cf4
	extern ITEM_MIX_DATA Mix_shotgun[2];				// 0x800a9cfc
	extern ITEM_MIX_DATA Mix_machinegun;				// 0x800a9d04
	extern ITEM_MIX_DATA Mix_fire;						// 0x800a9d08
	extern ITEM_MIX_DATA Mix_bowgun;					// 0x800a9d0c
	extern ITEM_MIX_DATA Mix_g_n[3];					// 0x800a9d10
	extern ITEM_MIX_DATA Mix_g_f[3];					// 0x800a9d1c
	extern ITEM_MIX_DATA Mix_g_a[3];					// 0x800a9d28
	extern ITEM_MIX_DATA Mix_spark;						// 0x800a9d34
	extern ITEM_MIX_DATA Mix_bullet[2];					// 0x800a9d38
	extern ITEM_MIX_DATA Mix_dot380[6];					// 0x800a9d50
	extern ITEM_MIX_DATA Mix_shot_dan[3];				// 0x800a9d58
	extern ITEM_MIX_DATA Mix_arrow[2];					// 0x800a9d64
	extern ITEM_MIX_DATA Mix_mag_dan[3];				// 0x800a9d6c
	extern ITEM_MIX_DATA Mix_nen[2];					// 0x800a9d78
	extern ITEM_MIX_DATA Mix_battley[2];				// 0x800a9d80
	extern ITEM_MIX_DATA Mix_g_normal[4];				// 0x800a9d88
	extern ITEM_MIX_DATA Mix_g_fire[4];					// 0x800a9d98
	extern ITEM_MIX_DATA Mix_g_acid[4];					// 0x800a9da8
	extern ITEM_MIX_DATA Mix_ink_ribbon;				// 0x800a9db8
	extern ITEM_MIX_DATA Mix_parts_a;					// 0x800a9dbc
	extern ITEM_MIX_DATA Mix_parts_b;					// 0x800a9dc0
	extern ITEM_MIX_DATA Mix_parts_c[3];				// 0x800a9dc4
	extern ITEM_MIX_DATA Mix_g[5];						// 0x800a9dd0
	extern ITEM_MIX_DATA Mix_r[2];						// 0x800a9de4
	extern ITEM_MIX_DATA Mix_b[3];						// 0x800a9dec
	extern ITEM_MIX_DATA Mix_gr;						// 0x800a9df8
	extern ITEM_MIX_DATA Mix_gg[2];						// 0x800a9dfc
	extern ITEM_MIX_DATA Mix_gb[2];						// 0x800a9e04
	extern ITEM_MIX_DATA Mix_p_bomb;					// 0x800a9e0c
	extern ITEM_MIX_DATA Mix_fuse;						// 0x800a9e10
	extern ITEM_MIX_DATA Mix_Jaguar_a;					// 0x800a9e14
	extern ITEM_MIX_DATA Mix_Jaguar_b;					// 0x800a9e18
	extern ITEM_DATA Item_data_tbl[101];				// 0x800a9e1c
	extern FILE_DATA File_data[50];						// 0x800aa144
	extern MAP_DATA Map_stage1_0[8];					// 0x800aa1a8
	extern MAP_DATA Map_stage1_1[4];					// 0x800aa228
	extern MAP_DATA Map_stage1_2[15];					// 0x800aa268
	extern MAP_DATA Map_stage1_3[3];					// 0x800aa358
	extern MAP_DATA Map_stage2_0[18];					// 0x800aa388
	extern MAP_DATA Map_stage2_1[11];					// 0x800aa4a8
	extern MAP_DATA Map_stage3_0[11];					// 0x800aa558
	extern MAP_DATA Map_stage4_0[6];					// 0x800aa608
	extern MAP_DATA Map_stage4_1[13];					// 0x800aa668
	extern MAP_DATA Map_stage5_0[4];					// 0x800aa738
	extern MAP_DATA Map_stage5_1[3];					// 0x800aa778
	extern MAP_DATA Map_stage5_2[3];					// 0x800aa7a8
	extern MAP_DATA Map_stage5_3[2];					// 0x800aa7d8
	extern MAP_DATA Map_stage6_0[6];					// 0x800aa7f8
	extern MAP_DATA Map_stage6_1[1];					// 0x800aa858
	extern MAP_DATA Map_stage6_2[1];					// 0x800aa868
	extern MAP_DATA Map_stage6_3[13];					// 0x800aa878
	extern MAP_DATA Map_stage6_4[4];					// 0x800aa948
	extern MAP_DATA Map_stage6_5[3];					// 0x800aa988
	extern MAP_DATA Map_stage7_0[6];					// 0x800aa9b8
	extern MAP_DATA Map_stage7_1[2];					// 0x800aaa18
	extern MAP_STAGE_INFO Map_info[20];					// 0x800aaa38
	extern ECG_POINT Ecg_normal_tbl[80];				// 0x800aaad8
	extern ECG_POINT Ecg_caution0_tbl[80];				// 0x800aab78
	extern ECG_POINT Ecg_caution1_tbl[80];				// 0x800aac18
	extern ECG_POINT Ecg_danger_tbl[80];				// 0x800aacb8
	extern ECG_POINT Ecg_poison_tbl[80];				// 0x800aad58
	extern SHORT N_pos[18][2];							// 0x800aadf8
	extern UCHAR Cursol0_char_tbl[3][4];				// 0x800aae40
	extern SHORT Cursol0_pos_tbl[9][2];					// 0x800aae58
	extern UCHAR Cursol1_char_tbl[3][4];				// 0x800aae70
	extern SHORT Cursol1_pos_tbl[9][2];					// 0x800aae7c
	extern UCHAR Face_char_tbl[12][4];					// 0x800aaea0
	extern UCHAR Face_subchar_tbl[10][4];				// 0x800aaed4
	extern SHORT Face_pos_tbl[12][2];					// 0x800aaefc
	extern SHORT Face_subpos_tbl[10][2];				// 0x800aaf30
	extern UCHAR Message_char_tbl[17][4];				// 0x800aaf58
	extern SHORT Message_pos_tbl[17][2];				// 0x800aaf9c
	extern UCHAR Frame_char_tbl[17][4];					// 0x800aafe0
	extern SHORT Frame_pos_tbl[17][2];					// 0x800ab024
	extern UCHAR Menu0_char_tbl[8][4];					// 0x800ab068
	extern SHORT Menu0_pos_tbl[8][2];					// 0x800ab088
	extern UCHAR Menu1_char_tbl[9][4];					// 0x800ab0a8
	extern SHORT Menu1_pos_tbl[9][2];					// 0x800ab0cc
	extern UCHAR Itemlist_char_tbl[7][4];				// 0x800ab0f0
	extern SHORT Itemlist_pos_tbl[7][2];				// 0x800ab10c
	extern UCHAR Equip_char_tbl[7][4];					// 0x800ab128
	extern SHORT Equip_pos_tbl[7][2];					// 0x800ab144
	extern UCHAR Ecg_col_tbl[5][6];						// 0x800ab160
	extern ECG_POINT* Ecg_line_tbl[5];					// 0x800ab180
	extern UCHAR ECG_char_tbl[2][4];					// 0x800ab194
	extern UCHAR Itemget_char[8][4];					// 0x800ab19c
	extern SHORT Itemget_pos_tbl[8][2];					// 0x800ab1bc
	extern LONG v_p[3];									// 0x800ab1dc
	extern LONG v_r[3];									// 0x800ab1e8
	extern VECTOR pp;									// 0x800ab1f4
	extern MEMORY_MANAGE* pCmem_man;					// 0x800ab204
	//extern SVECTOR Svec;								// 0x800ab208	// Rot_vector
	//extern SVECTOR Svec;								// 0x800ab210	// Rot_vector_super
	extern ULONG Poly_ft4_count;						// 0x800ab218
	/*
	*	0x800ab21c - 0x800c3a80 (__data_orgend), PSYQ data
	*/


	/*
	*	bss (excluding PSYQ data)
	*/
	extern DOOR* pDoor[2];								// 0x800c3a80
	extern INT Stop_bak;								// 0x800c3a88
	extern VECTOR V;									// 0x800c3a8c
	extern VECTOR Kpos;									// 0x800c3a9c
	extern SVECTOR Kofs;								// 0x800c3ab0
	extern ULONG(*pPc)[2];								// 0x800c3ab8
	//extern LONG Hit_flg;								// 0x800c3b68	// Sca_ck_hit
	extern SCA_DATA** pSca_data;						// 0x800c3b6c
	extern LONG Old_x;									// 0x800c3b70
	extern LONG Old_z;									// 0x800c3b74
	//extern SHORT Hit_flg;								// 0x800c3b78	// Sca_ck_hit_om
	extern SHORT Gnd_y;									// 0x800c3b7c
	extern ULONG In_flg;								// 0x800c3b80
	extern SCA_DATA Tmp_Sca;							// 0x800c3b84
	//extern LONG Key_work;								// 0x800c3b98	// Key_lost
	extern SHORT Dir_spd;								// 0x800c3b9c
	extern SHORT Spd_add;								// 0x800c3ba0
	extern OBJ_MODEL_WORK* pOwork;						// 0x800c3ba4
	//extern LONG Key_work;								// 0x800c3ba8	// Hikidashi_entrance
	extern SCE_ITEM_DATA* pItem_dat;					// 0x800c3bac
	extern SCE_AOT* pAot;								// 0x800c3bb0
	extern DR_MOVE EM40_Prim;							// 0x800c3bb8
	extern UCHAR shot[8];								// 0x800c3bd0
	extern UCHAR num[8];								// 0x800c3bd8
	extern MATRIX Tmp_matrix[2];						// 0x800c3be0
	//extern SVECTOR Svec;								// 0x800c3c20	// Set_front_pos
	extern ULONG(*pStack_bak)[4];						// 0x800c3c28
	extern POLY_EFF2_WORK Poly2_work[16];				// 0x800c4348
	extern LONG add_y;									// 0x800c4408
	extern UCHAR Reverb_flg;							// 0x800c4410
	extern TRANS Trans;									// 0x800c4418
	extern UCHAR PadActData[2];							// 0x800cbc20
	extern SHORT Sedir2[4];								// 0x800cbc30
	extern ULONG(*m_pl_weapon_tmd)[2];					// 0x800cc1e0
	extern tagGLOBAL G;									// 0x800cc1e8
	extern CHAR Vab_id[7];								// 0x800d4c48
	extern SHORT Em_dir[3];								// 0x800d4c70
	extern SndVolume Cd_vol;							// 0x800d4c78
	extern SEENTRY Se_pri[24];							// 0x800d4ca0
	extern SHORT Move_x;								// 0x800d4cd0
	extern ULONG(*pEspdt)[64];							// 0x800d4cd8
	extern DOOR_WORK* pDwork[10];						// 0x800d4dd8
	extern UCHAR bk_cut;								// 0x800d4e00
	extern ULONG(*pEspmv)[64];							// 0x800d4cd8
	extern UCHAR sel_no;								// 0x800d4f18
	extern REQUEST Entory[23];							// 0x800d4f20
	extern tagCD CD;									// 0x800d5300
	extern DslFILTER Channel;							// 0x800d5b80
	extern MEMORY_MANAGE Mem_man[8];					// 0x800d5ba0
	extern ULONG(*m_pl_w00_tmd2)[1];					// 0x800d5be0
	extern LONG Ceiling;								// 0x800d5be4
	extern SCE_EM_SET_WORK* pSce_em[2];					// 0x800d5be8
	extern STATUS St;									// 0x800d5bf0
	extern CC_WORK Cc_work;								// 0x800d6c48
	extern SndVolume Pan_vol;							// 0x800d7598
	extern ULONG* pVh_tbl[8];							// 0x800d75a0
	extern SEQCTR Seq_ctr[3];							// 0x800d75c0
	extern VM_DISP Vm_disp;								// 0x800d75d8
	extern SHORT Om_fall_old_dir_x;						// 0x800d7638
	extern VM_FRAME* pVm_frm;							// 0x800d763c
	extern SHORT Om_fall_old_dir_z;						// 0x800d7642
	extern ENEMY_WORK* pSpl_near_em[3];					// 0x800d7648
	extern UCHAR UnknownPadInfoByte;					// 0x800d7654
	extern SndVolume Rev_vol;							// 0x800d7658
	extern ULONG(*gpPl_pac_ptr)[1];						// 0x800d7660
	extern ULONG CdReadSoundCnt;						// 0x800d7668
	extern USHORT sw;									// 0x800d766c
	extern VM_WORK Vm_work;								// 0x800d7670
	extern SCA_DATA* pStairs;							// 0x800d7694
	extern ULONG Ev0;									// 0x800d7698
	extern MONITOR Monitor;								// 0x800d76a0
	extern ULONG Ev1;									// 0x800d7828
	extern ULONG Ev2;									// 0x800d782c
	extern ULONG Ev3;									// 0x800d7830
	extern SHORT xx;									// 0x800d7834
	extern SHORT UnkSndSysInitSubFlg;					// 0x800d783c
	extern ULONG(*gpPl_tmd_ptr)[1];						// 0x800d7840
	extern BGMCTR Bgm;									// 0x800d7856
	extern ULONG(*gpPl_pac2_ptr)[1];					// 0x800d7858
	extern CHAR UnkMvPadFlg;							// 0x800d785c
	extern SCENARIO Sce;								// 0x800d7860
	extern ULONG Ev10;									// 0x800d8cd4
	extern DslLOC Loc;									// 0x800d8cd8
	extern ULONG Ev11;									// 0x800d8cdc
	extern ULONG Ev13;									// 0x800d8ce0
	extern SndVolume RevD_vol;							// 0x800d8ce4
	extern ULONG(*m_pl_weapon_parts)[1];				// 0x800d8ce8
	extern ULONG(*gpPl_tmd2_ptr)[1];					// 0x800d8cec
	extern ESP_WORK Esp[96];							// 0x800d8cf0
	extern tagEDT_TABLE_WORK* pEdt_adr;					// 0x800dbb70
	extern ULONG UnkSndFlg0;							// 0x800dbb88
	extern ULONG UnkSndSysFlg0;							// 0x800dbb8c
	extern POLY_EFF Poly_eff[32];						// 0x800dbb98
	extern SHORT Om_fall_dir_x;							// 0x800dcb98
	extern SndVolume Main_vol;							// 0x800dcb9c
	extern SHORT Om_fall_dir_y;							// 0x800dcba0
	extern SHORT Om_fall_dir_z;							// 0x800dcba2
	extern SHORT f_x;									// 0x800dcba4
	extern SHORT f_y;									// 0x800dcba6
	extern MATRIX GsWSMATRIX;							// 0x800dcba8
	extern LONG Ground_in_flg;							// 0x800dcbc8
	extern LIGHT_CUT_DATA* bk_light;					// 0x800dcbcc
	extern ESP_WORK* pESP;								// 0x800dcbd0
	extern RCUT Ex_battle_rcut;							// 0x800dcbe0
	extern VCUT Ex_battle_vcut;							// 0x800dcc50
	extern POLY_EFF2 Poly_eff2[32];						// 0x800dce30
	extern ULONG(*m_pl_weapon_packet)[1];				// 0x800df334
	extern UCHAR(*pMovie_result)[1];					// 0x800df338
	extern UCHAR Fade_mode;								// 0x800df340
	extern tagGAME Game;								// 0x800df348
	extern PDEMO Demo;									// 0x800df390
	extern UCHAR Key_idx_bak;							// 0x800dfad6
	extern UCHAR UnknownSetRoomByte;					// 0x800dfad7
	extern USHORT Em_l[3];								// 0x800dfad8
	extern tagMAIN Main;								// 0x800dfae0
	extern BGMCTR* pBgm;								// 0x800dfd64
	extern LINE_SCR Line;								// 0x800dfd68
	extern UCHAR UnknownPadSetFlag;						// 0x800e2a80
	extern ULONG UnknownSndSysFlg;						// 0x800e2a84
	extern UCHAR Ret_Value[8];							// 0x800e2a88
	extern MATRIX GsMWSMATRIX;							// 0x800e2a90
	extern MOJIDISP Moji;								// 0x800e2ab0
	extern UCHAR Volume_Se;								// 0x800e8768
	extern CHAR Seq_table[516];							// 0x800e8770
	extern DslATV* pAtv;								// 0x800e8980
	extern LONG Ceiling_in_pos;							// 0x800ea198
	extern COM_WORK* pCom_work;							// 0x800ea23c
	extern TSPRT* pPsp_prim[2];							// 0x800ea240
	extern ULONG(*m_pl_w00_packet)[2];					// 0x800ea248
	extern PSP* pPsp_work;								// 0x800eaad0
	extern SCE_AOT* pCAot;								// 0x800ead94
	extern ULONG Old_Fatari;							// 0x800eade0
	extern ULONG MainVbSize;							// 0x800eade4
	extern ULONG Old_Uatari;							// 0x800eae30
	extern DslFILE* pFile;								// 0x800eae34
	extern ULONG(*m_pl_w00_packet2)[1];					// 0x800eae38
	extern UCHAR Volume_Bgm;							// 0x800eae3c
	extern ULONG RoomVbSize;							// 0x800eae40
	extern UCHAR Espid[16];								// 0x800eae48
	extern SHORT Sedir;									// 0x800eae98

	// Assembly (vanilla)
	void memcpy16(ULONG* dest, ULONG* source, INT size);

	// CD.C
	VOID Cd_init(VOID);
	VOID Cd_system_control(VOID);
	VOID Xa_play(ULONG mode, ULONG no);
	VOID Xa_control(VOID);
	VOID Xa_control_stop(VOID);
	VOID Xa_control_init(VOID);
	VOID Xa_seek(UCHAR File_no, UCHAR* Mode);
	VOID Xa_control_play(VOID);
	VOID Xa_control_end(VOID);
	ULONG Cd_read(ULONG File_no, ULONG* Address, ULONG Mode, UCHAR* Mess);
	//ULONG Cd_read_s(ULONG File_no, ULONG Mode, ULONG* Address, ULONG Vab_id);
	ULONG Cd_read_s(ULONG File_no, ULONG Mode, ULONG* Address, ULONG Vab_id, UCHAR* Mess);
	//VOID Cd_seek(ULONG File_no, ULONG Mode, UCHAR* Mess);
	VOID Cd_seek(UCHAR File_no, UCHAR* Mode);
	VOID Cd_cdsync_cb(UCHAR intr, UCHAR* result);
	VOID Cd_ready_cb(UCHAR intr, UCHAR* result);
	VOID Cd_set_stereo(ULONG mode);
	VOID Set_volume(ULONG vol);
	VOID Change_volume(ULONG mode);

	// CONFIG.C
	VOID Config(VOID);
	VOID Config_main(VOID);
	VOID Config_fade_in_wait(VOID);
	VOID Config_fade_out_set(VOID);
	VOID Config_fade_out_wait(VOID);
	VOID Config_init(VOID);
	VOID Config_exit(VOID);
	VOID Config_padd_main(VOID);
	VOID Config_padd_opt(VOID);
	VOID Config_padd_con(VOID);
	VOID Config_padd_snd(VOID);
	VOID Config_padd_clr(VOID);
	VOID Config_padd_res(VOID);
	VOID Config_move(VOID);
	VOID Config_main_trans(VOID);
	VOID Config_suuji_trans(VOID);
	VOID Config_lrgb(VOID);
	VOID Config_suuji(ULONG id, ULONG vol);

	// DB_MENU.C
	VOID Debug_menu(VOID);
	VOID Back_tile_trans(VOID);
	VOID Padd2_menu(VOID);

	// DIEDEMO.C
	VOID Die_demo(VOID);
	VOID Die_demo_move(VOID);
	VOID Die_move_fade_out(VOID);
	VOID Die_move_wait(VOID);
	VOID Die_move_set_cut(VOID);
	VOID Die_move_set_cut_usual(VOID);
	VOID Die_enemy_set(VOID);
	VOID Die_light_set(VOID);
	VOID Die_vcut_set(VOID);
	VOID Die_move_pause(VOID);
	VOID Die_move_main(VOID);
	VOID Die_move_out(VOID);
	VOID Die_move_end(VOID);
	VOID Spiral_move(VOID);

	// DIESPR.C
	VOID Die_spr_init(VOID);
	VOID Die_spr_move(VOID);
	VOID Die_spr_move_init(VOID);
	VOID Die_blood_move_init(VOID);
	VOID Die_spr_move_main(VOID);
	VOID Die_spr_move_hold(VOID);
	VOID Die_spr_move_erase(VOID);
	VOID Die_spr_move_end(VOID);
	VOID Die_blood_move_main(VOID);
	VOID Die_spr_load(VOID);
	VOID Die_snd_trans(ULONG Size);

	// DOOR.C
	VOID Door_main(VOID);
	VOID Door_init(VOID);
	VOID Door_move(VOID);
	VOID Door_scheduler_main(VOID);
	VOID Door_exit(VOID);
	VOID Door_Trans(VOID);
	VOID DoorSort(MODEL_WORK* mw, DOOR_WORK* pDoorwork, TMD_MEM* Tmd);
	VOID Door_model_init(DOOR_WORK* pTmpDwork, ULONG Model_no);
	ULONG Door_model_set(SCE_TASK* pSce);
	VOID Door_snd_trans(VOID);
	VOID Door_texture_load(VOID);

	// EM_SET.C
	VOID Enemy_work_set(VOID);
	VOID Em_set(VOID);
	ULONG Emd_load(ULONG Id, ENEMY_WORK* pEm, ULONG Mem_top);
	ENEMY_WORK* Set_enemy_work(UCHAR Id);
	VOID Kill_enemy_work(ENEMY_WORK* pEm);
	VOID Em_move_tbl_set(VOID);
	VOID Em_bin_load(ULONG Id);
	VOID Emd_load_file(ULONG Em_no, ULONG* Address);

	// EM_SUB.C
	ULONG Hani_ck(VECTOR* pV, SHORT* pPxzhw);
	VOID Add_speedXZ(ENEMY_WORK* pEm, LONG muki);
	VOID Add_speedXYZ(ENEMY_WORK* pEm, LONG muki_y, LONG muki_z);
	VOID Add_speedXYZsuper(ENEMY_WORK* pEm, LONG muki_y, LONG muki_z);
	SHORT Direction_ck(SHORT Hontai_x, SHORT Hontai_z, SHORT Target_x, SHORT Target_z);
	VOID Goto00(ENEMY_WORK* pEm, LONG Vec_x, LONG Vec_z, SHORT Add_dir);
	LONG Goto00_ck(ENEMY_WORK* pEm, LONG Vec_x, LONG Vec_z, SHORT Add_dir);
	VOID Goto01(ENEMY_WORK* pEm, SHORT Dir, SHORT Add_dir);
	LONG Goto01_ck(ENEMY_WORK* pEm, SHORT Dir, SHORT Add_dir);
	LONG Dir_pos_ck(VECTOR* pV, VECTOR* pP, SHORT Hed_dir, SHORT Hani_dir);
	LONG L_pos_ckXZ(VECTOR* pV, VECTOR* pP, ULONG Ll);
	LONG L_pos_ckXZM(MATRIX* pM, VECTOR* pP, ULONG Ll, SVECTOR* pSv);
	UCHAR Cdir_ck(ENEMY_WORK* pEm, ENEMY_WORK* pT);
	UCHAR Cdir_ck2(ENEMY_WORK* pEm, ENEMY_WORK* pT);
	ULONG Gacha_ch(VOID);
	ULONG Sikai_ck(ENEMY_WORK* pEm, VECTOR* pTa, LONG Han, VECTOR* pAi);
	VOID Set_base_pos(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG R_flg);
	VOID Null_pos_set(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG R_flg);
	VOID get_null_pos(SVECTOR* pSv, ULONG R_flg, ULONG Kan, ULONG Seq);
	VOID Spd_get(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG R_flg);
	UCHAR Rnd(VOID);
	VOID Em_seq_sound(ENEMY_WORK* pEm);
	INT move_kuchi(VOID);
	VOID Tex_Ani_move(TEX_MOVE_DATA* T_data, TEX_MOVE_SEQ* T_seq, DR_MOVE* Prim, UCHAR* Set_timer);
	VOID Foot_set_pl(ENEMY_WORK* pEm, ULONG Mode, ULONG Foot_no);
	VOID Kage_work_init(VOID);
	VOID Kage_work9_init(VOID);
	VOID Kage_work_set(ULONG* pK, ULONG Off, ULONG Half, ULONG Color);
	VOID Kage_work9_set(ULONG* pK, ULONG Off, ULONG Half, ULONG Color);
	VOID MulKage(KAGE_WORK* pKw, SHORT Grand, SHORT Dir_y, ULONG Flg);
	VOID Kage_work_sort(VOID);
	VOID Kage_work9_sort(VOID);
	VOID Kage_work_color_set(ULONG* pK, ULONG Color);
	VOID Kage_work9_color_set(ULONG* pK, ULONG Color);
	VOID Texture_Move(MODEL_WORK* pMw, USHORT tex_page, ULONG mvmu, SHORT clut_plus);
	VOID Texture_Move_GT3(MODEL_WORK* pMw, USHORT tex_page, ULONG mvmu, SHORT clut_plus);
	VOID Texture_Move_GT4(MODEL_WORK* pMw, USHORT tex_page, ULONG mvmu, SHORT clut_plus);
	VOID Texture_Move_GT4_up(MODEL_WORK* pMw, LONG Late, ULONG Ouv, UCHAR* pPoly_no);
	VOID Rot_neck(ENEMY_WORK* pPm, SHORT Cdir_y);
	VOID Rot_neck_em(ENEMY_WORK* pPm, SHORT Cdir_y);
	VOID Rot_neck_em_n(ENEMY_WORK* pPm, SHORT Cdir_y, SHORT* pDir);
	ULONG Neck_Dir_ZY(VECTOR* pSv0, VECTOR* pSv1, SVECTOR* pRot, SHORT Front_dir_y);
	VOID Op_PartsSort00(ENEMY_WORK* pEm);
	VOID Op_PartsSort05(ENEMY_WORK* pEm);
	VOID Op_PartsSort06(ENEMY_WORK* pEm);
	VOID Kami_rot05(PARTS_W* pP_ptr, MATRIX* opw, SHORT jyu, SHORT mg);
	SHORT W_rot(SHORT rxz, SHORT ry);
	SHORT W_rot_x(SHORT rxz, SHORT ry);
	VOID Rbj_set(VOID);
	VOID Em_dead_flg_on(ENEMY_WORK* pEm);
	ULONG Aida_Jh_init(ENEMY_WORK* pEm, ULONG Mem_top);
	VOID Aida_Jh_move(ENEMY_WORK* pEm);
	ULONG Kg_Jh_init(ENEMY_WORK* pEm, ULONG Mem_top);
	VOID Kg_Jh_move(ENEMY_WORK* pEm);
	ULONG Jh_set(ENEMY_WORK* pEm, PARTS_W* pH_parts, JH_HEAD* pJhh, ULONG Mem_top);
	VOID MulJh(ENEMY_WORK* pEm, PARTS_W* pH_parts, JH_HEAD* pJhh);
	VOID Aida_Jh_sort(ENEMY_WORK* pEm);
	VOID Jh_sort(ENEMY_WORK* pEm, PARTS_W* pP_ptr);

	// EM_SUB2.C
	ULONG Approach(VECTOR* pPos, VECTOR* pDest, SHORT Spd);
	ULONG Approach_one(LONG* pX, LONG Dx, SHORT Spd);
	ULONG Mot_play(ENEMY_WORK* pEm, ULONG No, ULONG Hokan, ULONG Flg);
	ULONG Mot_play2(ENEMY_WORK* pEm, ULONG No, ULONG Hokan, ULONG Flg);
	ULONG Mot_play_init(ENEMY_WORK* pEm, ULONG Routine_bak);
	ULONG Mot_play_sp(ENEMY_WORK* pEm, ULONG No, ULONG Hokan, ULONG Flg);
	ULONG Mot_play2_sp(ENEMY_WORK* pEm, ULONG No, ULONG Hokan, ULONG Flg);
	ULONG Mot_play2_spxz(ENEMY_WORK* pEm, ULONG No, ULONG Hokan, ULONG Flg);
	VOID Em_init_super(ENEMY_WORK* pEm);
	ULONG Branch(ULONG N, ULONG A, ULONG B, ULONG C);
	ULONG Ck_em_id(ENEMY_WORK* pEm, ENEMY_WORK** ppWk, ULONG Id, ULONG Max);
	VOID Goto00_super(ENEMY_WORK* pEm, VECTOR* pVec, SHORT Add_dir);
	VOID Goto01_super(ENEMY_WORK* pEm, LONG Dir, SHORT Add_dir);
	VOID Get_parts_world_dir(ENEMY_WORK* pEm, PARTS_W* pParts, SVECTOR* pVec);

	// ENDING.C
	VOID Ending(VOID);

	// ESP.C
	UCHAR Esp_init_C(VOID);
	UCHAR Esp_init_R(VOID);
	UCHAR Esp_data_set0(UCHAR* ptr8, ULONG* ptr32, ULONG addr, ULONG type);
	VOID Esp_data_set1(ULONG* plong, ULONG* ptr);
	UCHAR Esp_call(ULONG bit, SHORT dir_y, MATRIX* pmat, SVECTOR* svec);
	UCHAR Esp_call3D(ULONG bit, SHORT dir_y, MATRIX* pmat, SVECTOR* svec);
	UCHAR Esp_call3D2(ULONG bit, ULONG dir_y_id2, MATRIX* pmat, SVECTOR* svec);
	UCHAR Esp_call2(ULONG bit, ULONG dir_y_id2, MATRIX* pmat, SVECTOR* svec);
	UCHAR Esp_call3(ULONG bit, SHORT dir_y, MATRIX* pmat, SVECTOR* svec);
	UCHAR Esp_kill(UCHAR id, UCHAR tp, MATRIX* pmat);
	UCHAR Esp_kill2(ULONG id2);
	VOID Esp_die(VOID);
	UCHAR Esp_ctrl(UCHAR id, UCHAR tp, USHORT rtn, MATRIX* pmat);
	UCHAR Esp_ctrl2(USHORT wk_no, USHORT rtn);
	UCHAR Esp_ctrl3(UCHAR id, UCHAR tp, USHORT magx, USHORT sinx);
	UCHAR Esp_ctrl4(UCHAR id, UCHAR tp, USHORT magy, USHORT siny);
	VOID Esp_move(VOID);
	VOID Esp_pos(VOID);

	// ESP_R.C
	VOID dummy(VOID);
	VOID Esp_01(VOID);
	VOID Esp_02(VOID);
	VOID Esp_03(VOID);
	VOID Esp_04(VOID);
	VOID Esp_05(VOID);
	VOID Esp_06(VOID);
	VOID Esp_07(VOID);
	VOID Esp_08(VOID);
	VOID Esp_09(VOID);
	VOID Esp_0a(VOID);
	VOID Esp_0b(VOID);
	VOID Esp_0c(VOID);
	VOID Esp_0d(VOID);
	VOID Esp_0e(VOID);
	VOID Esp_0f(VOID);
	VOID Esp_10(VOID);
	VOID Esp_11(VOID);
	VOID Esp_12(VOID);
	VOID Esp_13(VOID);
	VOID Esp_14(VOID);
	VOID Esp_15(VOID);
	VOID Esp_16(VOID);
	VOID Esp_17(VOID);
	VOID Esp_18(VOID);
	VOID Esp_19(VOID);
	VOID Esp_1a(VOID);
	VOID Esp_1b(VOID);
	VOID Esp_1c(VOID);
	VOID Esp_1d(VOID);
	VOID Esp_1e(VOID);
	VOID Esp_1f(VOID);
	VOID Esp_20(VOID);
	VOID Esp_21(VOID);
	VOID Esp_22(VOID);
	VOID Esp_23(VOID);
	VOID Esp_24(VOID);
	VOID Esp_25(VOID);
	VOID Esp_26(VOID);
	VOID Esp_27(VOID);
	VOID Esp_28(VOID);
	VOID Esp_29(VOID);
	VOID Esp_2a(VOID);
	VOID Esp_2b(VOID);
	VOID Esp_2c(VOID);
	VOID Esp_2d(VOID);
	VOID Esp_2e(VOID);
	VOID Esp_2f(VOID);
	VOID Esp_30(VOID);
	VOID Esp_31(VOID);
	VOID Esp_32(VOID);
	VOID Esp_33(VOID);
	VOID Esp_34(VOID);
	VOID Esp_35(VOID);
	VOID Esp_36(VOID);
	VOID Esp_37(VOID);
	VOID Esp_38(VOID);
	VOID Esp_39(VOID);
	VOID Esp_3a(VOID);
	VOID Esp_3b(VOID);
	VOID Esp_3c(VOID);
	VOID Esp_3d(VOID);
	VOID Esp_3e(VOID);
	VOID Esp_3f(VOID);
	VOID Esp_40(VOID);
	VOID Esp_41(VOID);
	VOID Esp_42(VOID);
	VOID Esp_43(VOID);
	VOID Esp_44(VOID);
	VOID Esp_45(VOID);
	VOID Esp_46(VOID);
	VOID Esp_47(VOID);
	VOID Esp_48(VOID);
	VOID Esp_49(VOID);
	VOID Esp_4a(VOID);
	VOID Esp_4b(VOID);
	VOID Esp_4c(VOID);
	VOID Esp_4d(VOID);
	VOID Esp_4e(VOID);
	VOID Esp_4f(VOID);
	VOID Esp_50(VOID);
	VOID Esp_51(VOID);
	VOID Esp_52(VOID);
	VOID Esp_53(VOID);
	VOID Esp_54(VOID);
	VOID Esp_55(VOID);
	VOID Esp_56(VOID);
	VOID Esp_57(VOID);
	VOID Esp_58(VOID);
	VOID Esp_59(VOID);
	VOID Esp_5a(VOID);
	VOID Esp_5b(VOID);
	VOID Esp_5c(VOID);
	VOID Esp_5d(VOID);
	VOID Esp_5e(VOID);
	VOID Esp_5f(VOID);

	// GAME.C
	VOID Game_loop(VOID);
	VOID Set_door(VOID);
	VOID Gun_light_set(VOID);
	VOID Gun_light_reset(VOID);

	// JOINT.C
	VOID Joint_trans2(ENEMY_WORK* pEm, PARTS_W* pP_ptr);
	VOID ko_joint_trans2(ENEMY_WORK* pEm, PARTS_W* pP_ptr, ULONG be_flg, MATRIX* wm);
	VOID SortGT3_neo(TMD_MEM* pT_head, POLY_GT3* bp);
	VOID SortGT4_neo(TMD_MEM* pT_head, POLY_GT4* bp);
	VOID ko_joint_trans3(ENEMY_WORK* pEm, PARTS_W* pP_ptr, ULONG be_flg, MATRIX* wm);
	ULONG PartsWork_set(ENEMY_WORK* pEm, ULONG work_top);
	ULONG PartsWork_link(ENEMY_WORK* pEm, ULONG Packet_top, ULONG* pKan_t_ptr);
	VOID Init_Parts_work(ENEMY_WORK* pEm);
	ULONG Mem_ck_Parts_work(ENEMY_WORK* pEm);
	VOID Joint_pos_trans(ENEMY_WORK* pEm);
	VOID Parts_down(PARTS_W* pP_ptr, MATRIX* wm);
	VOID Parts_bomb(PARTS_W* pP_ptr);
	VOID Parts_ryu(PARTS_W* pP_ptr);
	VOID HMatrix(MATRIX* pM0, MATRIX* pM1, MATRIX* pM2, ULONG Late);
	VOID HMatrix1(MATRIX* pM0, MATRIX* pM1, MATRIX* pM2, ULONG Late);
	VOID Model_color_plus(MODEL_WORK* pMw, ULONG Pluscolor_1, ULONG Pluscolor_2);
	ULONG Joint_move(ENEMY_WORK* pEm, ULONG Kan_t_ptr, ULONG Seq_t_ptr, ULONG Late_flg);
	ULONG J_seq(ULONG Kan_t_ptr, ULONG Seq_t_ptr, ULONG* pSeq_ptr, ULONG Late_flg);
	ULONG J_seq_hokan(ULONG kan_t_ptr, ULONG seq_t_ptr, ULONG r_flg, SHORT late);
	VOID rot_data_set02(ULONG i, PARTS_W* pP_ptr, ULONG* data_ptr, ULONG hokan_late);
	VOID rot_data_set03(ULONG i, PARTS_W* pP_ptr, ULONG* data_ptr, ULONG hokan_late);
	VOID hokan_svec(SVECTOR* sv0, SVECTOR* sv1, SVECTOR* sv2, ULONG late);
	VOID Pl_set_packet2(VOID);
	VOID Pl_set_packet(VOID);
	ULONG Joint_move_p(JOINT_P* pJp, ULONG Kan_t_ptr, ULONG Seq_t_ptr, ULONG Late_flg);
	ULONG Joint_move2(ENEMY_WORK* pEm, ULONG Kan_t_ptr, ULONG Seq_t_ptr, ULONG Late_flg);
	ULONG J_seq2(ULONG Kan_t_ptr, ULONG Seq_t_ptr, ULONG* pSeq_ptr, ULONG Late_flg);

	// LINE_SCR.C
	VOID Scr_effect(VOID);
	VOID Scr_quake(ULONG Amp);
	VOID Scr_rasta(ULONG Amp_x, ULONG Amp_y);
	VOID line_trans(LONG Line_no, LONG Slide_ofs, LONG Copy_ofs, LONG Draw_ofs);
	VOID line_scr_end(VOID);
	VOID line_mode_set(ULONG Ot_no, ULONG Prio);
	VOID Line_work_init(VOID);

	// MAIN.C
	VOID main(VOID);
	VOID Init_system(VOID);
	VOID InitGeom_func(VOID);
	VOID Init_main(VOID);
	VOID Swap_Cbuff(VOID);
	VOID Bg_set_mode(ULONG Mode, ULONG Rgb);
	VOID Bg_draw(VOID);
	VOID Fade_set(USHORT A0, SHORT Add, ULONG Mask, ULONG Pri);
	VOID Fade_start(ULONG No, ULONG Kido, ULONG Rgb, RECT* Rect);
	VOID Fade_adjust(ULONG No, ULONG Kido, ULONG Rgb, RECT* Rect);
	VOID Fade_off(ULONG No);
	ULONG Fade_status(ULONG No);
	VOID System_trans(VOID);
	VOID Init_global(VOID);
	ULONG Cut_check(ULONG Flg);
	VOID Cut_change(ULONG Fc);
	VCUT* Ccut_serach(ULONG Fc);
	ULONG Hit_ck_point4(VECTOR* p, VCUT* cp);
	ULONG Hit_ck_box(VECTOR* p, BOX* q);
	VOID Card_event_set(VOID);
	VOID Logo(VOID);

	// MD_SUB.C
	ULONG PresetObjectGT3_neo(MODEL_WORK* pMw, ULONG* G_packet, ULONG Flg);
	ULONG PresetObjectGT4_neo(MODEL_WORK* pMw, ULONG* G_packet, ULONG Flg);
	VOID CompM(MATRIX* m0, MATRIX* m1, MATRIX* m2);
	VOID mapModelingData(ULONG* pHead);
	VOID MulLMatrix(MATRIX* lwm, MATRIX* klwm, MATRIX* nlm);
	VOID SortGT3_lno(TMD_MEM* pT_head, POLY_GT3* bp);
	VOID SortGT4_lno(TMD_MEM* pT_head, POLY_GT4* bp);
	VOID Bomb_Parts_SortGT3(TMD_MEM* pT_head, POLY_GT3* pPacket, PARTS_W* pP_ptr);
	VOID Bomb_Parts_SortGT4(TMD_MEM* pT_head, POLY_GT4* pPacket, PARTS_W* pP_ptr);
	VOID Ryu_Parts_SortGT3(TMD_MEM* pT_head, POLY_GT3* bp, PARTS_W* pP_ptr, ULONG D0);
	VOID Ryu_Parts_SortGT4(TMD_MEM* pT_head, POLY_GT4* bp, PARTS_W* pP_ptr, ULONG D0);
	VOID mirror_TMD_GT3(ULONG* tmd_top);
	VOID mirror_PACKET_GT3(ULONG* tmd_top, POLY_GT3* p_top);
	VOID mirror_TMD_GT4(ULONG* tmd_top);
	VOID mirror_PACKET_GT4(ULONG* tmd_top, POLY_GT4* p_top);
	ULONG Mirror_model_cp(ENEMY_WORK* pEm, ULONG Mem);
	ULONG Init_mirror_weapon(ENEMY_WORK* pEm, ULONG Mem);
	VOID Mirror_weapon_cp(ENEMY_WORK* pEm);
	VOID Parts_work_cp(ENEMY_WORK* pEm);
	VOID Mirror_view(RCUT* pV0, RCUT* pV1, UCHAR flg, SHORT mxz);
	UCHAR Mirror_in_view(RCUT* pV0, UCHAR flg, VECTOR* pos);
	VOID Mirror_trans(ENEMY_WORK* pEm);
	VOID Mirror_matrix_set(VOID);
	VOID Late_set(MODEL_WORK* pMw, USHORT Late);

	// MEM_CARD.C
	VOID Mem_card(VOID);
	VOID Card_access(VOID);
	VOID Cardaccess_init(VOID);
	VOID Cardaccess_exit(ULONG Mode);
	VOID Mess_dispEx(ULONG Mode);
	VOID Cursor_disp(ULONG X, ULONG Y);
	VOID Search_f_num(UCHAR* F_num);
	ULONG Check_card(UCHAR* F_num);
	ULONG Wslot_check(VOID);
	VOID Card_mess_make(UCHAR* Mess, SAVE_DATA* Save_data, UCHAR Cursor);
	VOID Save_push(VOID);
	VOID Load_pop(VOID);
	VOID Clear_event(VOID);
	VOID Clear_event2(VOID);
	ULONG Card_write(_CARD* Head, UCHAR Port, UCHAR* Name, UCHAR* Title);
	ULONG Card_read(ULONG* Head, UCHAR* Name, ULONG Cap, ULONG Offset);
	VOID Card_search(ULONG Port, CFILE_INFO* Buff, UCHAR* Str);
	ULONG Card_check(ULONG Port);
	ULONG Card_format_check(ULONG Port);
	LONG Card_format(ULONG Port);
	ULONG Get_card_event(VOID);
	ULONG Get_card_event2(VOID);
	ULONG Card_clear(ULONG Port);

	// MIZU_SYS.C
	VOID Mizu_trans(OBJ_MODEL_WORK* pOwork, ULONG toumei);
	VOID Mizu_div_ck(OBJ_MODEL_WORK* pOwork, ULONG Size_x, ULONG Size_z);
	VOID Mizu_div_main(OBJ_MODEL_WORK* pOwork, ULONG Size_x, ULONG Size_z, ENEMY_WORK* pEwork);

	// MOJIDISP.C
	// doesn't support itox
	LONG Print8(ULONG x, ULONG y, ULONG c, ULONG p, UCHAR* pPtr, ...);
	// doesn't support itox
	LONG Print14(ULONG x, ULONG y, ULONG c, ULONG p, UCHAR* pPtr);
	LONG Print_main(ULONG x, ULONG y, ULONG attr, UCHAR** pSave);
	LONG Mess_set(ULONG Pos_xy, USHORT Attr, ULONG Mess_no, ULONG Stop_data);
	VOID Moji_trans_main(VOID);
	VOID Mess_disp(MOJIDISP* pMoji);
	VOID Branch_disp(MOJIDISP* pMoji, BRANCH_TBL* pBtbl, ULONG Flg, ULONG Mode);
	UCHAR* name_ptr_set(UCHAR Item_id);
	VOID mess_trans(MOJIDISP* pMoji);
	VOID Name_disp(LONG Pos_x, LONG Pos_y, ULONG Attr, ULONG Item_id);
	VOID Mess_print(ULONG Pos_x, ULONG Pos_y, UCHAR* pMess, ULONG Attr);
	VOID moji_trans_main(MOJIDISP* pMoji);
	UCHAR* moji_trans_8(UCHAR* pBuff0, ULONG Pos, MOJIDISP* pMoji);
	UCHAR* moji_trans_14(UCHAR* pBuff0, ULONG Pos, MOJIDISP* pMoji);
	VOID Moji_buff_init(VOID);
	VOID Moji_init(VOID);
	VOID Moji_mode_init(VOID);

	// MONITOR.C
	VOID Init_scheduler(VOID);
	VOID Scheduler(VOID);
	ULONG Task_lexecute(ULONG Level, ULONG Task_no);
	VOID Task_lchain(ULONG Task_no);
	VOID Task_execute(ULONG Level, VOID* pFuncall);
	VOID Task_sleep(ULONG Sleep_counter);
	VOID Task_exit(VOID);
	VOID Task_kill(ULONG Level);
	VOID Task_chain(VOID* pFuncall);
	VOID Task_suspend(ULONG Level);
	VOID Task_signal(ULONG Level);
	ULONG Task_status(ULONG Level);

	// MOVIE.C
	VOID Init_movie_work(ULONG Id);
	VOID Movie(VOID);
	VOID Movie_init(VOID);
	VOID Movie_main(VOID);
	VOID Movie_end(VOID);
	VOID Movie_exit(VOID);
	ULONG Open_movie(ULONG Movie_id);
	ULONG Play_movie(VOID);
	VOID Close_movie(VOID);
	VOID RuntoImage(VOID);
	VOID Mdec_callback(VOID);
	VOID Movie_cinesco_init(VOID);
	VOID Movie_cinesco_set(VOID);
	VOID Fwd_movie(ULONG Frame);
	VOID Movie_xa_start(VOID);
	VOID Movie_xa_stop(VOID);
	VOID Set_movie_volume2(ULONG Volume);
	LONG CdReset2(LONG Mode);
	VOID Caption_set(USHORT Caption_tbl_no);
	VOID Caption_print(ULONG Frame_no);
	VOID Decomp_caption(UCHAR* pAdr, ULONG Size);

	// OBA.C
	ULONG Oba_ck_hit(ENEMY_WORK* pEm1, ENEMY_WORK* pEm2);
	ULONG Oba_ck_only(VECTOR* pV, ENEMY_WORK* pEm1, ENEMY_WORK* pEm2);
	VOID Oba_set_ofs(ENEMY_WORK* pEm, VECTOR* pPos);
	VOID Oba_ck_em(ENEMY_WORK* pEm);
	VOID Oba_ck_em2(ENEMY_WORK* pEm);
	VOID Sca_ck_em(ENEMY_WORK* pEm, ULONG Sc_id);

	// OM.C
	VOID Om_init(ULONG Om_no, ULONG* pTmd_adr);
	VOID Col_chg_init(ULONG Col_wk_no, CC_PARTS_WORK* pCcp);
	VOID Tex_chg_init(ULONG Col_wk_no, CC_PARTS_WORK* pCcp);
	VOID Tex_ctr(VOID);
	VOID Col_chg(CC_PARTS_WORK* pCcp, RECT* pRect, ULONG Ctr);
	VOID Tex_chg(CC_PARTS_WORK* pCcp, RECT* pRect, ULONG Ctr);
	VOID Om_move(VOID);
	VOID Om_trans(VOID);
	VOID Om_move_box(OBJ_MODEL_WORK* pOm);
	VOID Om_set_fall_dir(OBJ_MODEL_WORK* pOm);
	ULONG Ob_test_load2(VOID);
	VOID Oma_set_ofs(OBJ_MODEL_WORK* pOm);
	VOID Om_explosion_set(OBJ_MODEL_WORK* pOm);

	// OMA.C
	ULONG Oma_ck_oba(ENEMY_WORK* pEm, OBJ_MODEL_WORK* pOm, ULONG Flg);
	ULONG Oma_ck_om(OBJ_MODEL_WORK* pOm, OBJ_MODEL_WORK* pOm2);
	ULONG Oma_ck_front(ENEMY_WORK* pEm, OBJ_MODEL_WORK* pOm);
	ULONG Oma_pl_updown_ck(ULONG Id);
	ULONG Oma_Spl_updown_ck(ENEMY_WORK* pEm);
	ULONG Oma_front_ck(ENEMY_WORK* pEm, OBJ_MODEL_WORK* pOm);
	OBJ_MODEL_WORK* Oma_on_check(ENEMY_WORK* pEm);
	VOID Oma_pull(ENEMY_WORK* pEm);
	VOID Oma_pull_hosei_x(ENEMY_WORK* pEm, AT_DATA* pOat, LONG X2, LONG W);
	VOID Oma_pull_hosei_z(ENEMY_WORK* pEm, AT_DATA* pOat, LONG Z2, LONG D);
	OBJ_MODEL_WORK* Oma_get_on_om(ENEMY_WORK* pEm, AT_DATA* pEat);
	VOID Oma_ob_pull2(ENEMY_WORK* pEm, OBJ_MODEL_WORK* pOm, ULONG Id, ULONG Spd);
	ULONG Omd_in_check(VECTOR* pVec, OBJ_MODEL_WORK* pOm, LONG R, ULONG Flg);
	ULONG Oma_obj_ck_all(VECTOR* pPos, ENEMY_WORK* pEm);
	OBJ_MODEL_WORK* Oma_hit_ck_all(VECTOR* pV, ENEMY_WORK* pEm);
	VOID Om_Jump_ck(ENEMY_WORK* pEm);

	// PAD.C
	VOID Pad_set(VOID);
	VOID FUN_8003947c(SHORT param_1, SHORT param_2);	// vibration
	VOID FUN_80039514(SHORT param_1, SHORT param_2, SHORT param_3);	// vibration
	VOID FUN_800395b8(SHORT param_1, SHORT param_2, SHORT param_3, SHORT param_4);	// vibration
	VOID FUN_80039694(VOID);	// resets pad state for Set_door() function
	VOID Pad_rep_set(ULONG Mask, USHORT Data);
	VOID Init_demo_moji(VOID);
	VOID Set_moji_work(SPRT* pSp);
	VOID Free_demo_moji(VOID);

	// PC_EVENT.C
	VOID Computer200(VOID);
	VOID Computer613(VOID);
	VOID Computer_init(ULONG Cut_no, ULONG Open_flg);
	VOID Computer_exit(ULONG Close_flg);

	// PC_SYS.C
	VOID Windows(VOID);
	ULONG Keyboard_Input(ULONG Length, ULONG Flg);
	VOID Keyboard_set(ULONG Be_flg, ULONG W, ULONG H, ULONG Col);
	ULONG Keyboard(VOID);
	ULONG Wframe_in_out(VOID);
	VOID Wframe_set(ULONG X, ULONG Y, ULONG X2, ULONG Y2);
	ULONG Wframe_move(ULONG X, ULONG Y, ULONG W, ULONG H);
	ULONG Get_moji_code(UCHAR Moji);
	ULONG Cprint(ULONG Speed, UCHAR* pMess, ULONG* Mend);
	VOID Console_put(UCHAR Moji);
	VOID Console_roll_up(VOID);
	VOID Console_clr(VOID);
	VOID Console_trans(ULONG Be_flg);
	VOID Sprite_Trans(ULONG nPacket);
	VOID Set_sp_work(SP_WORK* pSp, SP_WORK* pSw);
	ULONG Dr_mode_set(VOID);

	// PL_WEP.C
	
	// PL_WEP2.C
	VOID Pl_weapon_ch(ENEMY_WORK* pEm);
	VOID Non_init(ENEMY_WORK* pEm);
	VOID Plw02_init(ENEMY_WORK* pEm);
	VOID Plw09_init(ENEMY_WORK* pEm);
	VOID Plw0c_init(ENEMY_WORK* pEm);
	VOID Plw0f_init(ENEMY_WORK* pEm);
	VOID Plw12_init(ENEMY_WORK* pEm);
	VOID Weapon_cls(ENEMY_WORK* pEm);
	VOID Init_W_Tool(VOID);
	VOID W_Tool(VOID);
	VOID init_Weapon_at(ENEMY_WORK* pEm, ATTACK_WEAPON_TBL* At_tbl_top);
	ULONG Weapon_at_ck(ATTACK_WEAPON_TBL* At_tbl_top);
	LONG Set_MinMax(ATTACK_WEAPON_EM* pAwe, UCHAR Ck_flg, LONG* pMax, LONG* pMin);
	ULONG Attack_r_ck0(MODEL_WORK* pOm, MODEL_WORK* pPm, ATTACK_WORK* pAt);
	ULONG Attack_r_ck1(VECTOR* pH, SHORT Cdir_y, VECTOR* pT, ATTACK_WORK* pAt);
	ULONG Em_ck(ENEMY_WORK* pEm, ULONG LL);
	VOID Hand_ck(ENEMY_WORK* pEm, LONG Ck_pos_y, SHORT Type);
	VOID Mag_set(ENEMY_WORK* pEm);
	VOID Mag_down(ENEMY_WORK* pEm);
	VOID G_rot_st(ENEMY_WORK* pEm);
	VOID G_rot(ENEMY_WORK* pEm);
	VOID Gat_lp_st(ENEMY_WORK* pEm);
	VOID Gat_rot(ENEMY_WORK* pEm);
	VOID Pl_water(ENEMY_WORK* pEm);
	VOID pl_mv05_pad(ENEMY_WORK* pEm, ULONG Key, ULONG Key_trg);
	VOID pl_mv05_w0(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key);
	VOID pl_mv05_w0_t2(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key);
	VOID pl_mv05_w0_t6(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key);
	VOID pl_mv05_w1(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key);
	VOID pl_mv05_w1_t0(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key);
	VOID pl_mv05_w1_t1(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key);
	VOID pl_mv05_w1_t2(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key);
	VOID pl_mv05(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID pl_w01_t2_init(ENEMY_WORK* pEm);
	VOID pl_w02_t2_init(ENEMY_WORK* pEm);
	VOID pl_w03_t2_init(ENEMY_WORK* pEm);
	VOID pl_w04_t2_init(ENEMY_WORK* pEm);
	VOID pl_w05_t2_init(ENEMY_WORK* pEm);
	VOID pl_w06_t2_init(ENEMY_WORK* pEm);
	VOID pl_w07_t2_init(ENEMY_WORK* pEm);
	VOID pl_w08_t2_init(ENEMY_WORK* pEm);
	VOID pl_w09_t2_init(ENEMY_WORK* pEm);
	VOID pl_w0a_t2_init(ENEMY_WORK* pEm);
	VOID pl_w0b_t2_init(ENEMY_WORK* pEm);
	VOID pl_w0c_t2_init(ENEMY_WORK* pEm);
	VOID pl_w0d_t2_init(ENEMY_WORK* pEm);
	VOID pl_w0e_t2_init(ENEMY_WORK* pEm);
	VOID pl_w0f_t2_init(ENEMY_WORK* pEm);
	VOID pl_w10_t2_init(ENEMY_WORK* pEm);
	VOID pl_w11_t2_init(ENEMY_WORK* pEm);
	VOID pl_w12_t2_init(ENEMY_WORK* pEm);
	VOID pl_w01_t2_move(ENEMY_WORK* pEm);
	VOID pl_w02_t2_move(ENEMY_WORK* pEm);
	VOID pl_w03_t2_move(ENEMY_WORK* pEm);
	VOID pl_w04_t2_move(ENEMY_WORK* pEm);
	VOID pl_w05_t2_move(ENEMY_WORK* pEm);
	VOID pl_w06_t2_move(ENEMY_WORK* pEm);
	VOID pl_w07_t2_move(ENEMY_WORK* pEm);
	VOID pl_w08_t2_move(ENEMY_WORK* pEm);
	VOID pl_w09_t2_move(ENEMY_WORK* pEm);
	VOID pl_w0a_t2_move(ENEMY_WORK* pEm);
	VOID pl_w0b_t2_move(ENEMY_WORK* pEm);
	VOID pl_w0c_t2_move(ENEMY_WORK* pEm);
	VOID pl_w0d_t2_move(ENEMY_WORK* pEm);
	VOID pl_w0e_t2_move(ENEMY_WORK* pEm);
	VOID pl_w0f_t2_move(ENEMY_WORK* pEm);
	VOID pl_w10_t2_move(ENEMY_WORK* pEm);
	VOID pl_w11_t2_move(ENEMY_WORK* pEm);
	VOID pl_w12_t2_move(ENEMY_WORK* pEm);
	VOID pl_mv05_w1_t3(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key);
	VOID pl_mv05_w1_t4(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key);
	VOID pl_mv05_w1_t5(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key);
	VOID pl_mv05_sub(ENEMY_WORK* pEm);
	UCHAR pl_bow_init(ENEMY_WORK* pEm, ULONG No);
	UCHAR pl_bow_clr(ENEMY_WORK* pEm);
	ENEMY_WORK* Bow_Lim_dir_ck(VECTOR* pV, SHORT Cdir_y, ULONG Lim, SHORT Dir);
	VOID pl_bow(VOID);
	LONG Goto_pro(SHORT Tdir, SHORT Pdir, SHORT Add_dir, SHORT* pDir);
	VOID Bow_3D(SVECTOR* pTs, SVECTOR* pRot);
	SHORT Rot_3D(LONG Vx, LONG Vz);
	ULONG Pos_em_at_ck(VECTOR* pP, SHORT Cdir_y, ATTACK_WORK* pAtw, ULONG W_no);
	ULONG Pos_pl_at_ck(VECTOR* pP);
	ULONG Bow_goto_parts_no(ENEMY_WORK* pTa, MATRIX* pM, BOW_HIT_PARTS* pBow_t);
	VOID pl_mv05_w2(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key);
	VOID pl_mv05_w2_t1(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key);
	VOID pl_mv05_w2_t2(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key);
	VOID pl_mv05_w2_t4(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key);
	VOID pl_mv05_w3(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key);
	VOID pl_mv05_w3_t2(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key);
	VOID pl_mv05_w4(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key);
	VOID pl_mv05_w4_t2(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key);
	VOID pl_mv05_w5(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key);
	VOID pl_mv05_w5_t2(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG Key);

	// PLAYER.C
	VOID Player_set(ENEMY_WORK* pEm);
	VOID Pl_before(ENEMY_WORK* pEm);
	VOID Pl_after(ENEMY_WORK* pEm);
	VOID Player_move(ENEMY_WORK* pEm);
	VOID Pl_init(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Pl_move(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID pl_mv00_pad(ENEMY_WORK* pEm, ULONG Key, ULONG Key_trg);
	VOID pl_mv00(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID pl_mv01_pad(ENEMY_WORK* pEm, ULONG Key, ULONG Key_trg);
	VOID pl_mv01(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID pl_mv02_pad(ENEMY_WORK* pEm, ULONG Key, ULONG Key_trg);
	VOID pl_mv02(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID pl_mv03_pad(ENEMY_WORK* pEm, ULONG Key, ULONG Key_trg);
	VOID pl_mv03(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	ULONG Lim_dir_ck(ENEMY_WORK* pEm, ULONG Lim, SHORT Dir);
	VOID Pl_neck(ENEMY_WORK* pEm, ULONG Lim, SHORT Dir);
	VOID pl_mv04_pad(ENEMY_WORK* pEm, ULONG Key, ULONG Key_trg);
	VOID pl_mv04(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID pl_mv06_pad(ENEMY_WORK* pEm, ULONG Key, ULONG Key_trg);
	VOID pl_mv06(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID pl_mv07_pad(ENEMY_WORK* pEm, ULONG Key, ULONG Key_trg);
	VOID pl_mv07(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID pl_mv08_pad(ENEMY_WORK* pEm, ULONG Key, ULONG Key_trg);
	VOID pl_mv08(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID pl_mv09_pad(ENEMY_WORK* pEm, ULONG Key, ULONG Key_trg);
	VOID pl_mv09(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID pl_mv0a_pad(ENEMY_WORK* pEm, ULONG Key, ULONG Key_trg);
	VOID pl_mv0a(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID pl_mv0b_pad(ENEMY_WORK* pEm, ULONG Key, ULONG Key_trg);
	VOID pl_mv0b(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Pl_damage(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID pl_dm00(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID pl_dm01(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID pl_dm02(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID pl_dm03(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Pl_die(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID pl_die00(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Pl_Em_damage(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Pl_Em_die(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Pl_dead(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	ULONG Pl_life_down(LONG Down_life, ULONG Mode);
	ULONG Pl_life_up(LONG Up_life);

	// POLY_SUB.C
	VOID Poly_eff2_init(VOID);
	VOID Move_poly_eff2(VOID);
	VOID Sort_poly_eff2(VOID);
	VOID Poly_eff_init(VOID);
	VOID Set_poly_eff(VOID);
	VOID Sort_poly_eff(VOID);

	// PSP.C
	VOID Psp_init0(VOID);
	VOID Psp_init1(VOID);
	VOID Psp_set(VOID);
	VOID Psp_trans(VOID);
	VOID Psp_ctr(UCHAR psp_id, UCHAR st);

	// ROOM.C
	VOID Set_room(VOID);
	VOID Set_stage(VOID);
	VOID Replace_rdt(VOID);
	VOID Em_init_move(VOID);

	// ROOT_CK.C
	UCHAR Root_ck(ENEMY_WORK* pEm, VECTOR* Dest, UCHAR Dest_area, UCHAR Mode);
	UCHAR Rnd_area(VOID);
	UCHAR Guide_check(SHORT target_x, SHORT target_z);
	VOID kara_rootck2(UCHAR hontai_area);

	// SABUN.C
	VOID Sa_dat_set(ENEMY_WORK* pEm, ULONG* pSa);
	VOID Sa_parts_mod(ENEMY_WORK* pEm, PARTS_W* pP_ptr);
	VOID Sa_parts_allmv2(ENEMY_WORK* pEm, PARTS_W* pP_ptr);
	VOID Sa_parts_allmv(ENEMY_WORK* pEm, PARTS_W* pP_ptr);
	VOID Sa_parts_offset_allmv(ENEMY_WORK* pEm, PARTS_W* pP_ptr);

	// SCA.C
	ULONG Sca_get_area(LONG X, LONG Z, LONG Sx, LONG Sz);
	ULONG Sca_ck_hit(VECTOR* pPos, LONG R);
	ULONG Sca_ck_hit_om(OBJ_MODEL_WORK* pOm, ULONG Att, ULONG Flg);
	ULONG Sca_hit_box2(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz);
	ULONG Sca_hit_box(ENEMY_WORK* pEm, LONG R, SCA_DATA* pScd);
	ULONG Sca_hosei_box(ENEMY_WORK* pEm, SVECTOR* pOld, LONG X, LONG Z);
	ULONG Sca_hit_naname_a(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz);
	ULONG Sca_ck_naname_a(VECTOR* pPos, LONG R, SCA_DATA* pT_xz);
	ULONG Sca_hit_naname_b(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz);
	ULONG Sca_ck_naname_b(VECTOR* pPos, LONG R, SCA_DATA* pT_xz);
	ULONG Sca_hit_naname_c(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz);
	ULONG Sca_ck_naname_c(VECTOR* pPos, LONG R, SCA_DATA* pT_xz);
	ULONG Sca_hit_naname_d(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz);
	ULONG Sca_ck_naname_d(VECTOR* pPos, LONG R, SCA_DATA* pT_xz);
	ULONG Sca_hit_hishi(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz);
	ULONG Sca_ck_hishi(VECTOR* pPos, LONG R, SCA_DATA* pT_xz);
	ULONG Sca_hit_circle(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz);
	ULONG Sca_ck_circle(VECTOR* pPos, LONG R, SCA_DATA* pT_xz);
	ULONG Sca_hit_koban_x(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz);
	ULONG Sca_ck_koban_x(VECTOR* pPos, LONG R, SCA_DATA* pT_xz);
	ULONG Sca_hit_koban_z(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz);
	ULONG Sca_ck_koban_z(VECTOR* pPos, LONG R, SCA_DATA* pT_xz);
	ULONG Sca_hit_slope(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz);
	ULONG Sca_hit_stairs(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz);
	ULONG Sca_hit_curve(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz);
	LONG Sca_get_slope_high(LONG Pos_x, LONG Pos_z, LONG R, SCA_DATA* pT_xz);
	LONG Sca_get_stairs_high(VECTOR* pPos, LONG Low_y, LONG High_y, SCA_DATA* pT_xz);
	LONG Sca_get_curve_high(VECTOR* pPos, LONG Low_y, LONG High_y, SCA_DATA* pT_xz);
	LONG Sca_get_ground(VECTOR* pPos, LONG R);
	USHORT Sca_get_dir(VECTOR* pPos, SCA_DATA* pT_xz);
	LONG Sca_get_dir_super(VECTOR* pPos, SCA_DATA* pSca_dat, MATRIX* pSuper, ULONG Flg);
	USHORT Sca_get_dir_super_tmp(LONG X, LONG Z, LONG Sx, LONG Sz);
	ULONG Get_axis(MATRIX* pM);
	ULONG Get_axis2(MATRIX* pM);
	LONG Sca_get_pos(LONG Dir, SCA_DATA* pSca_dat);
	VOID Sca_get_pos_super(VECTOR* pPos, SCA_DATA* pSca_dat, MATRIX* pSuper, VECTOR* pVec);
	USHORT Sca_get_pos_super_tmp(LONG X, LONG Z, LONG Sx, LONG Sz);
	ULONG Sca_ck_line(VECTOR* pV1, VECTOR* pV2, ULONG Att);
	LONG Sca_get_high(SCA_DATA* pSca_dat);
	LONG Sca_get_low(SCA_DATA* pSca_dat);
	VOID Sca_search(ULONG Area, LONG Att, ULONG Floor);

	// SCE0.C
	VOID Sce_test_init(VOID);
	VOID FUN_800529fc(VOID);	// establishes the initial state of Ex-Batle stuff
	ULONG Em_kind_search(ULONG Id);
	VOID Sce_se_set(VOID);
	VOID Sce_rnd_set(VOID);
	VOID Sce_model_init(VOID);
	VOID Sce_work_clr(VOID);
	VOID Sce_work_clr_at(VOID);
	VOID Sce_work_clr_set(VOID);
	VOID Sce_aot_init(VOID);
	VOID Event_init(SCE_TASK* pSce, ULONG Evt_no);
	VOID Event_exec(ULONG Task_level, ULONG Evt_no);
	VOID Sce_col_chg_init(VOID);
	VOID Sce_mirror_init(VOID);
	VOID Sce_kirakira_set(VOID);
	VOID Sce_scheduler_set(VOID);
	VOID Sce_scheduler(VOID);
	VOID Sce_scheduler_main(VOID);

	// SCE1.C
	ULONG Break_point(SCE_TASK* pSce);
	ULONG Nop(SCE_TASK* pSce);
	ULONG Evt_end(SCE_TASK* pSce);
	ULONG Evt_next(SCE_TASK* pSce);
	ULONG Evt_chain(SCE_TASK* pSce);
	ULONG Evt_exec(SCE_TASK* pSce);
	ULONG Evt_kill(SCE_TASK* pSce);
	ULONG Ifel_ck(SCE_TASK* pSce);
	ULONG Else_ck(SCE_TASK* pSce);
	ULONG Endif(SCE_TASK* pSce);
	ULONG Sleep(SCE_TASK* pSce);
	ULONG Sleeping(SCE_TASK* pSce);
	ULONG Wsleep(SCE_TASK* pSce);
	ULONG Wsleeping(SCE_TASK* pSce);
	ULONG For(SCE_TASK* pSce);
	ULONG For2(SCE_TASK* pSce);
	ULONG Next(SCE_TASK* pSce);
	ULONG While(SCE_TASK* pSce);
	ULONG Ewhile(SCE_TASK* pSce);
	ULONG Do(SCE_TASK* pSce);
	ULONG Edwhile(SCE_TASK* pSce);
	ULONG While_main(SCE_TASK* pSce, UCHAR* pData, UCHAR Ofs);
	ULONG Switch(SCE_TASK* pSce);
	ULONG Case(SCE_TASK* pSce);
	ULONG Default(SCE_TASK* pSce);
	ULONG Eswitch(SCE_TASK* pSce);
	ULONG Goto(SCE_TASK* pSce);
	ULONG Gosub(SCE_TASK* pSce);
	ULONG Return(SCE_TASK* pSce);
	ULONG Break(SCE_TASK* pSce);
	ULONG Work_copy(SCE_TASK* pSce);
	ULONG Rbj_reset(SCE_TASK* pSce);
	ULONG Ck(SCE_TASK* pSce);
	ULONG Set(SCE_TASK* pSce);
	ULONG Cmp(SCE_TASK* pSce);
	ULONG Save(SCE_TASK* pSce);
	ULONG Copy(SCE_TASK* pSce);
	ULONG Calc(SCE_TASK* pSce);
	ULONG Calc2(SCE_TASK* pSce);
	VOID Calc_branch(ULONG Exp, SHORT* Ans, LONG Num);
	ULONG Sce_rnd(SCE_TASK* pSce);
	ULONG Cut_chg(SCE_TASK* pSce);
	ULONG Cut_old(SCE_TASK* pSce);
	VOID Cut_chg_main(ULONG Cut_no);
	ULONG Cut_auto(SCE_TASK* pSce);
	ULONG Cut_replace(SCE_TASK* pSce);
	ULONG Cut_be_set(SCE_TASK* pSce);
	ULONG Message_on(SCE_TASK* pSce);
	ULONG Aot_set(SCE_TASK* pSce);
	ULONG Aot_set_4p(SCE_TASK* pSce);
	ULONG Door_aot_set(SCE_TASK* pSce);
	ULONG Door_aot_set_4p(SCE_TASK* pSce);
	ULONG Item_aot_set(SCE_TASK* pSce);
	ULONG Item_aot_set_4p(SCE_TASK* pSce);
	ULONG Aot_reset(SCE_TASK* pSce);
	ULONG Aot_on(SCE_TASK* pSce);
	ULONG Obj_model_set(SCE_TASK* pSce);
	ULONG Super_set(SCE_TASK* pSce);
	ULONG Super_on(SCE_TASK* pSce);
	ULONG Super_reset(SCE_TASK* pSce);
	ULONG Work_set(SCE_TASK* pSce);
	ULONG Parts_set(SCE_TASK* pSce);
	ULONG Speed_set(SCE_TASK* pSce);
	ULONG Add_speed(SCE_TASK* pSce);
	ULONG Add_aspeed(SCE_TASK* pSce);
	ULONG Pos_set(SCE_TASK* pSce);
	ULONG Dir_set(SCE_TASK* pSce);
	ULONG Member_set(SCE_TASK* pSce);
	ULONG Member_set2(SCE_TASK* pSce);
	VOID Member_set_branch(ENEMY_WORK* pW, ULONG Member, LONG D0);
	ULONG Member_copy(SCE_TASK* pSce);
	ULONG Member_cmp(SCE_TASK* pSce);
	LONG Load_member_branch(ENEMY_WORK* pW, ULONG Member);
	ULONG Member_calc(SCE_TASK* pSce);
	ULONG Member_calc2(SCE_TASK* pSce);
	SHORT* Load_member_addr_branch(ENEMY_WORK* pW, ULONG Member);
	ULONG Dir_ck(SCE_TASK* pSce);

	// SCE2.C
	ULONG Se_on(SCE_TASK* pSce);
	ULONG Sca_id_set(SCE_TASK* pSce);
	ULONG Sce_espr_on(SCE_TASK* pSce);
	ULONG Sce_espr_on2(SCE_TASK* pSce);
	ULONG Sce_espr3d_on(SCE_TASK* pSce);
	ULONG Sce_espr3d_on2(SCE_TASK* pSce);
	ULONG Sce_espr_kill(SCE_TASK* pSce);
	ULONG Sce_espr_kill2(SCE_TASK* pSce);
	ULONG Sce_espr_control(SCE_TASK* pSce);
	MATRIX* Get_matrix(LONG Work_kind, LONG Work_no);
	ULONG Plc_motion(SCE_TASK* pSce);
	ULONG Plc_dest(SCE_TASK* pSce);
	ULONG Plc_gun(SCE_TASK* pSce);
	ULONG Plc_gun_eff(SCE_TASK* pSce);
	ULONG Plc_neck(SCE_TASK* pSce);
	ULONG Plc_ret(SCE_TASK* pSce);
	ULONG Plc_stop(SCE_TASK* pSce);
	ULONG Plc_flg(SCE_TASK* pSce);
	ULONG Plc_rot(SCE_TASK* pSce);
	ULONG Plc_cnt(SCE_TASK* pSce);
	ULONG Sce_em_set(SCE_TASK* pSce);
	ULONG Sce_key_ck(SCE_TASK* pSce);
	ULONG Sce_trg_ck(SCE_TASK* pSce);
	ULONG Sce_bgm_control(SCE_TASK* pSce);
	ULONG Sce_bgmtbl_set(SCE_TASK* pSce);
	ULONG Sce_fade_set(SCE_TASK* pSce);
	ULONG Sce_fade_adjust(SCE_TASK* pSce);
	ULONG Xa_on(SCE_TASK* pSce);
	ULONG Xa_vol(SCE_TASK* pSce);
	ULONG Se_vol(SCE_TASK* pSce);
	ULONG Weapon_chg(SCE_TASK* pSce);
	ULONG Sce_shake_on(SCE_TASK* pSce);
	ULONG Sce_line_start(SCE_TASK* pSce);
	ULONG Sce_line_main(SCE_TASK* pSce);
	ULONG Sce_line_end(SCE_TASK* pSce);
	ULONG Mizu_div_set(SCE_TASK* pSce);
	ULONG Keep_Item_ck(SCE_TASK* pSce);
	ULONG Sce_Item_lost(SCE_TASK* pSce);
	ULONG Sce_Item_get(SCE_TASK* pSce);
	ULONG Kage_set(SCE_TASK* pSce);
	ULONG Light_pos_set(SCE_TASK* pSce);
	ULONG Light_kido_set(SCE_TASK* pSce);
	ULONG Light_color_set(SCE_TASK* pSce);
	ULONG Light_pos_set2(SCE_TASK* pSce);
	ULONG Light_kido_set2(SCE_TASK* pSce);
	ULONG Light_color_set2(SCE_TASK* pSce);
	ULONG Sce_scr_move(SCE_TASK* pSce);
	ULONG Flr_set(SCE_TASK* pSce);
	ULONG Movie_on(SCE_TASK* pSce);
	ULONG Splc_ret(SCE_TASK* pSce);
	ULONG Splc_sce(SCE_TASK* pSce);
	ULONG Mirror_set(SCE_TASK* pSce);
	ULONG Sce_parts_bomb(SCE_TASK* pSce);
	ULONG Sce_parts_down(SCE_TASK* pSce);
	ULONG Col_chg_set(SCE_TASK* pSce);

	// SCE_AT.C
	ULONG Sce_at_check(ENEMY_WORK* pEm);
	ULONG Nothing(VOID* pAot);
	ULONG Sce_Door(VOID* pAot);
	VOID Key_lost(VOID);
	ULONG Sce_Item(VOID* pAot);
	ULONG Sce_Normal(VOID* pAot);
	ULONG Sce_Message(VOID* pAot);
	ULONG Sce_Event(VOID* pAot);
	ULONG Sce_Flg_chg(VOID* pAot);
	ULONG Sce_Water(VOID* pAot);
	ULONG Sce_Move(VOID* pAot);
	ULONG Sce_Save(VOID* pAot);
	VOID Save_entrance(VOID);
	ULONG Sce_Itembox(VOID* pAot);
	VOID Item_box_entrance(VOID);
	ULONG Sce_Damage(VOID* pAot);
	ULONG Sce_Status(VOID* pAot);
	ULONG Sce_Hikidashi(VOID* pAot);
	VOID Hikidashi_entrance(VOID);
	ULONG Sce_Windows(VOID* pAot);
	VOID Sce_at(VOID);
	LONG Water_ck(LONG Pos_x, LONG Pos_z);
	UCHAR Floor_check(LONG check_x, LONG check_z, ULONG nfloor);

	// SND.C
	VOID Snd_sys_init(VOID);
	VOID FUN_800594c8(SHORT vabid, ULONG flag);	// closes the VAB
	VOID Snd_sys_init2(VOID);
	VOID Snd_sys_Allvoff(VOID);
	VOID Snd_sys_init_sub(VOID);
	VOID Snd_sys_init_sub2(VOID);
	VOID Snd_sys_start(UCHAR ck);
	VOID Snd_sys_stereo(UCHAR sorm);
	VOID Snd_sys_core_set(UCHAR core_type_no, UCHAR sw);
	VOID Snd_sys_arms_set(UCHAR arms_type_no);
	VOID Snd_sys_room_set(VOID);
	VOID Snd_sys_enem_set(VOID);
	VOID Snd_sys_pset(VOID);
	VOID Snd_bgm_data(USHORT* pTbl);
	VOID Snd_bgm_set(VOID);
	VOID Snd_bgm_ck(VOID);
	VOID Snd_bgm_play_ck(VOID);
	CHAR Snd_bgm_main(VOID);
	CHAR Snd_bgm_sub(VOID);
	VOID Snd_bgm_fade_ON(UCHAR time, UCHAR mode);
	VOID Snd_bgm_fade(VOID);
	VOID Snd_bgm_ctr(ULONG code);
	VOID Snd_bgm_tbl_set(ULONG code);
	VOID Snd_se_stad(ULONG bits, VECTOR* pVec);
	VOID Snd_se_enem(ENEMY_WORK* pEm);
	VOID Snd_se_walk(USHORT no, USHORT lr, ENEMY_WORK* pEm);
	VOID Snd_se_call(VOID);
	UCHAR Snd_se_pri_ck(UCHAR Sv_ch, UCHAR Sv_pri);
	VOID Snd_se_3D(VECTOR* pVec);
	SHORT Snd_se_dir_ck(LONG B_x, LONG B_z, LONG T_x, LONG T_z);

	// SPL.C
	VOID Spl(ENEMY_WORK* pEm);
	VOID Spl_mv40(ENEMY_WORK* pEm);
	VOID Spl_mv42(ENEMY_WORK* pEm);
	VOID Spl_mv41(ENEMY_WORK* pEm);
	VOID Spl_mv44(ENEMY_WORK* pEm);
	VOID Spl_mv45(ENEMY_WORK* pEm);
	VOID Spl_mv47(ENEMY_WORK* pEm);
	VOID Spl_mv49(ENEMY_WORK* pEm);
	VOID Spl_mv48(ENEMY_WORK* pEm);
	VOID Spl_mv4a(ENEMY_WORK* pEm);
	VOID Spl_mv4b(ENEMY_WORK* pEm);
	VOID Spl_mv50(ENEMY_WORK* pEm);
	VOID Spl_mv51(ENEMY_WORK* pEm);
	VOID Spl_mv00(ENEMY_WORK* pEm);
	VOID Spl_Init(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_in40(ENEMY_WORK* pEm);
	VOID Spl_in42(ENEMY_WORK* pEm);
	VOID Spl_in41(ENEMY_WORK* pEm);
	VOID Spl_in44(ENEMY_WORK* pEm);
	VOID Spl_in45(ENEMY_WORK* pEm);
	VOID Spl_in47(ENEMY_WORK* pEm);
	VOID Spl_in48(ENEMY_WORK* pEm);
	VOID Spl_in4a(ENEMY_WORK* pEm);
	VOID Spl_in4b(ENEMY_WORK* pEm);
	VOID Spl_in50(ENEMY_WORK* pEm);
	VOID Spl_in51(ENEMY_WORK* pEm);
	VOID Spl_in00(ENEMY_WORK* pEm);
	VOID Spl_Damage(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_Die(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_Dead(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_dead00(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_set(VOID);
	VOID Spl_chenge00(ENEMY_WORK* pEm);
	VOID Spl_chenge01(ENEMY_WORK* pEm);
	VOID Spl_kizu00(ENEMY_WORK* pEm);
	VOID Spl_chenge02(ENEMY_WORK* pEm);
	VOID Spl_chenge04(ENEMY_WORK* pEm);
	VOID Spl_chenge05(ENEMY_WORK* pEm);
	VOID Spl_chenge06(ENEMY_WORK* pEm);
	VOID Spl_chenge07(ENEMY_WORK* pEm);
	VOID Spl_chenge08(ENEMY_WORK* pEm);
	VOID Spl_chenge09(ENEMY_WORK* pEm);
	VOID Spl_chenge10(ENEMY_WORK* pEm);
	VOID Spl_chenge03(ENEMY_WORK* pEm);

	// SPL_AUTO.C
	VOID Spl_Root_ck_sys(ENEMY_WORK* pEm);
	VOID Spl_Auto(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida(ENEMY_WORK* pEm);
	VOID Aida_move(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_Move_type00(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_Move_type01(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_Move_type02(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_Move_type03(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_Move_type04(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_Move_type05(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_Move_type06(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_Move_type07(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_Move_type08(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_Move_type09(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_Move_type0a(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_em10_at00_pl(ENEMY_WORK* pEm, ULONG Type);
	VOID Aida_em10_at00_spl(ENEMY_WORK* pEm, ULONG Type);
	VOID Aida_em25_at00_pl(ENEMY_WORK* pEm, ULONG Type);
	VOID Aida_em25_at00_spl(ENEMY_WORK* pEm, ULONG Type);
	VOID Aida_em26_at00_pl(ENEMY_WORK* pEm, ULONG Type);
	VOID Aida_em26_at00_spl(ENEMY_WORK* pEm, ULONG Type);
	VOID Aida_mv00_br(ENEMY_WORK* pEm);
	VOID Aida_mv00_br_1(ENEMY_WORK* pEm);
	VOID Aida_mv00(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_em10_at01(ENEMY_WORK* pEm, ULONG Type);
	VOID Aida_em25_at01(ENEMY_WORK* pEm, ULONG Type);
	VOID Aida_em26_at01(ENEMY_WORK* pEm, ULONG Type);
	VOID Aida_mv01_br(ENEMY_WORK* pEm);
	VOID Aida_mv01_br_1(ENEMY_WORK* pEm);
	VOID Aida_mv01(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_mv02_br(ENEMY_WORK* pEm);
	VOID Aida_mv02_br_1(ENEMY_WORK* pEm);
	VOID Aida_mv02(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_mv03_br(ENEMY_WORK* pEm);
	VOID Aida_mv03(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_mv04_br(ENEMY_WORK* pEm);
	VOID Aida_mv04(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_mv05_br(ENEMY_WORK* pEm);
	VOID Aida_mv05(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_mv05_w1(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_mv05_w1_t0_br(ENEMY_WORK* pEm);
	VOID Aida_mv05_w1_t0(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_em10_at05(ENEMY_WORK* pEm, ULONG Type);
	VOID Aida_mv05_w1_t1_br(ENEMY_WORK* pEm);
	VOID Aida_mv05_w1_t1(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_mv05_w1_t2_br(ENEMY_WORK* pEm);
	VOID Aida_mv05_w1_t2(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_mv05_w1_t3_br(ENEMY_WORK* pEm);
	VOID Aida_mv05_w1_t3(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_mv05_w1_t4_br(ENEMY_WORK* pEm);
	VOID Aida_mv05_w1_t4(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_mv05_w1_t5_br(ENEMY_WORK* pEm);
	VOID Aida_mv05_w1_t5(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_mv06_br(ENEMY_WORK* pEm);
	VOID Aida_mv06(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_mv07_br(ENEMY_WORK* pEm);
	VOID Aida_mv07(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_mv08_br(ENEMY_WORK* pEm);
	VOID Aida_mv08(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_mv09_br(ENEMY_WORK* pEm);
	VOID Aida_mv09(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_mv0a_br(ENEMY_WORK* pEm);
	VOID Aida_mv0a(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_mv0b_br(ENEMY_WORK* pEm);
	VOID Aida_mv0b_br_1(ENEMY_WORK* pEm);
	VOID Aida_mv0b(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_mv0c_br(ENEMY_WORK* pEm);
	VOID Aida_mv0c_br_1(ENEMY_WORK* pEm);
	VOID Aida_mv0d_br(ENEMY_WORK* pEm);
	VOID Sherry_move(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Sherry_Move_type00(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Sherry_Move_type01(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Sherry_Move_type02(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Sherry_Move_type03(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Sherry_Move_type04(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Sherry_Move_type05(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Sherry_Move_type06(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Sherry_Move_type07(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Sherry_Move_type08(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Sherry_Move_type09(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Sherry_Move_type0a(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Sherry_mv00_br(ENEMY_WORK* pEm);
	VOID Sherry_mv00(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Sherry_mv01_br(ENEMY_WORK* pEm);
	VOID Sherry_mv02_br(ENEMY_WORK* pEm);
	VOID Sherry_mv06_br(ENEMY_WORK* pEm);
	VOID Sherry_mv06(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Sherry_mv0b_br(ENEMY_WORK* pEm);
	VOID Sherry_mv0c_br(ENEMY_WORK* pEm);
	VOID Spl_dm00(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_dm01(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_die00(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Aida_before(ENEMY_WORK* pEm);
	VOID Aida_after(ENEMY_WORK* pEm);
	ULONG Spl_soba_pos_set(SHORT ll, SHORT dir, SHORT dir2, SVECTOR* pPos);
	VOID Spl_enemy_ck(ENEMY_WORK* pEm);
	ULONG Spl_em_pos_ck(ENEMY_WORK* pEm, ULONG Lim);
	ULONG Spl_em_cdir_ck(ENEMY_WORK* pEm);
	ULONG Spl_pllock_get(ENEMY_WORK* pEm, ENEMY_WORK* pYo);
	ULONG Spl_life_down(ENEMY_WORK* pEm, LONG Down_life, ULONG Mode);

	// SPL_SCE.C
	VOID Spl_Scenario(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce00(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce01(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce02(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce03(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce04(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce05(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce06(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce07(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce08(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce09(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce0a(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce0b(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce0c(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce0d(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce0e(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce0f(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce10(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce11(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce12(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce13(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce14(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce15(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce16(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce17(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce18(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce20(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce_mv00(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	UCHAR Spl_sce_mv01(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	UCHAR Spl_sce_mv02(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	UCHAR Spl_sce_mv03(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sce_mv04(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);

	// SPL_SP.C
	VOID Spl_Sp_Move(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sp40_00(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Spl_sp44_00(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);

	// ST_SUB00.C
	VOID St_init00(VOID);
	VOID St_main00(VOID);
	VOID St_menu0_select(VOID);
	VOID St_menu0_item(VOID);
	VOID St_com_use_equip(VOID);
	VOID St_com_mix(VOID);
	VOID St_com_inspect(VOID);
	VOID St_menu0_file(VOID);
	VOID file_moji_load(VOID);
	VOID move_file_tag(ULONG type);
	VOID St_menu0_map(VOID);
	VOID St_init_disp_map(VOID);
	VOID St_disp_map(VOID);
	ULONG Check_map_no(ULONG stage, ULONG room);
	ULONG Check_room_no(ULONG map_no, ULONG room);
	VOID St_menu1_map(VOID);
	VOID St_init03(VOID);
	VOID St_main03(VOID);

	// ST_SUB01.C
	VOID St_init01(VOID);
	VOID St_main01(VOID);
	VOID St_select_menu_m(VOID);
	VOID St_select_item_m(VOID);
	VOID Exchange_item(VOID);
	VOID St_init_itembox(VOID);
	VOID St_disp_itembox(VOID);

	// ST_SUB02.C
	VOID St_init02(VOID);
	VOID St_main02(VOID);
	VOID St_get_check(VOID);
	VOID St_get_item(VOID);
	VOID St_disp_file2(VOID);
	VOID St_get_file(VOID);

	// ST_SUB04.C
	VOID St_init_disp_num(VOID);
	VOID St_disp_num(VOID);
	ULONG print_num(SPRT* sp, ULONG in, ULONG pos, ULONG mode);
	VOID St_init_disp_cursol0(VOID);
	VOID St_disp_cursol0(ULONG type);
	VOID St_init_disp_cursol1(VOID);
	VOID St_disp_cursol1(ULONG type);
	VOID St_init_disp_face(VOID);
	VOID St_disp_face(VOID);
	VOID St_init_disp_message(VOID);
	VOID St_disp_message(VOID);
	VOID St_init_disp_frame(ULONG type);
	VOID St_disp_frame(VOID);
	VOID St_init_disp_menu0(VOID);
	VOID St_disp_menu0(VOID);
	VOID St_init_disp_menu1(ULONG ctype, ULONG wtype);
	VOID St_disp_menu1(ULONG wtype);
	VOID St_init_disp_itemlist(VOID);
	VOID St_disp_itemlist(VOID);
	VOID St_init_disp_equip(VOID);
	VOID St_disp_equip(VOID);
	VOID St_init_disp_wall(VOID);
	VOID St_disp_wall(VOID);
	VOID St_init_disp_ECG(VOID);
	VOID St_disp_ECG(ULONG type);
	VOID St_init_disp_itp(ULONG type);
	VOID St_disp_itp(ULONG type);
	VOID St_init_disp_filesel(VOID);
	VOID St_disp_filesel(VOID);
	VOID St_init_disp_file(VOID);
	VOID St_disp_file(VOID);
	VOID ST_Om_trans(VOID);
	VOID model_disp(MODEL_WORK* pOm, ULONG type, ULONG no);

	// STAGE1.C
	VOID Stage1(VOID);

	// STAGE2.C
	VOID Stage2(VOID);

	// STAGE3.C
	VOID Stage3(VOID);

	// STAGE4.C
	VOID Stage4(VOID);

	// STAGE5.C
	VOID Stage5(VOID);

	// STAGE6.C
	VOID Stage6(VOID);

	// STAGE7.C
	VOID Stage7(VOID);

	// STATUS.C
	VOID Status_init(VOID);
	VOID Status_init_m(VOID);
	VOID Status(VOID);
	VOID St_exit(VOID);
	VOID St_fade_out_set(VOID);
	VOID St_fade_out_wait(VOID);
	VOID St_chenge_pl(ULONG pl_id);
	VOID pl_tim_load(ENEMY_WORK* pEm);
	ULONG St_file_set(ULONG file_no);
	VOID St_room_set(VOID);
	VOID St_disp_name(LONG x, LONG y, ULONG at, ULONG id);
	VOID Set_iwork(ULONG no, ULONG id, ULONG num, ULONG size);
	VOID Set_iwork_num(ULONG no, ULONG num);
	ULONG Check_pl_life(VOID);
	ULONG Check_item_space(ULONG id);
	ULONG Check_item_mix(VOID);
	LONG Search_item(ULONG type);
	LONG Search_item_id(ULONG id);
	VOID Sort_item(VOID);
	VOID Shift_item(ULONG type);
	VOID Set_item(ULONG id, ULONG num, ULONG* adr);
	VOID Pix_trans(ULONG set_no, ULONG* data_addr);
	VOID Pix_trans_pl(ULONG set_no, ULONG id, ULONG* data_addr);
	VOID Pix_move(ULONG base, ULONG object);
	VOID Pix_clear(ULONG set_no);
	VOID St_pltex_operation(ULONG type);
	ULONG Tama_ck_i(ULONG id);
	ULONG Tama_decrease_i(ULONG id, ULONG flag);
	UCHAR Tama_reload_ck(VOID);
	VOID Tama_reload(VOID);
	VOID Check_cursol_distance(ULONG type);

	// SUB.C
	VOID Vram_clr(USHORT x, USHORT y, USHORT w, USHORT h);
	VOID Memcpy(VOID* p, VOID* q, LONG r);
	VOID Memclr(VOID* p, LONG r);
	VOID Mapping_tim(ULONG* pTim_Adr);
	ULONG Mapping_tmd(ULONG Mode, ULONG* pTmd_adr, ULONG Ctp, ULONG Ccl);
	VOID Set_view(LONG* pVp, LONG* pVr);
	VOID Set_light(VECTOR* pV);
	VOID Set_Light_data(ULONG No, VECTOR* pLig, UCHAR* pRgb);
	VOID Flg_on(ULONG* p, ULONG x);
	VOID Flg_off(ULONG* p, ULONG x);
	ULONG Flg_ck(ULONG* p, ULONG x);
	VOID Rot_vector(SHORT dir, SVECTOR* p, SVECTOR* q);
	VOID Rot_vector_super(SHORT dir, MATRIX* pM, SVECTOR* p, SVECTOR* q);
	VOID Rot_add_matrix(LONG* pPos, SHORT* pDir, MATRIX* pM, SVECTOR* Add_dir);
	VOID Set_front_pos(ENEMY_WORK* pEm);
	VOID SetSpadStack(VOID);
	VOID ResetSpadStack(VOID);
	VOID SetSpadStack2(VOID);
	VOID ResetSpadStack2(VOID);
	ULONG Get_work(VOID** p, ULONG Size);
	ULONG Free_work(VOID** p);

	// T_ATVIEW.C
	VOID Disp_atari(VOID);
	VOID Disp_atari_id_inc(VOID);
	VOID Disp_atari_id_dec(VOID);
	VOID Disp_atari_trans(VOID);
	VOID Disp_atari_trans2(ENEMY_WORK* pEwork);

	// T_BLOCK.C
	VOID Block_data(VOID);

	// T_EM_SET.C
	VOID Tool_em_set(VOID);

	// T_ESP.C
	VOID T_Esp(VOID);

	// T_FLOOR.C
	VOID Floor_data(VOID);

	// T_KAT0.C
	INT init_KI2(KI2* ki2, ULONG color);
	INT init_KI2_LINE_F3(KI2_LINE_F3* kil, ULONG color);
	INT color_plus_KI2_LINE_F3(VOID);
	INT ki2_set(KI2* ki2, KI2_LINE_F3* kil, KI2_LINE_F3* kil2, ULONG color);
	INT ki_sort(KI2* ki2, KI2_LINE_F3* kil, KI2_LINE_F3* kil2, ULONG* sxy);
	INT Maker_line_sort(KI2_LINE_F3* kil);
	VOID Enemy_move_tool(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq);
	VOID Enemy_motion_view(ENEMY_WORK* pEm);
	VOID Enemy_st_view(ENEMY_WORK* pEm);
	VOID init_Enemy_tool_sitenn(VOID);
	VOID Enemy_tool_sitenn(VOID);
	INT Weapon_maker_sort(VOID);

	// T_LIGHT.C
	VOID Light_data(VOID);

	// T_PSP.C
	VOID T_Psp(VOID);

	// T_RVIEW.C
	VOID Rview(VOID);

	// T_SCA.C
	VOID Sc_hit(VOID);

	// T_SCE_AT.C
	VOID Tool_sce_at_set(VOID);

	// T_SND.C
	VOID T_Snd(VOID);

	// TITLE.C
	VOID Title(VOID);
	VOID Capcom_logo(VOID);
	VOID Title_bg_load(VOID);
	VOID Title_bg_reload(VOID);
	VOID Title_init(VOID);
	VOID Title_main(VOID);
	VOID Title_main_game(VOID);
	VOID Title_main_wait(VOID);
	VOID Title_main_select(VOID);
	VOID Moji_Sel(VOID);
	VOID Title_sel_menu(VOID);
	VOID Title_sel_mode(VOID);
	VOID Title_sel_sound(VOID);
	VOID Title_main_load(VOID);
	VOID Title_main_option(VOID);
	VOID Title_main_information(VOID);
	VOID Title_info_sel(VOID);
	VOID Title_game_init(VOID);
	VOID Init_tbl_load(VOID);
	VOID Moji_set_work(VOID);
	VOID Moji_SelectMode(VOID);
	VOID Moji_Game_mode(ULONG Mode);
	VOID Moji_Sound(ULONG Mode);
	VOID Moji_PressAnyKey(ULONG Kido);
	VOID Moji_License(VOID);
	VOID Moji_Sample(VOID);
	VOID Pl_select(VOID);

	// TRANS.C
	VOID Prim_trans(VOID);
	VOID Trans_pointer_set(VOID);
	VOID Eff_sprt_trans(VOID);
	VOID Esp_trans_main(POLY_FT4* pP, ESP_WORK* pEff, ULONG Def_size, ULONG nSpr);
	VOID Esp_trans_3d(POLY_FT4* pP, ESP_WORK* pEff, ULONG Def_size, ULONG nSpr);

	// PSYQ
	void start(void);
	int VSync(int mode);
	void SetGeomOffset(long ofx, long ofy);
	void DsFlush(void);
	DslLOC* DsIntToPos(int i, DslLOC* p);
	typedef void (*DslCB)(UCHAR, UCHAR*);
	typedef void (*DslRCB)(UCHAR, UCHAR*, ULONG*);
	DslCB DsSyncCallback(DslCB func);
	int DsCommand(UCHAR com, UCHAR* param, DslCB cbsync, int count);
	DslCB DsReadyCallback(DslCB func);
	int DsSystemStatus(void);
	UCHAR DsStatus(void);
	void SetTile(TILE* p);
	void SetSemiTrans(void* p, int abe);
	void SetDrawMode(DR_MODE* p, int dfe, int dtd, int tpage, RECT* tw);
	void AddPrim(void* ot, void* p);
	void EnterCriticalSection(void);
	void SsSetSerialAttr(char param_1, char param_2, char param_3);
	void* memset(UCHAR* s, UCHAR c, int n);
	int DrawSync(int mode);
	int DsGetSector(void* madr, int size);
	int DsPosToInt(DslLOC* p);
	short SsVabTransCompleted(short immediateFlag);
	short SsVabTransBodyPartly(UCHAR* addr, ULONG bufsize, short vabid);
	short SsVabOpenHeadSticky(UCHAR* addr, short vabid, ULONG sbaddr);
	long SpuSetTransferMode(long mode);
	void SsVabClose(short vab_id);
	void DeliverEvent(ULONG ev1, long ev2);
	void ExitCriticalSection(void);

}
