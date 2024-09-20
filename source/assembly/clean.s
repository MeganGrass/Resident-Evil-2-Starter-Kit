

/*
*	desld has been replaced with lz compression
*/
.org 0x80010000
.fill 0x778


/*
*	Task_lexecute and Task_lchain have been patched to read direct pointers and Ld_adr table is no longer used
*
*	80010804 is reserved for a pointer to a routine in STAGE6.BIN, which is currently unimplemented
*/
.org 0x800107C0
.fill 0x44
.org 0x80010808
.fill 0x10


/*
*	floc structure has been replaced and is this area is updated before the iso is created
*/
.org 0x800988A4
.fill 0x1AD8


/*
*	cdemd0_pos & cdemd1_pos tables are updated here before the iso is created
*
*	CD routines have been rewritten to ignore file integrity, so cdemd*_sum tables are no longer used
*
*	cdemd2/cdemd3 tables were never used
*/
.org 0x8009ADF4
.fill 0x261C


/*
*	unused strings
*/
.org 0x8009D410
.fill 0x68


/*
*	RDT filecode ids are no longer used
*/
.org 0x800A70FC
.fill 0x130


/*
*	nroom is no longer used to parse the bgm table in savegame data
*/
.org 0x800A80B0
.fill 0x08


/*
*	arms, core, main and sub filecode ids are no longer used
*/
.org 0x800A80B8
.fill 0x1B0


/*
*	Due to a compile error, there are 9 copies of Subpl_walk, Subpl_back, Subpl_dir, Subpl_ato, Subpl_run, and Em4a_zobiparts_tbl in only the main executable alone, 0x150 bytes for every occurrence
*
*	It would take a herculean effort to patch every xref to these...
*/
