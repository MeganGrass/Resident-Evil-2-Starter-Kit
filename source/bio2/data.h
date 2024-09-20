

#include "TYPES.H"

#include "DEFINES.H"

#include "PSYQ.H"

// Custom types, vanilla
typedef struct tagbyte_lh {
	UCHAR low;
	UCHAR h;
} byte_lh;
typedef union WORK_LH {
	USHORT l;
	byte_lh hi;
} WORK_LH;

// Custom PSYQ, vanilla
typedef struct tagTPOLY {
	POLY_FT4 poly;
} TPOLY;
typedef struct tagTSPRT {
	DR_MODE mode;
	SPRT sprt;
} TSPRT;
typedef struct tagPOLY_F4_2 {
	ULONG* tag;
	UCHAR r0;
	UCHAR g0;
	UCHAR b0;
	UCHAR code;
	LONG pos[4];
} POLY_F4_2;
typedef struct tagLINE_2 {
	ULONG* tag;
	UCHAR r0;
	UCHAR g0;
	UCHAR b0;
	UCHAR code;
	LONG pos[2];
} LINE_2;
typedef struct tagSPRT2 {
	SPRT Sp[2];
	DR_MODE Dm[2];
} SPRT2;
typedef struct tagPRIM_F4 {
	DR_MODE mode;
	POLY_F4 prim;
} PRIM_F4;
typedef struct tagPRIM_G4 {
	DR_MODE mode;
	POLY_G4 prim;
} PRIM_G4;
typedef struct tagPRIM_LINE_F3 {
	DR_MODE mode;
	LINE_F3 prim;
} PRIM_LINE_F3;
typedef struct tagTMD_MEM {
	ULONG* ver_top;
	ULONG n_ver;
	ULONG* nor_top;
	ULONG n_nor;
	ULONG* prim_top;
	ULONG n_poly;
	ULONG scale;
} TMD_MEM;
typedef struct tag_TIM4 {
	LONG id;
	LONG flag;
	LONG cbnum;
	SHORT cx;
	SHORT cy;
	SHORT cw;
	SHORT ch;
	UCHAR clut[32];
	LONG pbnum;
	SHORT px;
	SHORT py;
	SHORT pw;
	SHORT ph;
	UCHAR image[2];
} _TIM4;
typedef struct tag_CARD {
	UCHAR magic[2];
	UCHAR type;
	UCHAR blockEntry;
	UCHAR title[64];
	UCHAR reserve[28];
	UCHAR clut[32];
	UCHAR icon[3][128];
} _CARD;
typedef struct tagTCB2 {
	LONG Status;
	LONG Mode;
	LONG Zero;
	LONG At;
	LONG V0;
	LONG V1;
	LONG A0;
	LONG A1;
	LONG A2;
	LONG A3;
	LONG T0;
	LONG T1;
	LONG T2;
	LONG T3;
	LONG T4;
	LONG T5;
	LONG T6;
	LONG T7;
	LONG S0;
	LONG S1;
	LONG S2;
	LONG S3;
	LONG S4;
	LONG S5;
	LONG S6;
	LONG S7;
	LONG T8;
	LONG T9;
	LONG K0;
	LONG K1;
	LONG GP;
	LONG SP;
	LONG FP;
	LONG RA;
	LONG EPC;
	LONG MDHI;
	LONG MDLO;
	LONG SR;
	LONG CAUSE;
	LONG Dummy0;
	LONG Dummy1;
	LONG Dummy2;
	LONG System[6];
} TCB2;

// unsorted
typedef struct tagAT_TBL {
	SHORT Off_x;
	SHORT Off_y;
	SHORT Off_z;
	USHORT R;
	USHORT H;
	USHORT W;
} AT_TBL;
typedef struct tagAT_WORK {
	SHORT Off_x;
	SHORT Off_y;
	SHORT Off_z;
} AT_WORK;
typedef struct tagBOX {
	SHORT X;
	SHORT Z;
	USHORT W;
	USHORT D;
} BOX;
typedef struct tagAT_DATA {
	LONG X;
	LONG Y;
	LONG Z;
	USHORT W;
	USHORT D;
	SHORT Ofs_x;
	SHORT Ofs_z;
	SHORT Ofs_y;
	USHORT At_w;
	USHORT At_d;
	USHORT At_h;
	SHORT Atw_x;
	SHORT Atw_z;
} AT_DATA;
typedef struct tagSCA_DATA {
	SHORT X;
	SHORT Z;
	USHORT W;
	USHORT D;
	USHORT Id;
	USHORT Type;
	ULONG Floor;
} SCA_DATA;
typedef struct tagSCA_HEAD {
	SHORT Cx;
	SHORT Cz;
	ULONG Num;
	LONG Ceiling;
	ULONG Dummy;
} SCA_HEAD;
typedef struct tagITEM_WORK {
	UCHAR Id;
	UCHAR Num;
	UCHAR Size;
	UCHAR dummy;
} ITEM_WORK;
typedef struct tagMODEL_WORK {
	ULONG Attribute;
	ULONG* pTmd;
	ULONG* pPacket;
	ULONG* pTmd2;
	ULONG* pPacket2;
	SHORT M[3][3];
	LONG Pos_x;
	LONG Pos_y;
	LONG Pos_z;
	SHORT Old_x;
	SHORT Old_y;
	SHORT Old_z;
	SHORT Old_x2;
	SHORT Old_y2;
	SHORT Old_z2;
	USHORT dummy00;
	MATRIX Workm;
	SHORT Cdir_x;
	SHORT Cdir_y;
	SHORT Cdir_z;
	USHORT dummy01;
	ULONG Poly_rgb;
	ULONG* pSuper;
} MODEL_WORK;
typedef struct tagKAGE_WORK {
	SHORT Off_x;
	SHORT Off_z;
	SHORT Half_x;
	SHORT Half_z;
	SHORT Pos_x;
	SHORT Pos_y;
	SHORT Pos_z;
	UCHAR Be_flg;
	SHORT Dir_y;
	VECTOR* pPos;
	POLY_FT4 Prim[2];
} KAGE_WORK;
typedef struct tagKAGE_WORK9 {
	SHORT Off_x;
	SHORT Off_z;
	SHORT Half_x;
	SHORT Half_z;
	SHORT Pos_x;
	SHORT Pos_y;
	SHORT Pos_z;
	UCHAR Be_flg;
	SHORT Dir_y;
	VECTOR* pPos;
	KAGE_WORK* pKw_top;
} KAGE_WORK9;
typedef struct tagWOUND_WORK {
	UCHAR Be_flg;
	UCHAR Timer;
	UCHAR dummy00;
	UCHAR dummy01;
	DR_MOVE Prim;
} WOUND_WORK;
typedef struct tagBOM_WORK {
	UCHAR wk_no;
} BOM_WORK;
typedef struct tagPARTS_W {
	ULONG Be_flg;
	ULONG Attribute;
	ULONG* pTmd;
	ULONG* pPacket;
	ULONG* pTmd2;
	ULONG* pPacket2;
	SHORT M[3][3];
	LONG Pos_x;
	LONG Pos_y;
	LONG Pos_z;
	SHORT Old_x;
	SHORT Old_y;
	SHORT Old_z;
	SHORT Old_x2;
	SHORT Old_y2;
	SHORT Old_z2;
	USHORT dummy00;
	MATRIX Workm;
	SHORT Cdir_x;
	SHORT Cdir_y;
	SHORT Cdir_z;
	USHORT dummy01;
	ULONG Poly_rgb;
	ULONG* pSuper;
	UCHAR Parts_no;
	CHAR Timer1;
	CHAR Timer2;
	UCHAR Sabun_flg;
	SHORT Rot_x;
	SHORT Rot_y;
	SHORT Rot_z;
	SHORT Sabun_cnt0;
	SHORT Timer0;
	SHORT Timer3;
	ULONG* pSa_dat_head;
	SHORT Size_x;
	SHORT Size_y;
	SHORT Size_z;
	SHORT dummy03;
	ULONG* pOya_parts;
	SHORT Free[10];
} PARTS_W;
typedef struct tagPARTS_BOMB_FREE_WORK {
	SHORT V0_x;
	SHORT V0_y;
	SHORT V0_z;
	SHORT G;
	USHORT Cnt0;
	SHORT Offset_y;
	SHORT Gxz;
} PARTS_BOMB_FREE_WORK;
typedef struct tagPARTS_NECK_FREE_WORK {
	SHORT N_rot_y;
	SHORT N_rot_z;
	SHORT Add_dir_y;
	SHORT Add_dir_z;
	SHORT L_rot_y;
	SHORT L_rot_z;
	UCHAR Sce_add_dir_y;
	UCHAR Sce_add_dir_z;
} PARTS_NECK_FREE_WORK;
typedef struct tagPARTS_COLOR_CH_FREE_WORK {
	ULONG Color1;
	ULONG Color2;
} PARTS_COLOR_CH_FREE_WORK;
typedef struct tagPARTS_RYU_FREE_WORK {
	SHORT Gt3_y;
	SHORT Gt4_y;
	CHAR Gt3_gy;
	CHAR Gt4_gy;
	SHORT R_timer;
	UCHAR Down_flg;
} PARTS_RYU_FREE_WORK;
typedef struct tagOM_PARTS_WORK {
	ULONG be_flg;
	ULONG Attribute;
	ULONG* pTmd;
	ULONG* pPacket;
	ULONG* pTmd2;
	ULONG* pPacket2;
	SHORT M[3][3];
	LONG Pos_x;
	LONG Pos_y;
	LONG Pos_z;
	SHORT Old_x;
	SHORT Old_y;
	SHORT Old_z;
	SHORT Old_x2;
	SHORT Old_y2;
	SHORT Old_z2;
	USHORT dummy00;
	MATRIX Workm;
	SHORT Cdir_x;
	SHORT Cdir_y;
	SHORT Cdir_z;
	USHORT dummy01;
	ULONG Poly_rgb;
	ULONG* pSuper;
	UCHAR parts_no;
	CHAR timer;
	SHORT dummy03;
} OM_PARTS_WORK;
typedef struct tagOBJ_MODEL_WORK {
	ULONG Be_flg;
	UCHAR Routine_0;
	UCHAR Routine_1;
	UCHAR Routine_2;
	UCHAR Routine_3;
	UCHAR Id;
	UCHAR Sc_id;
	UCHAR At_obj_no;
	UCHAR At_sce_no;
	UCHAR Work_no;
	UCHAR At_em_no;
	USHORT At_em_flg;
	ULONG Attribute;
	ULONG* pTmd;
	ULONG* pPacket;
	ULONG* pTmd2;
	ULONG* pPacket2;
	SHORT M[3][3];
	LONG Pos_x;
	LONG Pos_y;
	LONG Pos_z;
	SHORT Old_x;
	SHORT Old_y;
	SHORT Old_z;
	SHORT Old_x2;
	SHORT Old_y2;
	SHORT Old_z2;
	USHORT dummy00;
	MATRIX Workm;
	SHORT Cdir_x;
	SHORT Cdir_y;
	SHORT Cdir_z;
	USHORT dummy01;
	ULONG Poly_rgb;
	ULONG* pSuper;
	AT_DATA Atd[4];
	UCHAR Tpage;
	UCHAR Clut;
	UCHAR nFloor;
	UCHAR Parts_num;
	ULONG* pKan_t_ptr;
	SHORT Water;
	USHORT Type;
	ULONG Sca_info;
	SCA_DATA* pSca_hit_data;
	SHORT Sca_old_x;
	SHORT Sca_old_z;
	MATRIX Super_matrix;
	SVECTOR Super_vector;
	UCHAR Push_cnt;
	UCHAR Free0;
	OM_PARTS_WORK* pSin_parts_ptr;
	PARTS_W Parts;
} OBJ_MODEL_WORK;
typedef struct tagPLAYER_WORK {
	ULONG Be_flg;
	UCHAR Routine_0;
	UCHAR Routine_1;
	UCHAR Routine_2;
	UCHAR Routine_3;
	UCHAR Id;
	UCHAR Sc_id;
	UCHAR At_obj_no;
	UCHAR At_sce_no;
	UCHAR Work_no;
	UCHAR At_em_no;
	USHORT At_em_flg;
	ULONG Attribute;
	ULONG* pTmd;
	ULONG* pPacket;
	ULONG* pTmd2;
	ULONG* pPacket2;
	SHORT M[3][3];
	LONG Pos_x;
	LONG Pos_y;
	LONG Pos_z;
	SHORT Old_x;
	SHORT Old_y;
	SHORT Old_z;
	SHORT Old_x2;
	SHORT Old_y2;
	SHORT Old_z2;
	USHORT dummy00;
	MATRIX Workm;
	SHORT Cdir_x;
	SHORT Cdir_y;
	SHORT Cdir_z;
	USHORT dummy01;
	ULONG Poly_rgb;
	ULONG* pSuper;
	AT_DATA Atd[4];
	UCHAR Tpage;
	UCHAR Clut;
	UCHAR nFloor;
	UCHAR Parts_num;
	ULONG* pKan_t_ptr;
	SHORT Water;
	USHORT Type;
	ULONG Sca_info;
	SCA_DATA* pSca_hit_data;
	SHORT Sca_old_x;
	SHORT Sca_old_z;
	MATRIX Super_matrix;
	SVECTOR Super_vector;
	SHORT Spd_x;
	SHORT Spd_y;
	SHORT Spd_z;
	UCHAR In_screen;
	UCHAR Model_Tex_type;
	UCHAR Move_no;
	UCHAR Move_cnt;
	UCHAR Hokan_flg;
	UCHAR Mplay_flg;
	UCHAR Root_ck_cnt;
	CHAR D_life_u;
	CHAR D_life_c;
	CHAR D_life_d;
	USHORT Status_flg;
	SHORT Life;
	SHORT Timer0;
	SHORT Timer1;
	SHORT Fpos_x;
	SHORT Fpos_y;
	SHORT Fpos_z;
	SHORT Max_life;
	SHORT Base_pos_x;
	SHORT Base_pos_y;
	SHORT Base_pos_z;
	CHAR Timer2;
	CHAR Timer3;
	ULONG* pKage_work;
	SHORT Neck_point_x;
	SHORT Neck_point_y;
	SHORT Neck_point_z;
	SHORT Size;
	ULONG* pNow_seq;
	ULONG* pSeq_t_ptr;
	ULONG* pSub0_kan_t_ptr;
	ULONG* pSub0_seq_t_ptr;
	ULONG* pSub1_kan_t_ptr;
	ULONG* pSub1_seq_t_ptr;
	ULONG* pRoom_kan_t_ptr;
	ULONG* pRoom_seq_t_ptr;
	PARTS_W* pSin_parts_ptr;
	ULONG* pParts_tmd;
	ULONG* pParts_packet;
	ULONG* pM_char_ptr;
	ULONG* pM_option_tmd;
	ULONG* pM_option_packet;
	ULONG* pM_Kage_work;
	ULONG* pEnemy_ptr;
	ULONG* pEnemy_neck;
	ULONG* pSa_dat;
	UCHAR Neck_flg;
	UCHAR Neck_no;
	SHORT Ground;
	SHORT Dest_x;
	SHORT Dest_z;
	USHORT Down_cnt;
	UCHAR At_hit_flg;
	UCHAR Set_flg_no;
	USHORT Sce_flg;
	UCHAR Em_set_flg;
	UCHAR Model_type;
	USHORT Damage_flg;
	UCHAR Damage_no;
	UCHAR Damage_cnt;
	SHORT Sce_free0;
	SHORT Sce_free1;
	SHORT Sce_free2;
	SHORT Sce_free3;
	SHORT Spl_flg;
	SHORT Parts0_pos_y;
	SCA_DATA* pT_xz;
	OBJ_MODEL_WORK* pOn_om;
	ULONG nOba;
	UCHAR Attw_timer;
	UCHAR Attw_seq_no;
	SHORT Eff_at_r;
	ULONG L_pl;
	ULONG L_spl;
	SHORT Dir_spl;
	CHAR Se_type;
	UCHAR Area_no;
	ULONG Tmp_routine;
	ULONG* pDamage_work;
	VOID* pTbefore_func;
	VOID* pTafter_func;
	SHORT Spd_base_x;
	SHORT Spd_base_y;
	SHORT Spd_base_z;
	SHORT Kage_ofs;
	USHORT Poison_timer;
	UCHAR Poison_down;
} PLAYER_WORK;
typedef struct tagSUBPLAY_WORK {
	ULONG Be_flg;
	UCHAR Routine_0;
	UCHAR Routine_1;
	UCHAR Routine_2;
	UCHAR Routine_3;
	UCHAR Id;
	UCHAR Sc_id;
	UCHAR At_obj_no;
	UCHAR At_sce_no;
	UCHAR Work_no;
	UCHAR At_em_no;
	USHORT At_em_flg;
	ULONG Attribute;
	ULONG* pTmd;
	ULONG* pPacket;
	ULONG* pTmd2;
	ULONG* pPacket2;
	SHORT M[3][3];
	LONG Pos_x;
	LONG Pos_y;
	LONG Pos_z;
	SHORT Old_x;
	SHORT Old_y;
	SHORT Old_z;
	SHORT Old_x2;
	SHORT Old_y2;
	SHORT Old_z2;
	USHORT dummy00;
	MATRIX Workm;
	SHORT Cdir_x;
	SHORT Cdir_y;
	SHORT Cdir_z;
	USHORT dummy01;
	ULONG Poly_rgb;
	ULONG* pSuper;
	AT_DATA Atd[4];
	UCHAR Tpage;
	UCHAR Clut;
	UCHAR nFloor;
	UCHAR Parts_num;
	ULONG* pKan_t_ptr;
	SHORT Water;
	USHORT Type;
	ULONG Sca_info;
	SCA_DATA* pSca_hit_data;
	SHORT Sca_old_x;
	SHORT Sca_old_z;
	MATRIX Super_matrix;
	SVECTOR Super_vector;
	SHORT Spd_x;
	SHORT Spd_y;
	SHORT Spd_z;
	UCHAR In_screen;
	UCHAR Model_Tex_type;
	UCHAR Move_no;
	UCHAR Move_cnt;
	UCHAR Hokan_flg;
	UCHAR Mplay_flg;
	UCHAR Root_ck_cnt;
	CHAR D_life_u;
	CHAR D_life_c;
	CHAR D_life_d;
	USHORT Status_flg;
	SHORT Life;
	SHORT Timer0;
	SHORT Timer1;
	SHORT Fpos_x;
	SHORT Fpos_y;
	SHORT Fpos_z;
	SHORT Max_life;
	SHORT Base_pos_x;
	SHORT Base_pos_y;
	SHORT Base_pos_z;
	CHAR Timer2;
	CHAR Timer3;
	ULONG* pKage_work;
	SHORT Neck_point_x;
	SHORT Neck_point_y;
	SHORT Neck_point_z;
	SHORT Size;
	ULONG* pNow_seq;
	ULONG* pSeq_t_ptr;
	ULONG* pSub0_kan_t_ptr;
	ULONG* pSub0_seq_t_ptr;
	ULONG* pSub1_kan_t_ptr;
	ULONG* pSub1_seq_t_ptr;
	ULONG* pRoom_kan_t_ptr;
	ULONG* pRoom_seq_t_ptr;
	PARTS_W* pSin_parts_ptr;
	ULONG* pParts_tmd;
	ULONG* pParts_packet;
	ULONG* pM_char_ptr;
	ULONG* pM_option_tmd;
	ULONG* pM_option_packet;
	ULONG* pM_Kage_work;
	ULONG* pEnemy_ptr;
	ULONG* pEnemy_neck;
	ULONG* pSa_dat;
	UCHAR Neck_flg;
	UCHAR Neck_no;
	SHORT Ground;
	SHORT Dest_x;
	SHORT Dest_z;
	USHORT Down_cnt;
	UCHAR At_hit_flg;
	UCHAR Set_flg_no;
	USHORT Sce_flg;
	UCHAR Em_set_flg;
	UCHAR Model_type;
	USHORT Damage_flg;
	UCHAR Damage_no;
	UCHAR Damage_cnt;
	SHORT Sce_free0;
	SHORT Sce_free1;
	SHORT Sce_free2;
	SHORT Sce_free3;
	SHORT Spl_flg;
	SHORT Parts0_pos_y;
	SCA_DATA* pT_xz;
	OBJ_MODEL_WORK* pOn_om;
	ULONG nOba;
	UCHAR Attw_timer;
	UCHAR Attw_seq_no;
	SHORT Eff_at_r;
	ULONG L_pl;
	ULONG L_spl;
	SHORT Dir_spl;
	CHAR Se_type;
	UCHAR Area_no;
	ULONG Tmp_routine;
	ULONG* pDamage_work;
	VOID* pTbefore_func;
	VOID* pTafter_func;
	SHORT Spd_base_x;
	SHORT Spd_base_y;
	SHORT Spd_base_z;
	SHORT Kage_ofs;
} SUBPLAY_WORK;
typedef struct tagENEMY_WORK {
	ULONG Be_flg;
	UCHAR Routine_0;
	UCHAR Routine_1;
	UCHAR Routine_2;
	UCHAR Routine_3;
	UCHAR Id;
	UCHAR Sc_id;
	UCHAR At_obj_no;
	UCHAR At_sce_no;
	UCHAR Work_no;
	UCHAR At_em_no;
	USHORT At_em_flg;
	ULONG Attribute;
	ULONG* pTmd;
	ULONG* pPacket;
	ULONG* pTmd2;
	ULONG* pPacket2;
	SHORT M[3][3];
	LONG Pos_x;
	LONG Pos_y;
	LONG Pos_z;
	SHORT Old_x;
	SHORT Old_y;
	SHORT Old_z;
	SHORT Old_x2;
	SHORT Old_y2;
	SHORT Old_z2;
	USHORT dummy00;
	MATRIX Workm;
	SHORT Cdir_x;
	SHORT Cdir_y;
	SHORT Cdir_z;
	USHORT dummy01;
	ULONG Poly_rgb;
	ULONG* pSuper;
	AT_DATA Atd[4];
	UCHAR Tpage;
	UCHAR Clut;
	UCHAR nFloor;
	UCHAR Parts_num;
	ULONG* pKan_t_ptr;
	SHORT Water;
	USHORT Type;
	ULONG Sca_info;
	SCA_DATA* pSca_hit_data;
	SHORT Sca_old_x;
	SHORT Sca_old_z;
	MATRIX Super_matrix;
	SVECTOR Super_vector;
	SHORT Spd_x;
	SHORT Spd_y;
	SHORT Spd_z;
	UCHAR In_screen;
	UCHAR Model_Tex_type;
	UCHAR Move_no;
	UCHAR Move_cnt;
	UCHAR Hokan_flg;
	UCHAR Mplay_flg;
	UCHAR Root_ck_cnt;
	CHAR D_life_u;
	CHAR D_life_c;
	CHAR D_life_d;
	USHORT Status_flg;
	SHORT Life;
	SHORT Timer0;
	SHORT Timer1;
	SHORT Fpos_x;
	SHORT Fpos_y;
	SHORT Fpos_z;
	SHORT Max_life;
	SHORT Base_pos_x;
	SHORT Base_pos_y;
	SHORT Base_pos_z;
	CHAR Timer2;
	CHAR Timer3;
	ULONG* pKage_work;
	SHORT Neck_point_x;
	SHORT Neck_point_y;
	SHORT Neck_point_z;
	SHORT Size;
	ULONG* pNow_seq;
	ULONG* pSeq_t_ptr;
	ULONG* pSub0_kan_t_ptr;
	ULONG* pSub0_seq_t_ptr;
	ULONG* pSub1_kan_t_ptr;
	ULONG* pSub1_seq_t_ptr;
	ULONG* pRoom_kan_t_ptr;
	ULONG* pRoom_seq_t_ptr;
	PARTS_W* pSin_parts_ptr;
	ULONG* pParts_tmd;
	ULONG* pParts_packet;
	ULONG* pM_char_ptr;
	ULONG* pM_option_tmd;
	ULONG* pM_option_packet;
	ULONG* pM_Kage_work;
	ULONG* pEnemy_ptr;
	ULONG* pEnemy_neck;
	ULONG* pSa_dat;
	UCHAR Neck_flg;
	UCHAR Neck_no;
	SHORT Ground;
	SHORT Dest_x;
	SHORT Dest_z;
	USHORT Down_cnt;
	UCHAR At_hit_flg;
	UCHAR Set_flg_no;
	USHORT Sce_flg;
	UCHAR Em_set_flg;
	UCHAR Model_type;
	USHORT Damage_flg;
	UCHAR Damage_no;
	UCHAR Damage_cnt;
	SHORT Sce_free0;
	SHORT Sce_free1;
	SHORT Sce_free2;
	SHORT Sce_free3;
	SHORT Spl_flg;
	SHORT Parts0_pos_y;
	SCA_DATA* pT_xz;
	OBJ_MODEL_WORK* pOn_om;
	ULONG nOba;
	UCHAR Attw_timer;
	UCHAR Attw_seq_no;
	SHORT Eff_at_r;
	ULONG L_pl;
	ULONG L_spl;
	SHORT Dir_spl;
	CHAR Se_type;
	UCHAR Area_no;
	ULONG Tmp_routine;
	ULONG* pDamage_work;
	VOID* pTbefore_func;
	VOID* pTafter_func;
	SHORT Spd_base_x;
	SHORT Spd_base_y;
	SHORT Spd_base_z;
	SHORT Kage_ofs;
	ULONG Free[12];
} ENEMY_WORK;
typedef struct tagVCUT {
	UCHAR Be_flg;
	UCHAR nFloor;
	UCHAR Fcut;
	UCHAR Tcut;
	SHORT Xz[4][2];
} VCUT;
typedef struct tagRCUT {
	USHORT end_flg;
	USHORT ViewR;
	LONG View_p[3];
	LONG View_r[3];
	ULONG* pSp;
} RCUT;
typedef struct tagLIGHT_CUT_DATA {
	UCHAR Mag;
	UCHAR Mode[3];
	UCHAR Col[3][3];
	UCHAR Ambient[3];
	SHORT Pos[3][3];
	USHORT L[3];
} LIGHT_CUT_DATA;
typedef struct tagMODEL_LINK_INFO {
	ULONG* Tim_adr;
	ULONG* Tmd_adr;
} MODEL_LINK_INFO;
typedef struct tagROOM_HEAD {
	UCHAR nSprite;
	UCHAR nCut;
	UCHAR nOmodel;
	UCHAR nItem;
	UCHAR nDoor;
	UCHAR nRoom_at;
	UCHAR Reverb_lv;
	UCHAR nSprite_max;
	ULONG* pEdt0;
	ULONG* pVh0;
	ULONG* pVb0;
	ULONG padd0;
	ULONG padd1;
	ULONG* pRbj_end;
	ULONG* pSca;
	RCUT* pRcut;
	VCUT* pVcut;
	LIGHT_CUT_DATA* pLight;
	MODEL_LINK_INFO* pOmodel;
	SHORT* pFloor;
	SHORT* pBlock;
	UCHAR* pMessage;
	UCHAR* pMessage_sub;
	ULONG* pScrl;
	SHORT* pScdx;
	SHORT* pScd;
	ULONG* pEsp_hed;
	ULONG* pEsp_end;
	ULONG* pEsp_tim;
	ULONG* pEsp_tim_end;
	ULONG* pRbj;
} ROOM_HEAD;
typedef struct tagROOM_WORK {
	UCHAR nSprite;
	UCHAR nCut;
	UCHAR nOmodel;
	UCHAR nItem;
	UCHAR nDoor;
	UCHAR nRoom_at;
	UCHAR Reverb_lv;
	UCHAR nSprite_max;
	ULONG* pEdt0;
	ULONG* pVh0;
	ULONG* pVb0;
	ULONG padd0;
	ULONG padd1;
	ULONG* pRbj_end;
	ULONG* pSca;
	RCUT* pRcut;
	VCUT* pVcut;
	LIGHT_CUT_DATA* pLight;
	MODEL_LINK_INFO* pOmodel;
	SHORT* pFloor;
	SHORT* pBlock;
	UCHAR* pMessage;
	UCHAR* pMessage_sub;
	ULONG* pScrl;
	SHORT* pScdx;
	SHORT* pScd;
	ULONG* pEsp_hed;
	ULONG* pEsp_end;
	ULONG* pEsp_tim;
	ULONG* pEsp_tim_end;
	ULONG* pRbj;
	RCUT Cut[1];
} ROOM_WORK;
typedef struct tagDVIEW {
	LONG X;
	LONG Y;
	LONG Z;
} DVIEW;
typedef struct tagSCE_AOT {
	UCHAR Id;
	UCHAR Type;
	UCHAR nFloor;
	UCHAR Super;
	SHORT X;
	SHORT Z;
	USHORT W;
	USHORT D;
	//USHORT Data[0];
	USHORT Data;
} SCE_AOT;
typedef struct tagSCE_AOT2 {
	UCHAR Id;
	UCHAR Type;
	UCHAR nFloor;
	UCHAR Super;
	SHORT Xz[4][2];
	//USHORT Data[0];
	USHORT Data;
} SCE_AOT2;
typedef struct tagSEARCH_AOT {
	UCHAR Id;
	UCHAR Type;
	USHORT Dummy_data;
	SHORT X;
	SHORT Z;
	USHORT W;
	USHORT D;
	USHORT Data0;
	USHORT Data1;
	USHORT Data2;
	USHORT Data3;
} SEARCH_AOT;
typedef struct tagIN_DOOR_WORK {
	SHORT Next_pos_x;
	SHORT Next_pos_y;
	SHORT Next_pos_z;
	SHORT Next_cdir_y;
	UCHAR Next_stage;
	UCHAR Next_room;
	UCHAR Next_cut;
	UCHAR Next_nfloor;
	UCHAR Dtex_type;
	UCHAR Door_type;
	UCHAR Knock_type;
	UCHAR Key_id;
	UCHAR Key_type;
	UCHAR Free;
} IN_DOOR_WORK;
typedef struct tagIN_DOOR_WORK2 {
	UCHAR Id;
	UCHAR Type;
	UCHAR nFloor;
	UCHAR Super;
	SHORT X;
	SHORT Z;
	USHORT W;
	USHORT D;
	IN_DOOR_WORK in_door;
} IN_DOOR_WORK2;
typedef struct tagSCE_AT_DATA {
	SHORT Data0;
	SHORT Data1;
	SHORT Data2;
} SCE_AT_DATA;
typedef struct tagSCE_ITEM_DATA {
	SHORT Data0;
	SHORT Data1;
	SHORT Data2;
	UCHAR Om_no;
	UCHAR Free;
} SCE_ITEM_DATA;
typedef struct tagDATA_POS {
	ULONG Offset;
	ULONG Size;
} DATA_POS;
typedef struct tagCORPSE_SAVE_WORK {
	UCHAR Id;
	UCHAR Size;
	UCHAR Ksize_x;
	UCHAR Ksize_z;
	UCHAR Cdir_y;
	CHAR Pos_x;
	CHAR Pos_y;
	CHAR Pos_z;
} CORPSE_SAVE_WORK;
typedef struct tagCORPSE_WORK {
	ULONG Attribute;
	ULONG* pTmd;
	ULONG* pPacket;
	ULONG* pTmd2;
	ULONG* pPacket2;
	SHORT M[3][3];
	LONG Pos_x;
	LONG Pos_y;
	LONG Pos_z;
	SHORT Old_x;
	SHORT Old_y;
	SHORT Old_z;
	SHORT Old_x2;
	SHORT Old_y2;
	SHORT Old_z2;
	USHORT dummy00;
	MATRIX Workm;
	SHORT Cdir_x;
	SHORT Cdir_y;
	SHORT Cdir_z;
	USHORT dummy01;
	ULONG Poly_rgb;
	ULONG* pSuper;
	ULONG Size;
} CORPSE_WORK;
typedef struct tagAF_MOVE_TBL {
	VOID* pFunc;
	ENEMY_WORK* pEwork;
} AF_MOVE_TBL;
typedef struct tagEM_BIN_INFO {
	USHORT Id;
	USHORT Use;
} EM_BIN_INFO;
typedef struct tagSAVE_DATA {
	//ULONG Save_data_head[0];
	_CARD Card_Head;
	//ULONG Save_data_head;
	ULONG Game_play_time;
	ULONG Front_play_time;
	UCHAR Max_item_num;
	UCHAR Stereo;
	UCHAR Pl_id;
	UCHAR Save_area;
	UCHAR Vol_Se;
	UCHAR Vol_Bgm;
	UCHAR Key_idx;
	UCHAR Pl_poison_down;
	USHORT Pl_poison_timer;
	USHORT Dummy16;
	ULONG Status_bak;
	UCHAR Equip_id;
	UCHAR Equip_no;
	SHORT Pl_life;
	USHORT Zonbi_cnt;
	USHORT Cure_cnt;
	USHORT Save_cnt;
	SHORT Pl_pos_x;
	SHORT Pl_pos_y;
	SHORT Pl_pos_z;
	ULONG Weapon_mugen;
	USHORT Bgm_tbl[142];
	SHORT F_atari;
	SHORT U_atari;
	SHORT Use_id;
	SHORT Get_id;
	SHORT Sce_work[8];
	SHORT DSce_work[4];
	SHORT Sce_tmp_work[8];
	SHORT Stage_no;
	SHORT Room_no;
	SHORT Cut_no;
	SHORT Room_no_old;
	SHORT Cut_no_old;
	SHORT Sce_random;
	SHORT Player_life;
	SHORT Sce_timer;
	SHORT Change_player;
	SHORT Def_em_set;
	SHORT Def_aot_set;
	SHORT Count_down_timer;
	ULONG Scenario_flg[8];
	ULONG Common_flg[8];
	ULONG Room_flg[2];
	ULONG Enemy_flg[8];
	ULONG Enemy_flg2[8];
	ULONG Item_flg[8];
	ULONG Item_flg2[4];
	ULONG Item_c_flg[7];
	ULONG Map_o_flg;
	ULONG Map_flg[4];
	ULONG Map_c_flg[2];
	ULONG Map_i_flg;
	ULONG Pri_be_flg[16][4];
	ULONG File_flg;
	ULONG Zapping_flg[2];
	ULONG Key_flg[2];
	ITEM_WORK Item_work[11];
	ITEM_WORK Item_boxwork[64];
	UCHAR File_tag_bk[24];
	USHORT Dummy0;
	UCHAR Dummy1[2];
	USHORT Dummy[2];
	ULONG ExData0[8];
	ULONG ExData1[4];
	ULONG ExData2[8];
	ULONG ExData3[25];
	//ULONG Zero_clr_end[0];
	//ULONG Zero_clr_end;
} SAVE_DATA;
typedef struct tagGLOBAL {
	ULONG Ot0[2][8];
	ULONG* pOt0;
	ULONG Ot1[2][1024];
	ULONG* pOt1;
	ULONG Ot2[2][16];
	ULONG* pOt2;
	UCHAR Padd_data[2][36];
	ULONG Padd;
	ULONG Padd_trg;
	USHORT Padd1;
	USHORT Padd1_trg;
	USHORT Padd2;
	USHORT Padd2_trg;
	ULONG Key;
	ULONG Key_trg;
	ULONG Key_old;
	ULONG Random;
	ULONG* pPl_emd_top;
	ULONG* pPl_pac_top;
	ROOM_WORK* pRoom;
	UCHAR* pFree_work_head;
	UCHAR* pFree_work;
	ENEMY_WORK* pEm;
	ENEMY_WORK** ppEnemy_end;
	VCUT* Cccut;
	VCUT* Cccut_next;
	VOID* pPldamage_Em[64];
	VOID* pPldie_Em[64];
	//UCHAR* pBs_check_sum[16];
	UCHAR* pBs_check_sum;
	USHORT* pXa_sector;
	ULONG* pOld_tim;
	ULONG* pOld_tmd;
	IN_DOOR_WORK* pSce_aot_on;
	ULONG* Sp_bak;
	SCE_AOT* Sce_aot[32];
	SCE_AOT* pAot_data;
	ULONG Game_time_offset;
	UCHAR Cbuf_id;
	UCHAR Sound_mode;
	UCHAR Bk_equip_no;
	UCHAR Bk_item_num;
	ITEM_WORK Bk_item_work[10];
	KAGE_WORK9 Kage9[5];
	KAGE_WORK Kage[50];
	//USHORT* pBs_size[16];
	USHORT* pBs_size;
	VOID* pFree;
	SCA_DATA* pSca_hit_data[32];
	ULONG Rbj_set_flg;
	ULONG System_flg;
	ULONG Unknown_Flg;
	UCHAR Window_no;
	UCHAR Mirror_flg;
	SHORT Mirror_pos;
	SHORT Mirror_max;
	SHORT Mirror_min;
	UCHAR Save_cursor;
	UCHAR Dummy8[3];
	VECTOR Wep_hit_pos;
	UCHAR ExData[64];
	//ULONG Zero_clr_head[0];
	ULONG Status_flg;
	ULONG Stop_flg;
	ULONG Use_flg[4];
	UCHAR Ctpage;
	UCHAR Cclut;
	UCHAR Next_cut_no;
	UCHAR Enemy_num;
	USHORT Room_enemy_flg;
	USHORT Room_player_flg;
	PLAYER_WORK Player;
	USHORT Pl_poison_timer;
	UCHAR Pl_poison_down;
	UCHAR unknown_byte;			// unreferenced?
	ENEMY_WORK* pEnemy[34];
	VOID* Em_move_tbl[96];
	VOID* Em_ov_mtbl[2][96];
	EM_BIN_INFO Em_bin_info[2];
	OBJ_MODEL_WORK Ob_model[32];
	OBJ_MODEL_WORK* pObj_work_end;
	SHORT Root_rot;
	SHORT Root_area_no;
	SHORT Root_dest_x;
	SHORT Root_dest_z;
	UCHAR nSce_aot;
	UCHAR Get_item_id;
	USHORT Pdemo_cnt;
	UCHAR Up_event_no;
	UCHAR Up_eve_rtn;
	UCHAR Up_key_rtn;
	UCHAR Up_wnd_rtn;
	USHORT Movie_Isrgb24;
	UCHAR Movie_id;
	UCHAR Ibox_Futa_no;
	SHORT Light3_pos_x;
	SHORT Light3_pos_y;
	SHORT Light3_pos_z;
	USHORT Light3_L;
	UCHAR Light3_col[4];
	UCHAR Memcard_rtn;
	UCHAR Front_func_rtn;
	UCHAR Back_func_rtn;
	UCHAR Em_se_set_no;
	ULONG Em_default;
	ULONG Unknown_Buffer[145];	// never referenced?
	SHORT Scrl_y;
	SHORT Scrl_flg;
	VOID* Front_func;
	VOID* Back_func;
	UCHAR Font_type;
	UCHAR Dummy8_3[3];
	SAVE_DATA SaveData;
};
typedef struct tagFADE {
	SHORT Kido;
	SHORT Add;
	UCHAR Hrate;
	UCHAR Mask_r;
	UCHAR Mask_g;
	UCHAR Mask_b;
	UCHAR Pri;
	TILE T[2];
	DR_MODE Dr_mode[2];
} FADE;
typedef struct tagDBUF {
	DRAWENV Draw;
	DISPENV Disp;
	DR_MODE Curtain_Dm;
	DR_MODE Pause_Dm;
	TILE Bg_clr;
} DBUF;
typedef struct tagMAIN {
	DBUF Db[2];
	DBUF* pDb;
	ULONG Pad_rmask;
	UCHAR Pad_wait_time;
	UCHAR Pad_repeat_time;
	UCHAR Vloop;
	UCHAR Bg_chg_flg;
	FADE Fade[4];
	UCHAR Unknown[32];		// alignment issue with FADE struct; this is padding
	RECT Rect;
	UCHAR Bg_mode;
	UCHAR Curtain_kido;
	UCHAR Key_idx;
	UCHAR Scrl_type;
	UCHAR Padoff_stop_flg[4][2];
	UCHAR Pollhost_flg;
};

// CD.C
typedef struct tagfpos {
	ULONG size;
	USHORT sector;
	UCHAR sec_high;
	UCHAR sum;
};
typedef struct tagCD {
	UCHAR Cd_rtn_no;
	UCHAR Xa_rtn_no;
	UCHAR Check_sum_flg;
	UCHAR Type;
	DslLOC Fpos;
	ULONG Fsize;
	ULONG Fsize_now;
	ULONG Fsize_read;
	ULONG Fsector;
	USHORT Fsector_num;
	USHORT Fsector_read;
	USHORT Fno;
	UCHAR Fsum;
	UCHAR Sum;
	ULONG Sum_cnt;
	ULONG Start_sector;
	ULONG Current_sector;
	ULONG End_sector;
	ULONG* Read_adr;
	UCHAR Use_mode;
	UCHAR Limit_break;
	UCHAR Time_ctr;
	UCHAR Status;
	UCHAR Result[12];
	UCHAR Param[4];
	UCHAR Work_buf[2048];
	DslFILTER Filter;
	DslATV Cdvol;
	ULONG Vol;
	ULONG* Buff_adr;
	UCHAR Read_ctr;
	UCHAR Write_ctr;
	UCHAR First_flg;
	UCHAR Stereo_flg;
	UCHAR Ring_status[12];
	USHORT Ring_size[12];
};

// CONFIG.C
typedef struct tagMODE {
	UCHAR Moji_tbl_top;
	UCHAR Moji_Nobj;
} MODE;
typedef struct tagP_XY {
	UCHAR Hot_x;
	UCHAR Hot_y;
	UCHAR W;
	UCHAR H;
} P_XY;
typedef struct tagCNF_SPR {
	UCHAR Be_flg;
	UCHAR Id;
	UCHAR Otz;
	UCHAR Chars;
	SHORT Ofs_x;
	SHORT Ofs_y;
} CNF_SPR;
typedef struct tagEDT_TABLE_WORK {
	UCHAR id_check;
	UCHAR pan_prog;
	UCHAR tone_pri;
	UCHAR monopoly;
} EDT_TABLE_WORK;
typedef struct tagSEQCTR {
	UCHAR Flg;
	UCHAR Ctrl;
	CHAR Seq_no;
	CHAR Vab_id;
	SndVolume Vol;
} SEQCTR;
typedef struct tagBGMCTR {
	UCHAR Main;
	UCHAR Sub;
} BGMCTR;
typedef struct tagSEENTRY {
	UCHAR Pri;
	UCHAR Vch;
} SEENTRY;
typedef struct tagREQUEST {
	USHORT Be_flg;
	USHORT SENo;
	SHORT Vid;
	SHORT Pno;
	SHORT Tno;
	SHORT Not;
	SHORT Fin;
	SHORT Vol;
	SHORT Vor;
	SHORT flg_3D;
	LONG Pos_x;
	LONG Pos_y;
	LONG Pos_z;
} REQUEST;

// DB_MENU.C
typedef struct tagGAME {
	UCHAR Doordemo_flg;
	UCHAR Plight_flg;
	UCHAR Plight_cnt;
	UCHAR Plight_col[3];
	ULONG Plight_bak[10];
	VECTOR Plight_pos;
	UCHAR Move_flg;
	UCHAR Rookie_cnt;
	ULONG Stop_bak;
};
typedef struct tagPDEMO {
	UCHAR Stage_no;
	UCHAR Room_no;
	UCHAR Cut_no;
	UCHAR Equip_id;
	UCHAR Equip_no;
	UCHAR Key_idx;
	UCHAR Player_id;
	UCHAR UNKNOWN;
	ITEM_WORK Item_wk[11];
	USHORT Pdemo_cnt;
	SHORT Pos_x;
	SHORT Pos_y;
	SHORT Pos_z;
	SHORT Cdir_y;
	USHORT Padd[900];
} PDEMO;
typedef struct tagFLAG_DISP_TBL {
	USHORT X;
	UCHAR Y;
	UCHAR Num;
	ULONG* Adr;
} FLAG_DISP_TBL;
typedef struct tagROOM_POS {
	USHORT Be_flg;
	SHORT X;
	SHORT Z;
	USHORT nFloor;
	UCHAR Name[17];
} ROOM_POS;
typedef struct tagDB_WORK {
	UCHAR Menu_flg;
	UCHAR Menu_no;
	UCHAR J_stage;
	UCHAR Xa_no;
	UCHAR Xa_cnt_no;
	UCHAR Disp_at_flg;
	UCHAR Disp_shori_flg;
	UCHAR Disp_monosashi_flg;
	UCHAR Est_test_flg;
	UCHAR Est_test_num;
	USHORT Xa_cnt[8];
	UCHAR J_room[7];
	USHORT Wnd_col;
	USHORT Wnd_x;
	USHORT Wnd_y;
	USHORT Wnd_w;
	USHORT Wnd_h;
	TILE Fade[2];
	DR_MODE Dm[2];
	ULONG Mem[16];
	USHORT S_cnt[16];
	UCHAR R_no;
} DB_WORK;
typedef struct tagUTILS {
	UCHAR Menu_flg;
	UCHAR R_no;
	UCHAR Menu_no;
	UCHAR Dummy;
	TILE Fade[2];
	DR_MODE Dm[2];
} UTILS;
typedef struct tagFLG_VIEW {
	UCHAR CLine;
	UCHAR R_no;
	CHAR Pos_x;
	CHAR Pos_y;
	CHAR Flg_no;
	UCHAR Wait_ctr;
	UCHAR Repeat_ctr;
} FLG_VIEW;
typedef struct tagVIEW_CTR {
	UCHAR R_no;
	CHAR Mode;
	UCHAR Mode_change;
	UCHAR Lock_on;
	UCHAR Col_chg_on;
	UCHAR Col_chg_mode;
	ENEMY_WORK* pE;
	RCUT Rcut_wk;
} VIEW_CTR;

// DIEDEMO.C
typedef struct tagSSEQUENCE {
	UCHAR pGp;
	UCHAR nSpr;
	UCHAR Time;
	UCHAR Twh;
	SHORT Hotx;
	SHORT Hoty;
} SSEQUENCE;
typedef struct tagSPRITEGp {
	UCHAR U;
	UCHAR V;
	CHAR Ofsx;
	CHAR Ofsy;
} SPRITEGp;
typedef struct tagMSEQUENCE {
	UCHAR Routine0;
	UCHAR Routine1;
	UCHAR Free0;
	UCHAR Free1;
	USHORT Transx;
	USHORT Transy;
	CHAR Add_x;
	CHAR Add_y;
	CHAR Add_z;
	UCHAR Free2;
	SHORT Speed_x;
	SHORT Speed_y;
	SHORT Speed_z;
	USHORT Free3;
	USHORT Free4;
	USHORT Free5;
} MSEQUENCE;
typedef struct tagESPECT_BASE {
	USHORT Be_flg;
	UCHAR Wk_no;
	CHAR Padd0;
	UCHAR Id;
	UCHAR Id2;
	UCHAR Type;
	UCHAR Mov_cnt;
	UCHAR Anm_time;
	UCHAR Anm_cnt;
	SHORT DirY;
	SHORT Mov_x;
	SHORT Mov_y;
	SHORT Mov_z;
	USHORT Tpage;
	SHORT Hot_x;
	SHORT Hot_y;
	SHORT Hot_z;
	USHORT Clut;
	SHORT Pos_x;
	SHORT Pos_y;
	SHORT Pos_z;
	USHORT Mag;
	SHORT Old_x;
	SHORT Old_y;
	SHORT Old_z;
	SHORT Padd1;
	SHORT Cdir_x;
	SHORT Cdir_y;
	SHORT Cdir_z;
	SHORT Padd2;
	SHORT m[3][3];
	SHORT Padd3;
	LONG t[3];
	MATRIX* pMat;
	SSEQUENCE* pAnmseq;
	SPRITEGp* pSprg;
	MSEQUENCE* pMoveseq;
} ESPECT_BASE;
typedef struct tagESP_WORK {
	UCHAR Routine0;
	UCHAR Routine1;
	UCHAR Free0;
	UCHAR Free1;
	USHORT Transx;
	USHORT Transy;
	CHAR Add_x;
	CHAR Add_y;
	CHAR Add_z;
	UCHAR Free2;
	SHORT Speed_x;
	SHORT Speed_y;
	SHORT Speed_z;
	USHORT Free3;
	USHORT Free4;
	USHORT Free5;
	USHORT Be_flg;
	UCHAR Wk_no;
	CHAR Padd0;
	UCHAR Id;
	UCHAR Id2;
	UCHAR Type;
	UCHAR Mov_cnt;
	UCHAR Anm_time;
	UCHAR Anm_cnt;
	SHORT DirY;
	SHORT Mov_x;
	SHORT Mov_y;
	SHORT Mov_z;
	USHORT Tpage;
	SHORT Hot_x;
	SHORT Hot_y;
	SHORT Hot_z;
	USHORT Clut;
	SHORT Pos_x;
	SHORT Pos_y;
	SHORT Pos_z;
	USHORT Mag;
	SHORT Old_x;
	SHORT Old_y;
	SHORT Old_z;
	SHORT Padd1;
	SHORT Cdir_x;
	SHORT Cdir_y;
	SHORT Cdir_z;
	SHORT Padd2;
	SHORT m[3][3];
	SHORT Padd3;
	LONG t[3];
	MATRIX* pMat;
	SSEQUENCE* pAnmseq;
	SPRITEGp* pSprg;
	MSEQUENCE* pMoveseq;
} ESP_WORK;
typedef struct tagCUTINFO {
	LONG Radius;
	LONG P_radius;
	SHORT Addpos;
	SHORT Prad;
	SHORT P_theta;
	SHORT Mrad;
	SHORT M_theta;
	SHORT P_viewp;
	USHORT Wait_ctr;
	SHORT R_obj;
	SHORT R_ptr;
	SHORT Free;
} CUTINFO;
typedef struct tagDIEDEMO {
	SHORT Addpos;
	USHORT Rno;
	SHORT Ctr;
	SHORT Free;
	RCUT Rcut;
	LONG Radius;
	SHORT Theta;
	USHORT Prad;
	LONG P_radius;
	UCHAR Free2;
	UCHAR S_trans_flg;
	USHORT Daddpos;
	CUTINFO* pCutinfo;
} DIEDEMO;
typedef struct tagDIESPR {
	USHORT Rno;
	SHORT Ctr;
	UCHAR Addpos;
	UCHAR Addctr;
	SHORT Ctr2;
	POLY_GT4 Pgt4[2][256];
	SVECTOR Pos[17][17];
	SHORT Dist[17][17];
	POLY_FT4 Blood[3][2][128];
	SHORT Move_start;
	SHORT Free;
} DIESPR;

// DOOR.C
typedef struct tagTASK {
	USHORT Tcb_status;
	SHORT Tcb_sleep_ctr;
	LONG* pTcb_pc;
	ULONG Tcb_th;
	TCB2* pTcb;
	ULONG Tcb_init_sp;
	EXEC Tcb_exec;
	ULONG* pPc;
	USHORT R_no[6];
	SHORT Ctr[8];
	UCHAR Free[16];
} TASK;
typedef struct tagMONITOR {
	ULONG Gp;
	TASK Task[3];
	TASK* pCtcb;
} MONITOR;
typedef struct tagMOJIDISP {
	DR_MODE Moji_mode[2][16];
	SPRT Prim_sprt[2][256];
	SPRT_8 Prim_sprt_8[2][128];
	SPRT* pSprt_keep;
	SPRT_8* pSprt_8_keep;
	UCHAR unknown[8192];
	UCHAR Moji_buff[768];
	UCHAR* pBuff_ptr;
	UCHAR Mess_flg;
	UCHAR Mess_r_no0;
	UCHAR Mess_type;
	UCHAR Mess_item;
	UCHAR Mess_wait;
	CHAR Mess_time;
	UCHAR Mcol_init;
	UCHAR Mcol_next;
	UCHAR* Mess_top;
	UCHAR* Mess_end;
	UCHAR* Mess_svp;
	USHORT Mess_pos_x;
	USHORT Mess_pos_y;
	USHORT Pos_x_def;
	USHORT Pos_y_def;
	USHORT Mess_attr;
	CHAR Timer;
	UCHAR dummy0;
	ULONG Stop_keep;
	ULONG Stop_data;
} MOJIDISP;
typedef struct tagKO_TBL {
	USHORT ko_num;
	USHORT ko_t_off;
} KO_TBL;
typedef struct tagJOINT_P {
	UCHAR Move_no;
	UCHAR Move_cnt;
	UCHAR Hokan_flg;
	UCHAR P0_parts_no;
	ULONG On_parts_flg;
	MATRIX P0_m;
	SVECTOR P0_sv;
} JOINT_P;
typedef struct tagSCE_TASK {
	UCHAR Routine0;
	UCHAR Status;
	CHAR Sub_ctr;
	UCHAR Task_level;
	CHAR Ifel_ctr[4];
	CHAR Loop_ctr[4];
	CHAR Loop_if_class[4][4];
	UCHAR* Data;
	UCHAR* Lstack[4][4];
	UCHAR* Lbreak[4][4];
	SHORT Lcnt[4][4];
	ULONG Stack[4][8];
	ULONG* pS_SP;
	UCHAR* Ret_addr[4];
	ENEMY_WORK* pWork;
	SHORT Spd_x;
	SHORT Spd_y;
	SHORT Spd_z;
	SHORT Dspd_x;
	SHORT Dspd_y;
	SHORT Dspd_z;
	SHORT Aspd_x;
	SHORT Aspd_y;
	SHORT Aspd_z;
	SHORT Adspd_x;
	SHORT Adspd_y;
	SHORT Adspd_z;
	ULONG R_no_bak;
} SCE_TASK;
typedef struct tagSCENARIO {
	SCE_TASK Sce_task[14];
	ULONG Random_base;
	UCHAR* pCScd;
	ENEMY_WORK* pC_em;
	POLY_GT4* pMizu_div;
	UCHAR Type;
	UCHAR Cut_old;
	UCHAR C_id;
	UCHAR C_model_type;
	UCHAR C_kind;
	UCHAR Mizu_div_max;
	UCHAR Mizu_div_ctr;
	UCHAR Rbj_reset_flg;
	UCHAR Se_tmp0;
	UCHAR Se_tmp1;
	UCHAR Se_vol;
} SCENARIO;
typedef struct tagSCE_EM_SET_WORK {
	UCHAR Com;
	UCHAR Nop;
	CHAR Em_no;
	UCHAR Id;
	USHORT Type;
	UCHAR nFloor;
	UCHAR Sound_flg;
	UCHAR Model_type;
	UCHAR Em_set_flg;
	SHORT Pos_x;
	SHORT Pos_y;
	SHORT Pos_z;
	SHORT Cdir_y;
	SHORT Motion;
	SHORT Ctr_flg;
} SCE_EM_SET_WORK;
typedef struct tagDOOR_WORK {
	ULONG Be_flg;
	UCHAR Routine_0;
	UCHAR Routine_1;
	UCHAR Routine_2;
	UCHAR Routine_3;
	UCHAR Id;
	UCHAR Sc_id;
	UCHAR At_obj_no;
	UCHAR At_sce_no;
	UCHAR Work_no;
	UCHAR At_em_no;
	USHORT At_em_flg;
	ULONG Attribute;
	ULONG* pTmd;
	ULONG* pPacket;
	ULONG* pTmd2;
	ULONG* pPacket2;
	SHORT M[3][3];
	LONG Pos_x;
	LONG Pos_y;
	LONG Pos_z;
	SHORT Old_x;
	SHORT Old_y;
	SHORT Old_z;
	SHORT Old_x2;
	SHORT Old_y2;
	SHORT Old_z2;
	USHORT dummy00;
	MATRIX Workm;
	SHORT Cdir_x;
	SHORT Cdir_y;
	SHORT Cdir_z;
	USHORT dummy01;
	ULONG Poly_rgb;
	ULONG* pSuper;
	AT_DATA Atd[4];
	UCHAR Tpage;
	UCHAR Clut;
	UCHAR nFloor;
	UCHAR Parts_num;
	ULONG* pKan_t_ptr;
	SHORT Water;
	USHORT Type;
	ULONG Sca_info;
	SCA_DATA* pSca_hit_data;
	SHORT Sca_old_x;
	SHORT Sca_old_z;
	MATRIX Super_matrix;
	SVECTOR Super_vector;
	USHORT Attribute2;
	USHORT Model_no;
	USHORT Free;
	USHORT Free2;
} DOOR_WORK;
typedef struct tagDOOR {
	ULONG* pPrepacket;
	ULONG* pTmd_adr;
	POLY_GT3* pPackettop;
	DIVPOLYGON3 Divp;
	ULONG* pEdh_offset;
	ULONG* pVb_offset;
	USHORT Ctr1;
	USHORT Ctr2;
	SVECTOR V0;
	SVECTOR V1;
	SVECTOR V2;
	USHORT Sound_flg;
	USHORT Div_max;
} DOOR;
typedef struct tagDOOR_INFO {
	USHORT Sound_size;
	USHORT Data_size;
	ULONG Sector_offset;
	UCHAR Sound_sum;
	UCHAR Data_sum;
	USHORT Free;
} DOOR_INFO;

// EM10_S0.C
typedef struct tagATTACK_WORK {
	SHORT Off_x;
	SHORT Off_z;
	SHORT R_x;
	SHORT Half_R_z;
} ATTACK_WORK;
typedef struct tagATTACK_WORK3 {
	UCHAR Status;
	UCHAR Ck_kin;
	UCHAR Ck_tyu;
	UCHAR Ck_en;
	SHORT Off0_x;
	SHORT Off0_z;
	SHORT R0_x;
	SHORT Half0_R_z;
	SHORT Off1_x;
	SHORT Off1_z;
	SHORT R1_x;
	SHORT Half1_R_z;
	SHORT Off2_x;
	SHORT Off2_z;
	SHORT R2_x;
	SHORT Half2_R_z;
} ATTACK_WORK3;
typedef struct tagATTACK_SEQ {
	UCHAR Tbl_no;
	UCHAR Timer;
} ATTACK_SEQ;
typedef struct tagATTACK_WEAPON_TBL {
	ATTACK_WORK3* At_work_top;
	ATTACK_SEQ* At_seq_top;
} ATTACK_WEAPON_TBL;
typedef struct tagATTACK_WEAPON_EM_REN {
	SHORT Tyu_ue;
	SHORT Tyu_ge;
} ATTACK_WEAPON_EM_REN;
typedef struct tagATTACK_WEAPON_EM {
	ULONG Damage;
	ULONG SubDamage;
	SHORT Jyo_ue;
	SHORT Jyo_ge;
	SHORT Tyu_ue;
	SHORT Tyu_ge;
	SHORT Ge_ue;
	SHORT Ge_ge;
} ATTACK_WEAPON_EM;
typedef struct tagPL_MAG_TBL {
	UCHAR Parts_no;
	CHAR V_y;
	UCHAR V_xz;
	UCHAR Flg;
	SHORT Dir;
} PL_MAG_TBL;
typedef struct tagATTACK_PRIM_F4 {
	PRIM_F4 Pac0[2];
	PRIM_F4 Pac1[2];
	PRIM_F4 Pac2[2];
} ATTACK_PRIM_F4;
typedef struct tagPARTS_BOW_FREE_WORK {
	UCHAR R_0;
	UCHAR Hit_no;
	SHORT Dir_y;
	ENEMY_WORK* pAe;
} PARTS_BOW_FREE_WORK;
typedef struct tagBOW_HIT_PARTS {
	UCHAR Hit0_parts;
	UCHAR Hit0_ren4;
	UCHAR Hit1_parts;
	UCHAR Hit1_ren4;
	UCHAR Hit2_parts;
	UCHAR Hit2_ren4;
	UCHAR Hit3_parts;
	UCHAR Hit3_ren4;
} BOW_HIT_PARTS;
typedef struct tagSPL_FREE_WORK {
	SHORT Dest_x;
	SHORT Dest_z;
	USHORT Move_flg;
	UCHAR Spl_dummy000;
	UCHAR Spl_dummy001;
	ULONG ll;
	ULONG em_ll;
	ULONG Spl_dummy00;
	ULONG Spl_dummy01;
	ULONG Spl_dummy02;
	ULONG Spl_dummy03;
} SPL_FREE_WORK;
typedef struct tagEM10_FREE {
	UCHAR Walk_no;
	UCHAR Kahan_r0;
	USHORT Etc_flg;
	UCHAR K_move_no;
	UCHAR K_move_cnt;
	UCHAR K_hokan_flg;
	UCHAR K_timer0;
	SHORT K_dir_y;
	UCHAR Dm_r0;
	CHAR Dm_cnt;
	ULONG* pK_kage;
	ULONG Old_r;
	ULONG Next_r;
	UCHAR Hanare_cnt;
	UCHAR Die_r0;
	SHORT Ground;
	UCHAR Mot_dm;
	UCHAR Rnd_area;
	USHORT A_timer;
	UCHAR W_timer;
	UCHAR Dam_s;
	UCHAR Fire_c;
	UCHAR Ude_down;
	UCHAR Ude_down_r0;
	UCHAR Ude_flg;
	SHORT Dummy;
	SHORT U_pos_x;
	SHORT U_pos_y;
	SHORT U_pos_z;
} EM10_FREE;

// EM20.C
typedef struct tagEM20_FREE {
	UCHAR Area_keep;
	UCHAR Jump_flg;
	SHORT Stress;
	UCHAR Spin_flg;
	UCHAR Fix_cnt;
	UCHAR Hit_type;
	UCHAR Blood;
	UCHAR Em_next;
	UCHAR Kage_routine;
	UCHAR Bang_ok;
	UCHAR Combo_flg;
	SHORT Dash_turn;
	UCHAR Kill_ok;
	UCHAR Target_pl;
	SHORT Yori_fx;
	SHORT Yori_fz;
	UCHAR No_hit;
	UCHAR House_flg;
	UCHAR Outside;
	UCHAR No_atck;
	UCHAR Stay;
	UCHAR No_voice;
	UCHAR No_fire;
} EM20_FREE;
typedef struct tagEM20_BLOOD_TBL {
	UCHAR Id;
	UCHAR Type;
	USHORT Dir;
	USHORT Zoom;
} EM20_BLOOD_TBL;

// EM21.C
typedef struct tagEM21F {
	UCHAR Tmp;
	UCHAR Cnt;
	UCHAR Cnt2;
	UCHAR Cnt3;
	UCHAR Na_cnt;
	UCHAR Sca_cnt;
	UCHAR Obj_cnt;
	UCHAR Idly_flg;
	UCHAR Idly_cnt;
	CHAR Pl_dead_cnt;
	USHORT Dummy1;
	SHORT Tmp_0;
	SHORT Tmp_1;
	SHORT Tmp_2;
	USHORT Flg;
	ULONG Padd1;
	ULONG Padd2;
	ULONG Padd3;
	ULONG Padd4;
} EM21F;

// EM22.C
typedef struct tagBLOOD_DATA {
	SHORT Pos_x;
	SHORT Pos_y;
	SHORT Pos_z;
	SHORT Parts_no;
} BLOOD_DATA;
typedef struct tagWEP_BLOOD {
	UCHAR Num;
	UCHAR Ofs_f;
	UCHAR Ofs_b;
	UCHAR Range;
	UCHAR Id;
	UCHAR Type;
	USHORT Zoom;
} WEP_BLOOD;
typedef struct tagDM_ESP2 {
	SHORT X;
	SHORT Y;
	SHORT Z;
	SHORT Dir_y;
	USHORT Parts;
	USHORT Next_flg;
} DM_ESP2;
typedef struct tagEM22_FREE {
	UCHAR Wall_dir_new;
	UCHAR Sence_lv;
	UCHAR Tongue_Rno;
	UCHAR Kage_Rno;
	USHORT Kage_x;
	USHORT Kage_z;
	SCA_DATA* pSca_dat;
	SCA_DATA* pDest_wall;
	ENEMY_WORK* pTarget;
	USHORT Attribute;
	UCHAR At_cnt;
	UCHAR Wep_no;
	UCHAR Wall_at;
	UCHAR Wep_bak;
	UCHAR Gun_area;
	UCHAR Dm_eff_rtn;
	SHORT Dest_x;
	SHORT Dest_y;
	SHORT Dest_z;
	SHORT Sca_ofs;
	VOID* Dm_eff_func;
} EM22_FREE;

// EM23.C
typedef struct tagEM23_FREE {
	USHORT Attribute;
	UCHAR Turn_cnt;
	UCHAR Blood_rtn;
	SHORT Def_x;
	SHORT Def_z;
	ULONG Rno_bak;
	CHAR Mouse_rtn;
	CHAR Turn_flg;
	UCHAR Gget_rtn;
	UCHAR Earthquake_ctr;
	SHORT Mouse_ctr;
	SHORT Neck_ctr;
	UCHAR Stumble_cnt;
	UCHAR Head_rtn;
	UCHAR Dm_timer;
	UCHAR Dm_flg;
	UCHAR Dm_rtn_type;
	UCHAR Dm_eff_rtn;
	UCHAR Roar_cnt;
	UCHAR Rensha_cnt;
	VOID* Dm_eff_func;
} EM23_FREE;
typedef struct tagEM23_ESP {
	SHORT X;
	SHORT Y;
	SHORT Z;
	SHORT Dir_y;
	ULONG Parts;
} EM23_ESP;
typedef struct tagEM23_WEP_ESP {
	UCHAR Id;
	UCHAR Type;
	USHORT Zoom;
} EM23_WEP_ESP;

// EM25.C
typedef struct tagEM25_FREE {
	SHORT at_cnt;
	SHORT Flip;
	SHORT sch_flg;
	SHORT sc_timer;
	UCHAR Foot_flg;
	UCHAR Foot_cnt;
	UCHAR Place;
	UCHAR Jump_flg;
	UCHAR Die_weak;
	UCHAR Kage_routine;
	SHORT Sc_dir;
	SCA_DATA* pWall;
	LONG Down_point;
	UCHAR Wall_pos;
	UCHAR Em_next;
	UCHAR Nowall_cnt;
	UCHAR Rno1_bak;
	UCHAR Rno2_bak;
	UCHAR Rno3_bak;
	UCHAR Cont_flg;
	UCHAR Target_pl;
	UCHAR Foot_se;
	UCHAR No_redie;
	CHAR Hitline;
	UCHAR Spark_cnt;
	UCHAR Dmg_type;
	UCHAR No_fire;
	UCHAR Water_rno;
} EM25_FREE;
typedef struct tagEM25_BLOOD_TBL {
	UCHAR Id;
	UCHAR Type;
	USHORT Dir;
	USHORT Zoom;
} EM25_BLOOD_TBL;

// EM26.C
typedef struct tagEM26_FREE {
	PLAYER_WORK* pTarget_pl;
	SHORT No_catch_cnt;
	CHAR kasakasarot;
	CHAR Catch_dir;
	UCHAR First_catch;
	UCHAR Atck_flg;
	UCHAR Jump_flg;
	CHAR Chase_rot;
} EM26_FREE;
typedef struct tagEM26_BLOOD_TBL {
	UCHAR Id;
	UCHAR Type;
	USHORT Dir;
	USHORT Zoom;
} EM26_BLOOD_TBL;
typedef struct tagEM26_CATCH_TBL {
	USHORT Id;
	SHORT fx;
	SHORT fy;
	SHORT fz;
} EM26_CATCH_TBL;

// EM27.C
typedef struct tagEM27_FREE {
	SHORT Drf_0;
	SHORT Drf_1;
	SHORT Drf_2;
	SHORT Drf_3;
	SHORT Drf_4;
	SHORT Drf_5;
	SHORT Drf_6;
	SHORT Drf_7;
	SHORT Dir_h;
	SHORT Hajiki;
	USHORT Etc_flg;
} EM27_FREE;

// EM28.C
typedef struct tagEM28_FREE {
	USHORT Ko_timer;
	USHORT Re_timer;
	UCHAR Kudure_t;
	UCHAR At_timer;
	USHORT Etc_flg;
	CHAR Ude_life;
	UCHAR Iki_timer;
	CHAR Dm_cnt;
	UCHAR Mg_rout0;
	CHAR Mg_timer0;
	SHORT Mg_dir;
	UCHAR Fire_c;
} EM28_FREE;
typedef struct tagEM28_P_FREE {
	UCHAR _R0;
} EM28_P_FREE;

// EM29.C
typedef struct tagEM29_FREE {
	SHORT R;
	SHORT Spd_r;
	SHORT Dest_dir;
	USHORT Attribute;
	SHORT Dest_x;
	SHORT Dest_y;
	SHORT Dest_z;
	UCHAR Target_no;
	UCHAR Foot_die_flg;
	UCHAR Spark_timer;
} EM29_FREE;
typedef struct tagHOLD_TBL {
	USHORT Parts_no;
	SHORT Pos_x;
	SHORT Pos_y;
	SHORT Pos_z;
	SHORT Dir_x;
	SHORT Dir_y;
	SHORT Dir_z;
} HOLD_TBL;

// EM2A.C
typedef struct tagEM2A_FREE {
	ULONG Rno_bak;
	SHORT Pold_x;
	SHORT Pold_z;
	VOID* Dm_eff_func;
	USHORT Attribute;
	USHORT Old_dis;
	UCHAR Dm_eff_rtn;
	UCHAR Dm_wep;
	UCHAR LRpunch_wait;
	UCHAR Cfpunch_wait;
} EM2A_FREE;
typedef struct tagDM_ESP {
	SHORT X;
	SHORT Y;
	SHORT Z;
	SHORT Dir_y;
	ULONG Parts;
} DM_ESP;
typedef struct tagDM_ESP3 {
	UCHAR Id;
	UCHAR Type;
	UCHAR Parts;
	UCHAR Next_flg;
	SHORT X;
	SHORT Y;
	SHORT Z;
	SHORT Dir_y;
} DM_ESP3;
typedef struct tagDM_WEP_ESP {
	UCHAR Id;
	UCHAR Type;
	USHORT Zoom;
} DM_WEP_ESP;

// EM2B.C
typedef struct tagEM2B_FREE {
	ULONG Rno_bak;
	USHORT Attribute;
	CHAR Breast_Rno;
	CHAR Dm_wep;
	VOID* Dm_eff_func;
	VOID* At_eff_func;
	UCHAR Dm_eff_rtn;
	CHAR At_eff_rtn;
	CHAR At_wait;
	CHAR Old_dir;
	SHORT Pold_x;
	SHORT Pold_z;
	SHORT Bak_x;
	SHORT Bak_z;
	USHORT Escape_cnt;
} EM2B_FREE;
typedef struct tagPARTS_FLY {
	USHORT Parts_no;
	SHORT Dir_y;
	SHORT Spd;
	SHORT Add;
	SHORT Spd_y;
	SHORT Timer;
	SHORT Cdirspd;
	SHORT Cdiradd;
	SHORT Cflg;
	SHORT Smoke_flg;
} PARTS_FLY;

// EM2D.C
typedef struct tagEM2d_FREE {
	SHORT Dir_y;
	LONG Pos_x;
	LONG Pos_z;
	SHORT Se_first;
} EM2d_FREE;

// EM2F.C
typedef struct tagEM2F_FREE {
	UCHAR Hand_no;
	UCHAR Att;
	SHORT Set_fx;
	SHORT Set_fy;
	SHORT Set_fz;
	SHORT Set_dir;
	UCHAR No_atck;
	UCHAR Act_type;
	SHORT Base_dir;
	SHORT Set_dirz;
	UCHAR On_flg;
	UCHAR Hit_flg;
	UCHAR Col_flg;
	UCHAR Sick_flg;
	UCHAR Set60A;
	UCHAR Rno2_stk;
	UCHAR Rno3_stk;
	UCHAR Em_keep;
} EM2F_FREE;

// EM2E.C
typedef struct tagEM2E_FREE {
	UCHAR Target_pl;
	UCHAR Twins_flg;
	UCHAR Nomove_flg;
	UCHAR Atck_type;
	UCHAR Flower_flg;
	UCHAR Dmg_point;
	SHORT Flower_rate;
	UCHAR No_atck;
	UCHAR No_catch;
	UCHAR No_poison;
	UCHAR Stick_cnt;
	UCHAR Em_next;
	UCHAR Hand_req;
	UCHAR Hand_rest;
	UCHAR Req_att;
	SHORT Life_half;
	UCHAR Flower_r0;
	UCHAR Flower_r1;
	UCHAR Flower_free;
	UCHAR Stay;
	UCHAR Rno1_stk;
	UCHAR Rno2_stk;
	UCHAR Rno3_stk;
	UCHAR Rev_flg;
	UCHAR No_rev;
	UCHAR Kage_routine;
	ENEMY_WORK* pTg_em;
	USHORT Die_cnt;
	UCHAR No_atck2[2];
	UCHAR Biri_cnt;
	UCHAR Sick_flg;
	UCHAR Poison_type;
	UCHAR No_fire;
} EM2E_FREE;
typedef struct tagEM2E_BLOOD_TBL {
	UCHAR Id;
	UCHAR Type;
	USHORT Pal;
	USHORT Zoom;
} EM2E_BLOOD_TBL;
typedef struct tagEM2E_HITSIZE {
	USHORT No;
	SHORT R;
} EM2E_HITSIZE;
typedef struct tagEM2E_HAND {
	UCHAR No;
	UCHAR Att;
	SHORT Fx;
	SHORT Fy;
	SHORT Fz;
} EM2E_HAND;

// EM2F.C
typedef struct tagEM2F_BLOOD_TBL {
	UCHAR Id;
	UCHAR Type;
	USHORT Dir;
	USHORT Zoom;
} EM2F_BLOOD_TBL;

// EM30.C
typedef struct tagEM30_FREE {
	UCHAR Dm_timer0;
	UCHAR Dm_cnt;
	UCHAR At_timer;
	UCHAR Nige;
	USHORT Etc_flg;
	CHAR Iki_timer;
	CHAR Me_timer1;
	UCHAR Me_r_0;
	UCHAR Me_r_1;
	SHORT Me_timer0;
	UCHAR K_timer;
	UCHAR K_seq;
	UCHAR K_zan;
	UCHAR Mg_rout0;
	CHAR Mg_timer0;
	SHORT Mg_dir;
	UCHAR Fire_c;
} EM30_FREE;
typedef struct tagEM30_PARTS_FREE {
	UCHAR r0;
	UCHAR r1;
} EM30_PARTS_FREE;

// EM31.C
typedef struct tagEM31_FREE {
	UCHAR Dm_timer0;
	UCHAR Dm_cnt;
	UCHAR At_timer;
	UCHAR plus_life;
	USHORT Etc_flg;
	CHAR Iki_timer;
	CHAR Me_timer1;
	UCHAR Me_r_0;
	UCHAR Me_r_1;
	SHORT Me_timer0;
	USHORT life_timer;
	UCHAR Yane_cnt;
	UCHAR Yane_no;
	UCHAR ikaku_num;
	UCHAR Mg_rout0;
	CHAR Mg_timer0;
	SHORT Mg_dir;
	UCHAR Fire_c;
} EM31_FREE;

// EM33.C
typedef struct tagEM33_FREE {
	UCHAR Status;
	UCHAR Biri_cnt;
	SHORT Em_keep;
	UCHAR No_atck[2];
	UCHAR Rno1_stk;
	UCHAR Rno2_stk;
	UCHAR Rno3_stk;
	UCHAR Jump_flg;
	UCHAR Jump_on;
	UCHAR No_fire;
	UCHAR Turn_on;
	UCHAR Stay;
	SHORT Dmg_stk;
	UCHAR Core_rno0;
	UCHAR Core_rno1;
	UCHAR Core_free;
	UCHAR No_jump;
	UCHAR Heart_rno0;
	UCHAR Heart_stop;
	SHORT Heart_size;
	CHAR Turn_keep;
	UCHAR Turn_rev;
	UCHAR Yure_time;
	UCHAR Yure_type;
	UCHAR No_yoro;
	UCHAR Padd00;
	SHORT Spdx_stk;
	SHORT Spdy_stk;
	SHORT Spdz_stk;
	UCHAR Mg_r0;
	UCHAR Mg_t0;
	SHORT Mg_dir;
} EM33_FREE;
typedef struct tagEM33_BLOOD_TBL {
	UCHAR Id;
	UCHAR Type;
	USHORT Pal;
	USHORT Zoom;
} EM33_BLOOD_TBL;

// EM34.C
typedef struct tagEM34_FREE {
	SHORT Kabe_dir;
	USHORT Etc_flg;
	UCHAR Dm_timer0;
	UCHAR Dm_cnt;
	UCHAR At_timer;
	UCHAR Kabe_no;
	UCHAR Mg_rout0;
	CHAR Mg_timer0;
	SHORT Mg_dir;
	SHORT Jyu;
	UCHAR Tj_r;
	UCHAR Iki;
	UCHAR Kuchi_r0;
	UCHAR Kuchi_r1;
	SHORT Kuchi_t0;
	SHORT Kuchi_t1;
	CHAR Kuchi_t2;
	CHAR Kuchi_t3;
	SHORT Kubi_dir_z;
	UCHAR J_timer0;
	UCHAR J_timer1;
	UCHAR Kuchi_no;
	UCHAR Kuchi_no1;
	UCHAR Jump_num;
	UCHAR Kin_cnt;
	USHORT Etc_timer;
	UCHAR Cu_cnt;
	UCHAR Up_cnt;
} EM34_FREE;
typedef struct tagMEDAMA {
	CHAR Tate;
	CHAR Yoko;
	CHAR Tate_d;
	CHAR Yoko_d;
	SHORT Tate_mv;
	SHORT Yoko_mv;
	SHORT Tate_a;
	SHORT Yoko_a;
	UCHAR* pMe3;
	UCHAR* pMe4;
	UCHAR Parts_no;
	CHAR T_max;
	CHAR T_min;
	CHAR Y_max;
	CHAR Y_min;
} MEDAMA;

// EM36.C
typedef struct tagEM36_FREE {
	UCHAR _R0;
	UCHAR _R1;
	UCHAR _R2;
	CHAR T1;
	SHORT T0;
	SHORT T2;
	CHAR T3;
	UCHAR Dm_timer0;
	UCHAR Dm_cnt;
	UCHAR Q0_t;
	UCHAR Q1_t;
	UCHAR Q_timer;
	USHORT Etc_flg;
	UCHAR Syoku_flg;
	UCHAR Kuchi_at_timer;
} EM36_FREE;

// EM37.C
typedef struct tagEM37_FREE {
	UCHAR No;
	UCHAR Nemoto_no;
	SHORT Pos_x;
	SHORT Size_x;
	SHORT Px;
	SHORT etc_flg;
	UCHAR Q_timer;
} EM37_FREE;

// EM38.C
typedef struct tagEM38_FREE {
} EM38_FREE;

// EM3A.C
typedef struct tagEM3A_FREE {
	UCHAR Target_pl;
	CHAR Wing_free;
	SHORT Fwing_ang;
	SHORT Bwing_ang;
	UCHAR Wroutine_0;
	UCHAR Wroutine_1;
	UCHAR Jump_flg;
	UCHAR Wing_flg;
	UCHAR Fly_type;
	CHAR Turn_rate;
	UCHAR Rno1_stk;
	UCHAR Rno2_stk;
	UCHAR Rno3_stk;
	UCHAR Dmg_set;
	UCHAR Wall_ok;
	UCHAR On_wall;
	UCHAR Catch_ok;
	UCHAR Atck_ok;
	UCHAR No_catch;
	UCHAR Esc_limit;
	UCHAR Dmg_free;
	CHAR Burn_cnt;
	UCHAR Fire_cnt;
	UCHAR Kage_routine;
	UCHAR No_fire;
	UCHAR Biri_cnt;
	SHORT Spdx_stk;
	SHORT Spdy_stk;
	SHORT Spdz_stk;
	UCHAR Old_dmg;
	UCHAR No_snd;
	SHORT Em_keep;
} EM3A_FREE;
typedef struct tagEM3A_BLOOD_TBL {
	UCHAR Id;
	UCHAR Type;
	USHORT Pal;
	USHORT Zoom;
} EM3A_BLOOD_TBL;

// EM3B.C
typedef struct tagEM3B_FREE {
	UCHAR Target_pl;
	UCHAR No_set;
	UCHAR Set_cnt;
	UCHAR Ck_cnt;
	UCHAR No_atck;
	UCHAR Em_keep;
	SHORT Keep_x;
	SHORT Keep_z;
	UCHAR Set_max;
	UCHAR Area_type;
	UCHAR Flgset;
	UCHAR Em_next;
} EM3B_FREE;
typedef struct tagEM3B_BLOOD_TBL {
	UCHAR Id;
	UCHAR Type;
	USHORT Pal;
	USHORT Zoom;
} EM3B_BLOOD_TBL;

// EM_SET.C
typedef struct tagEM_TBL {
	UCHAR Be_flg;
	UCHAR Id;
	USHORT Type;
	UCHAR nFloor;
	UCHAR Sound_flg;
	UCHAR Model_type;
	UCHAR Em_set_flg;
	SHORT Pos_x;
	SHORT Pos_y;
	SHORT Pos_z;
	SHORT Cdir_y;
} EM_TBL;
typedef struct tagT_EM_SET {
	UCHAR R_no_0;
	UCHAR R_no_1;
	UCHAR R_no_2;
	UCHAR R_no_3;
	CHAR C_em_no;
	UCHAR R1_bak;
	UCHAR List_no;
	UCHAR Trans_be;
	SHORT Menu_x;
	SHORT Menu_y;
	SHORT Menu_w;
	SHORT Menu_h;
	SHORT Gx;
	SHORT Gy;
	LONG View_y;
	EM_TBL* CEm_tbl;
	EM_TBL Em_tbl[34];
	EM_TBL Test_em_tbl[34];
	SCE_EM_SET_WORK* pTest_esd_tbl[16];
	UCHAR Test_esd_num[16];
	DR_MODE Dr_mode[2];
	POLY_G3 Em_prim[2][34];
	LINE_F2 Em_line_prim[2][34][3];
	TILE Menu_prim[2];
} T_EM_SET;
typedef struct tagSIGHT_TBL {
	SHORT Pos_x;
	SHORT Pos_y;
	SHORT Size;
} SIGHT_TBL;
typedef struct tagSIGHT_WORK {
	LONG Sight_num;
	SIGHT_TBL Sight_tbl[20];
	LINE_F2 Sight_line[2][20][4];
} SIGHT_WORK;
typedef struct tagROOM_ENEMY_TBL {
	SHORT Pos_x;
	SHORT Pos_y;
	SHORT Pos_z;
	SHORT Cdir_y;
	SHORT Type;
	UCHAR Work_no;
	UCHAR Id;
	UCHAR nFloor;
	UCHAR Sound_flg;
	UCHAR Model_type;
} ROOM_ENEMY_TBL;
typedef struct tagSET_EM_JMP {
	ULONG Num;
	ROOM_ENEMY_TBL* pAdr;
} SET_EM_JMP;

// EM_SUB.C
typedef struct tagTEX_MOVE_SEQ {
	UCHAR Tbl_no;
	UCHAR Timer;
} TEX_MOVE_SEQ;
typedef struct tagTEX_MOVE_DATA {
	UCHAR Mo_u;
	UCHAR Mo_v;
	UCHAR Mo_w;
	UCHAR Mo_h;
	UCHAR Moto_tpage;
	UCHAR Saki_tpage;
	UCHAR Sa_u;
	UCHAR Sa_v;
} TEX_MOVE_DATA;
typedef struct tagJH_TBL {
	USHORT Point;
	USHORT Per;
} JH_TBL;
typedef struct tagJH_HEAD {
	UCHAR Parts0_no;
	UCHAR Parts1_no;
	USHORT Vn_num;
	SVECTOR* p0Vec;
	SVECTOR* p0Nor;
	SVECTOR* p0Ovec;
	SVECTOR* p0Onor;
	SVECTOR Parts0_off;
	SVECTOR* p1Vec;
	SVECTOR* p1Nor;
	SVECTOR* p1Ovec;
	SVECTOR* p1Onor;
	SVECTOR Parts1_off;
	JH_TBL* pJh;
} JH_HEAD;

// ENDING.C
typedef struct tagEND_SPR {
	UCHAR Be_flg;
	UCHAR Id;
	UCHAR Otz;
	UCHAR Chars;
	SHORT Ofs_x;
	SHORT Ofs_y;
} END_SPR;

// GAME.C
typedef struct tagECG_POINT {
	UCHAR Y;
	UCHAR H;
} ECG_POINT;
typedef struct tagITEM_MIX_DATA {
	UCHAR Object_item_id;
	UCHAR Mix_type;
	UCHAR Result_item;
	CHAR Mixed_pix_no;
} ITEM_MIX_DATA;
typedef struct tagITEM_DATA {
	UCHAR Item_max;
	UCHAR Item_attribute;
	UCHAR Item_num_col;
	UCHAR Item_mix_num;
	ITEM_MIX_DATA* Item_mix_data;
} ITEM_DATA;
typedef struct tagFILE_DATA {
	UCHAR Page_max;
	UCHAR Back_h;
} FILE_DATA;
typedef struct tagMAP_DATA {
	UCHAR U;
	UCHAR V;
	UCHAR W;
	UCHAR H;
	SHORT C_pos_x;
	SHORT C_pos_y;
	SHORT B_pos_x;
	SHORT B_pos_y;
	UCHAR Map_flg;
	UCHAR Change_flag;
	UCHAR Pl0_flg;
	UCHAR Pl1_flg;
} MAP_DATA;
typedef struct tagMAP_STAGE_INFO {
	MAP_DATA* pMap_data;
	UCHAR Room_num;
	UCHAR Map;
	USHORT File_no;
} MAP_STAGE_INFO;
typedef struct tagSTATUS {
	UCHAR Main_rtn;
	UCHAR Sub_rtn0;
	UCHAR Sub_rtn1;
	UCHAR Sub_rtn2;
	UCHAR Sub_rtn3;
	UCHAR Sub_rtn4;
	UCHAR Sub_rtn5;
	UCHAR Sub_rtn6;
	UCHAR Equip_item_no;
	UCHAR Equip_item_no_old;
	UCHAR Equip_item_id;
	UCHAR Equip_item_id_old;
	UCHAR Icursol_main;
	UCHAR Icursol_sub;
	UCHAR Mcursol0;
	UCHAR Mcursol1;
	UCHAR St_type;
	CHAR F_sel_book;
	CHAR F_sel_file;
	UCHAR F_page_no;
	UCHAR Itembox_tpage;
	UCHAR Fread_char;
	UCHAR Exit_flg;
	UCHAR Same_id_work_no;
	UCHAR Using_item_no;
	UCHAR File_flg;
	UCHAR Map_no;
	UCHAR Pl_chenge_flg;
	CHAR Add_cp_x0;
	CHAR Add_cp_y0;
	CHAR X0;
	CHAR Y0;
	CHAR Add_cp_x1;
	CHAR Add_cp_y1;
	CHAR X1;
	CHAR Y1;
	UCHAR Ibox_sel;
	CHAR Ibox_moxe;
	UCHAR Mixed_id;
	UCHAR Mixed_pix_no;
	UCHAR blink_timer0;
	UCHAR blink_sw0;
	UCHAR blink_timer1;
	UCHAR blink_sw1;
	SHORT Machinegun_trg;
	SHORT Goffset_add;
	SHORT F_move_x;
	SHORT F_move_y;
	SHORT Itemlist_pos_x;
	SHORT Itemlist_pos_y;
	SHORT Message_pos_x;
	SHORT Message_pos_y;
	SHORT Status_pos_x;
	SHORT Status_pos_y;
	SHORT Sub_pos_x;
	SHORT Sub_pos_y;
	SHORT Menu0_pos_x;
	SHORT Menu0_pos_y;
	SHORT Menu1_pos_x;
	SHORT Menu1_pos_y;
	SHORT Frame_pos_x;
	SHORT Frame_pos_y;
	SHORT Ibox_pos_x;
	SHORT Ibox_pos_y;
	SHORT Map_pos_x;
	SHORT Map_pos_y;
	SHORT Map_offset_x;
	SHORT Map_offset_y;
	SHORT File_pos_x;
	SHORT File_pos_y;
	SHORT Ecg_x;
	CHAR Recover_type;
	CHAR Ecg_rtn;
	SHORT Heal_x;
	SHORT Cure_y;
	MODEL_WORK Fmodel[30];
	USHORT Add_life;
	USHORT dm00;
	USHORT Clut[22];
	DR_MODE Dmode[24][2];
} STATUS;

// LINE_SCR.C
typedef struct tagLINE_SCR {
	UCHAR r_no_0;
	UCHAR r_no_1;
	UCHAR Line_ctr0;
	UCHAR Quake_ctr0;
	ULONG Keep_tag0;
	ULONG* pPrim_keep0;
	ULONG* pOt;
	DR_MOVE Line_move[2][240];
	ULONG Null_prim[2];
} LINE_SCR;

// MAIN.C
typedef struct tagTITLE_WORK {
	UCHAR Main_rtn;
	UCHAR Sub_rtn0;
	UCHAR Sub_rtn1;
	UCHAR Sub_rtn2;
	UCHAR Sub_rtn3;
	UCHAR Stereo_bak;
	UCHAR Sel_mode;
	UCHAR Cur;
	UCHAR Disp_cnt;
	UCHAR Disp_add;
	UCHAR Moji_move_cnt;
	UCHAR Moji_kido;
	UCHAR Moji_kido2;
	UCHAR Rookie_cnt;
	UCHAR Rookie_flg;
	UCHAR unknown;
	USHORT Timer;
	SHORT Kido;
	SHORT Add;
	UCHAR Unknown_Bytes[10];
	DR_MODE Moji0;
	DR_MODE Moji1;
} TITLE_WORK;
typedef struct tagT_MOJI_TBL {
	SHORT x;
	SHORT y;
	SHORT w;
	SHORT h;
	UCHAR u;
	UCHAR v;
	USHORT clut;
	UCHAR flg;
	UCHAR rate;
} T_MOJI_TBL;
typedef struct tagVIEW_ENV {
	DR_MODE Tex_mode;
	SPRT Sprt;
	TILE View_mask[6];
	LINE_F4 Waku4[4];
	LINE_F2 Waku2[19];
	TILE Cedit_tile[9];
	TILE Cedit_col[256];
	POLY_G4 Cedit_bar[3];
	LINE_F2 Cedit_line2[34];
	LINE_F2 Cedit_waku[6];
	LINE_F2 Cedit_cur2[2];
	LINE_F4 Cedit_cur4[2];
	LINE_F2 Net_line2[48];
	DR_MOVE Clut_move;
} VIEW_ENV;
typedef struct tagVIEW_WORK {
	UCHAR r_no_0;
	UCHAR r_no_1;
	UCHAR r_no_2;
	UCHAR r_no_3;
	CHAR Col_mode;
	UCHAR Net_mode;
	UCHAR Tpage;
	UCHAR Pos_y;
	USHORT Clt_x;
	USHORT Clt_y;
	UCHAR Clut_no;
	UCHAR Bar_no;
	USHORT dummy;
	USHORT Clut_wk[256];
	RECT Clut_get;
} VIEW_WORK;
typedef struct tagVRAMVIEW {
	VIEW_ENV View_env[2];
	VIEW_WORK View_work;
	UCHAR mode;
} VRAMVIEW;
typedef struct tagMOVIE_TBL {
	ULONG Filecode;
	USHORT N_frame;
	USHORT Caption_id;
	USHORT Cancel;
	USHORT Disp_w;
	USHORT Isrgb24;
	ULONG Pos;
	USHORT Work_top;
	USHORT Rl_size;
	USHORT Attribute;
	USHORT Volume;
	USHORT Free;
} MOVIE_TBL;
typedef struct tagVM_WORK {
	ULONG* Rl_buff[2];
	ULONG* pImage_buff;
	USHORT End_frame;
	USHORT Movie_volume;
	UCHAR Rno;
	UCHAR Cbuf_id;
	USHORT Movie_w;
	UCHAR Movie_sync;
	UCHAR Status;
	UCHAR Eom;
	UCHAR Free0;
	USHORT Frame;
	USHORT Volume;
	ULONG Start_sector;
} VM_WORK;
typedef struct tagVM_DISP {
	RECT Rect;
	TILE Cinesco[2][2];
	ULONG Cine_switch;
	USHORT Pos_x;
	USHORT Cur_pos_x;
	USHORT Pos_y;
	USHORT Width;
	USHORT Size;
	USHORT Count;
	USHORT Loop;
	USHORT Attribute;
} VM_DISP;
typedef struct tagVM_FRAME {
	USHORT No;
	USHORT Old_no;
	USHORT Pic_h;
	USHORT Dummy;
} VM_FRAME;
typedef struct tagCAPTION_TBL {
	USHORT Start_frame;
	USHORT Disp_count;
	USHORT No;
	USHORT Height;
	USHORT Pos_x;
	USHORT Pos_y;
} CAPTION_TBL;
typedef struct tagCAPTION_ID {
	CAPTION_TBL* pTbl_ptr;
	ULONG Filecode;
	ULONG CaptionBuffId;
} CAPTION_ID;
typedef struct tagCAPTION {
	CAPTION_TBL* pTbl_ptr;
	UCHAR* pBuff;
	UCHAR* pSuper_buff;
	ULONG* pAdr;
	USHORT End_of_jimaku;
	USHORT Decomp_end;
	ULONG Decomp_size;
} CAPTION;

// MEM_CARD.C
typedef struct tagCFILE_INFO {
	UCHAR title[15][22];
	UCHAR num;
	ULONG total_size;
	ULONG size[15];
} CFILE_INFO;
typedef struct tagCFILE_INFO_S {
	UCHAR Pl;
	UCHAR Save_area;
	USHORT Save_cnt;
} CFILE_INFO_S;
typedef struct tagCARD_SAVE_DATA {
	_CARD Head;
	SAVE_DATA Save_data;
	UCHAR Dummy[276];
} CARD_SAVE_DATA;
typedef struct tagMWORK {
	UCHAR Port;
	UCHAR Cdisp;
	UCHAR Input_wait;
	CHAR Cursor_x;
	UCHAR F_num[16];
	UCHAR Wait_cnt;
	UCHAR Scrl_ofs;
	UCHAR Scrl_disp;
	UCHAR Pad_stop;
	SHORT Bg_kido;
	SHORT Scrl_cnt;
	ULONG Total_size;
	ULONG Cursor_old;
	RECT Bg_rect;
	CFILE_INFO File_info;
	CFILE_INFO_S File_info_s[15];
	CARD_SAVE_DATA Card;
	DR_MOVE Scrl_mask[2][2];
	UCHAR Save_info[15][128];
} MWORK;
enum {
	CMOJI_00,
	CMOJI_01,
	CMOJI_02,
	CMOJI_03,
	CMOJI_04,
	CMOJI_05,
	CMOJI_06,
	CMOJI_07,
	CMOJI_08,
	CMOJI_09,
	CMOJI_10,
	CMOJI_11,
	CMOJI_12,
	CMOJI_13,
	CMOJI_14,
	CMOJI_15,
	CMOJI_16,
	CMOJI_17,
	EMESS_0,
	EMESS_1,
	EMESS_2,
	EMESS_3,
	EMESS_4,
	EMESS_5,
	EMESS_6,
	EMESS_7,
	EMESS_8,
	MESS_LEON,
	MESS_CLAIRE,
	MESS_LEON_R,
	MESS_CLAIRE_R,
	MESS_SPY,
	MESS_SAVE_CNT,
	AREA_0,
	AREA_1,
	AREA_2,
	AREA_3,
	AREA_4,
	AREA_5,
	AREA_6,
	AREA_7,
	AREA_8,
	AREA_9,
	AREA_10,
	AREA_11,
	AREA_12,
	AREA_13,
	AREA_14,
	AREA_15,
	AREA_16,
	AREA_17,
};
enum {
	SLOT_CHECK,
	USE_CARD,
	SEL_SLOT,
	ERR_MESS,
	NOW_CHECKING,
	CARD_CHECK,
	FILE_SEL,
	READY,
	SAVE,
	SAVE_DEMO,
	LOAD,
	LOAD2,
	FORMAT_CHECK,
	FORMAT,
	ERR_MESS2,
	OVERWRITE,
	SCRL_UP,
	SCRL_DOWN,
	PAGE_CHANGE,
};

// MOJIDISP.C
typedef struct tagBRANCH_TBL {
	UCHAR Select_num;
	UCHAR Mess_ofs;
	UCHAR Skip_size;
	UCHAR Home_pos;
	USHORT Str_no;
} BRANCH_TBL;

// MONITOR.C
typedef struct tagLOADTASK {
	ULONG File_no;
	VOID* Func;
	VOID** Ld_adr;
} LOADTASK;

// MOVIE.C
typedef struct tagV_STR {
	ULONG* Read_buff[2];
	ULONG Start_frame;
	ULONG End_frame;
	LONG* Func1;
	LONG* Func2;
	DVECTOR Read_header[2];
	ULONG Read_id;
	LONG Fd;
	ULONG Is_interleave;
	ULONG Subheader[8];
	ULONG Eof_flg;
} V_STR;

// OM.C
typedef struct tagCC_PARTS_WORK {
	UCHAR Cc_ctr;
	UCHAR Cc_cnt;
	UCHAR Cc_wait;
	UCHAR Cc_num;
	USHORT Cc_pos_x;
	USHORT Cc_pos_y;
	DR_MOVE Cc_dr_move[2];
	RECT Cc_dr_rect[2];
	OBJ_MODEL_WORK* pOm;
} CC_PARTS_WORK;
typedef struct tagCC_WORK {
	CC_PARTS_WORK Cc_parts[30];
	USHORT Ccol_old;
	UCHAR Ccol_no;
	UCHAR Ctex_old;
} CC_WORK;

// PC_SYS.C
typedef struct tagSP_WORK {
	USHORT Pos_x;
	USHORT Pos_y;
	USHORT W;
	USHORT H;
	UCHAR U;
	UCHAR V;
	USHORT Clut;
	UCHAR Pri;
	UCHAR Semi;
	UCHAR Col;
	UCHAR Be_flg;
} SP_WORK;
typedef struct tagCOM_WORK {
	UCHAR Cx;
	UCHAR Cy;
	CHAR Kx;
	CHAR Ky;
	UCHAR Con_buf[12][30];
	UCHAR Con_col_buf[12][30];
	UCHAR Disp_wait;
	UCHAR Cursor_disp;
	UCHAR Wait;
	UCHAR Ccol;
	UCHAR nMoji;
	UCHAR Moji_code;
	UCHAR Kcursor_disp;
	CHAR Kcursor_add;
	UCHAR Key_timer;
	UCHAR Cut_no_old;
	UCHAR Key_input_flg;
	UCHAR Keta;
	ULONG Num;
	UCHAR In_buf[17];
	UCHAR* pMess_start;
	UCHAR* pMess;
	SP_WORK Sp_work[364];
	DR_MODE Dr_mode[2][8];
	SPRT Packet[2][364];
	LINE_F2 Line_work[2][4];
} COM_WORK;

// POLY_SUB.C
typedef struct tagKI {
	SVECTOR v0;
	SVECTOR v1;
	SVECTOR v2;
	SVECTOR v3;
	POLY_F4 prim[2];
} KI;
typedef struct tagKI2 {
	PRIM_F4 prim[2];
	PRIM_F4 prim1[2];
	MATRIX wm0;
	MATRIX wm1;
	MATRIX wm2;
	SVECTOR off0;
	SVECTOR off1;
} KI2;
typedef struct tagKI2_LINE_F3 {
	PRIM_LINE_F3 prim[2];
} KI2_LINE_F3;
typedef struct tagPOLY_EFF {
	SVECTOR* pSv4;
	SHORT Cdir_x;
	SHORT Cdir_y;
	SHORT Cdir_z;
	CHAR Be_flg;
	CHAR _R0;
	SHORT Pos_x;
	SHORT Pos_y;
	SHORT Pos_z;
	CHAR _R1;
	CHAR _R2;
	ULONG Rgb;
	POLY_GT4 Prim[2];
} POLY_EFF;
typedef struct tagPOLY_EFF2 {
	SVECTOR Sv0;
	SVECTOR Sv1;
	SVECTOR Sv2;
	SVECTOR Sv3;
	SVECTOR Sv4;
	SVECTOR Sv5;
	POLY_GT4 Prim0[2];
	POLY_GT4 Prim1[2];
	SHORT Cdir_x;
	SHORT Cdir_y;
	SHORT Cdir_z;
	UCHAR Be_flg;
	CHAR dummy00;
	SHORT Pos_x;
	SHORT Pos_y;
	SHORT Pos_z;
	SHORT dummy01;
	ULONG Rgb0;
	ULONG Rgb1;
	ULONG Rgb2;
	ULONG Rgb3;
	ULONG Rgb4;
	ULONG Rgb5;
} POLY_EFF2;
typedef struct tagPOLY_EFF2_WORK {
	CHAR Be_flg;
	CHAR Id;
	CHAR _R0;
	CHAR _R1;
	CHAR Timer1;
	CHAR _R2;
	SHORT Timer0;
	UCHAR Pe_top_no;
	UCHAR Use_Pe_num;
	USHORT dummy00;
} POLY_EFF2_WORK;

// PSP.C
typedef struct tagPSP {
	UCHAR be_flg;
	UCHAR id;
	USHORT otz;
} PSP;

// PC_EVENT.C
enum {
	MES_A00,
	MES_A10,
	MES_A11,
	MES_A20,
	MES_A21,
	MES_CARD00,
	MES_CARD01,
	MES_CARD10,
	MES_CARD20,
	MES_PRESS,
};
enum {
	DUMMY0,
	DUMMY1,
	MES_613_0,
	MES_613_1,
	MES_613_2,
	MES_613_3,
	MES_613_4,
	MES_613_5,
	MES_613_6,
	MES_613_7,
	MES_613_8,
	MES_613_9,
};
enum {
	E1_INIT,
	E1_A1,
	E1_A3,
	E1_A8,
	E1_A9,
	E1_A10,
	E1_A11,
	E1_A12,
	E1_A13,
	E1_PRESS_KEY,
	E1_PRESS_KEY2,
	E1_EXIT,
	E1_EXIT2,
	E1_EXIT3,
};
enum {
	E2_INIT,
	E2_SET_UP,
	E2_SET_UP2,
	E2_SET_UP3,
	E2_INPUT1,
	E2_INPUT2,
	E2_NO_GUEST,
	E2_GUEST,
	E2_ENTRY_END,
	E2_ENTRY_END2,
	E2_ENTRY_END3,
	E2_EXIT,
	E2_EXIT2,
};

// SABUN.C
typedef struct tagSAB {
	SHORT org_vx;
	SHORT org_vy;
	SHORT org_vz;
	SHORT sa_vx;
	SHORT sa_vy;
	SHORT sa_vz;
} SAB;

// SPL.C
typedef struct tagSPL_FREE {
	SHORT Dest_x;
	SHORT Dest_z;
	USHORT Move_flg;
	USHORT Dest_ll;
	SHORT Sake_dir;
	UCHAR Em_pos_flg;
	SHORT Sake_timer;
	SHORT Back_spd;
} SPL_FREE;

// SUB.C
typedef struct tagMEMORY_MANAGE {
	VOID* pAddress;
	ULONG Size;
} MEMORY_MANAGE;

// T_BLOCK.C
typedef struct tagBLOCK_DATA {
	UCHAR Disp_flg;
	UCHAR Dir;
	UCHAR Sel;
	UCHAR Sel_bit;
	CHAR Be_flg[16];
	SHORT Pos_x[16][2];
	SHORT Pos_z[16][2];
	USHORT Dir_bit[16];
	USHORT Abut[16];
	CHAR Main_rtn;
	CHAR Routine_0;
	CHAR Routine_1;
	CHAR Routine_2;
	USHORT Header;
	USHORT Dummy;
	USHORT Clut_id;
	LONG Viewx;
	LONG Viewy;
	LONG Viewz;
	LONG Gx;
	LONG Gy;
	UCHAR BIts[16];
	USHORT Io_buff[98];
	POLY_F4 Area[16];
	LINE_F2 Waku[4];
} BLOCK_DATA;

// T_FLOOR.C
typedef struct tagFLOOR_DATA {
	UCHAR Disp_flg;
	UCHAR Sel;
	UCHAR Dir;
	CHAR Be_flg[16];
	SHORT Pos_x[16][2];
	SHORT Pos_z[16][2];
	USHORT Size_x[16];
	USHORT Size_z[16];
	USHORT Se_no[16];
	USHORT Floor_height[16];
	USHORT Header;
	USHORT Io_buff[98];
	USHORT Clut_id;
	CHAR Main_rtn;
	CHAR Routine_0;
	CHAR Routine_1;
	UCHAR Dummy00;
	USHORT Dummy01;
	LONG Viewx;
	LONG Viewy;
	LONG Viewz;
	LONG Gx;
	LONG Gy;
	POLY_F4 Area[16];
	LINE_F2 Waku[4];
} FLOOR_DATA;

// T_LIGHT.C
typedef struct tagLIGHT_DATA {
	CHAR Main_rtn;
	UCHAR Mode;
	UCHAR Disp_flg;
	UCHAR Input_mode;
	UCHAR Timer1;
	UCHAR Timer2;
	UCHAR Copy_no;
	UCHAR dm0;
	UCHAR Cur_0;
	UCHAR Cur_1;
	UCHAR Cur_2;
	UCHAR Cur_3;
	UCHAR Rtn_0;
	UCHAR Rtn_1;
	UCHAR Rtn_2;
	UCHAR Rtn_3;
	SHORT Add;
	USHORT dm01;
	LONG Viewx;
	LONG Viewy;
	LONG Viewz;
	LONG Gx;
	LONG Gy;
	LIGHT_CUT_DATA* pCut;
	POLY_F4 Dispwin[2];
	POLY_F4 Mainpwin[2];
	POLY_F4 Point[4][2];
	POLY_F4 Subwin[4][2];
	POLY_F4 Colwin[3][2];
	DR_MODE Draw_mode[2];
} LIGHT_DATA;

// T_PSP.C
typedef struct tagMODEL {
	UCHAR Be_flg;
	UCHAR Free0;
	SHORT speed;
	SHORT speedy;
	SHORT cdir_y;
	SHORT m[3][3];
	LONG Pos_x;
	LONG Pos_y;
	LONG Pos_z;
	SHORT Old_x;
	SHORT Old_y;
	SHORT Old_z;
	MATRIX workm;
	LINE_F2 prim[2][308];
} MODEL;
typedef struct tagPSP_DATA {
	USHORT nPrim;
	USHORT Padd0;
	ULONG pData_adr;
} PSP_DATA;
typedef struct tagPXPY {
	USHORT x;
	USHORT y;
} PXPY;
typedef struct tagGROUPWK {
	USHORT Nsprite;
	USHORT Cba;
	USHORT Hot_x;
	USHORT Hot_y;
} GROUPWK;
typedef struct tagPARTSWK {
	UCHAR U;
	UCHAR V;
	UCHAR Ofs_x;
	UCHAR Ofs_y;
	USHORT Z;
	USHORT Flag;
	USHORT W;
	USHORT H;
} PARTSWK;
typedef struct tagPARTSST {
	ULONG Be_flg;
	USHORT Id;
	USHORT No;
	SHORT Tbl_x;
	SHORT Tbl_y;
	USHORT Super;
	USHORT mennseki;
	USHORT Hot_x_old;
	USHORT Hot_y_old;
	UCHAR Mag_x;
	UCHAR Mag_y;
	UCHAR Size_x;
	UCHAR Size_y;
	USHORT Nsprite;
	USHORT Cba;
	USHORT Hot_x;
	USHORT Hot_y;
	UCHAR U;
	UCHAR V;
	UCHAR Ofs_x;
	UCHAR Ofs_y;
	USHORT Z;
	USHORT Flag;
	USHORT W;
	USHORT H;
} PARTSST;
typedef struct tagBOXLINE {
	LINE_F3 Line0;
	LINE_F3 Line1;
} BOXLINE;

// T_SCA.C
typedef struct tagDISP_POLY {
	SHORT Xmax;
	SHORT Ymax;
	SHORT Xmin;
	SHORT Ymin;
	UCHAR Atari;
	UCHAR Area;
	USHORT Id;
	UCHAR High;
	UCHAR Shape;
	USHORT Dummy16;
	ULONG Floor;
	POLY_G3 Poly[10];
} DISP_POLY;
typedef struct tagSC_UTIL {
	LONG Max;
	CHAR Rno_0;
	CHAR Rno_1;
	CHAR Rno_2;
	CHAR Rno_3;
	CHAR Rno_4;
	CHAR Rno_5;
	CHAR Rno_6;
	CHAR Rno_7;
	LONG Viewx;
	LONG Viewy;
	LONG Viewz;
	LONG Gx;
	LONG Gy;
	LONG Dxmax;
	LONG Dxmin;
	LONG Dymax;
	LONG Dymin;
	LONG Bg_bak;
	SHORT No;
	SHORT Sort_flr;
	SHORT Aspd;
	CHAR Timer;
	CHAR Comp_sw;
	SHORT Cent_X;
	SHORT Cent_Y;
	SHORT Num[4];
	SHORT StoreXmax;
	SHORT StoreYmax;
	SHORT StoreXmin;
	SHORT StoreYmin;
	LINE_F2 Line[4][3];
	UCHAR LineDispFlg[4];
	UCHAR Ldisp_flg;
	UCHAR Bk_ldisp_flg;
	UCHAR Ddisp_flg;
	UCHAR Adisp_flg;
	CHAR Ceil_M10;
	CHAR Ceil_M1;
	CHAR Ceil_CM10;
	CHAR Ceil_CM1;
	LONG Ceil_height;
} SC_UTIL;

// T_SCE_AT.C
typedef struct tagAOT_DATA {
	UCHAR Be_flg;
	UCHAR Ck_bit;
	UCHAR Stage_bak;
	UCHAR Room_bak;
	ULONG Data[44];
} AOT_DATA;
typedef struct tagATE {
	UCHAR Main_rtn;
	UCHAR Sub_rtn0;
	UCHAR Sub_rtn1;
	UCHAR Sub_rtn2;
	UCHAR Sub_rtn3;
	UCHAR Sub_rtn4;
	UCHAR Sub_rtn5;
	CHAR At_no;
	UCHAR Base_pos_no;
	UCHAR View_mode;
	UCHAR View_rtn;
	UCHAR Bit_no;
	UCHAR List_no;
	UCHAR Win_rtn;
	UCHAR Padd1;
	UCHAR Padd2;
	SHORT Menu_x;
	SHORT Menu_y;
	SHORT Menu_w;
	SHORT Menu_h;
	SHORT Y_h;
	SHORT Pos[4][2];
	LONG Viewx;
	LONG Viewy;
	LONG Viewz;
	LONG Gx;
	LONG Gy;
	UCHAR Stage_no_old;
	UCHAR Room_no_old;
	UCHAR Cut_no_old;
	UCHAR nFloor_old;
	SHORT Pos_x_old;
	SHORT Pos_y_old;
	SHORT Pos_z_old;
	SHORT Cdir_y_old;
	POLY_F4 Tview[32][2];
	POLY_F4 Point[2];
	POLY_F4 Bottom[2];
	POLY_F4 Top[2];
	LINE_F2 Waku[2][2][4];
	LINE_F2 Point2[2][4];
	DR_MODE Draw_mode[2];
	TILE Menu_prim[2];
	UCHAR Aot_data_be[16];
	AOT_DATA Aot_data[16][32];
	AOT_DATA CAot_data[32];
	AOT_DATA* pCAot;
} ATE;
typedef struct tagMACRO_TBL {
	ULONG Offset;
	USHORT Length;
	USHORT Num;
} MACRO_TBL;
typedef struct tagMACRO_WORK {
	USHORT nAt_id;
	USHORT nFlg;
	USHORT nEvt;
	USHORT nIid;
	USHORT nMap;
	USHORT nFile;
	USHORT nImax;
	USHORT nIflg;
	USHORT nDtex;
	USHORT nDtype;
	MACRO_TBL* pAt_id;
	MACRO_TBL* pFlg;
	MACRO_TBL* pEvt;
	MACRO_TBL* pIid;
	MACRO_TBL* pMap;
	MACRO_TBL* pFile;
	MACRO_TBL* pImax;
	MACRO_TBL* pIflg;
	MACRO_TBL* pDtex;
	MACRO_TBL* pDtype;
	MACRO_TBL* pMtbl;
	UCHAR* pBuff;
} MACRO_WORK;

// T_SND.C
typedef struct tagSNDEFF {
	USHORT flg;
	USHORT gyo;
	UCHAR ID;
	UCHAR _NO;
	UCHAR PRI;
	UCHAR CH;
	SHORT RVOL;
	SHORT LVOL;
} SNDEFF;

// TRANS.C
typedef struct tagTRANS {
	POLY_FT4 Prim_poly_ft4[2][384];
	POLY_FT4* pPoly_ft4_keep;
} TRANS;
typedef struct tagT_WORK {
	ULONG tag;
	UCHAR D0;
	UCHAR D1;
	UCHAR D2;
	UCHAR Code;
	MATRIX M;
} T_WORK;