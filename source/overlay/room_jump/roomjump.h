/*
*
*	Megan Grass
*	March 27, 2014
*
*
*	TODO:
*
*/


#include "..\\..\\BIO2\\BIO2.H"

#include "..\\..\\CUSTOM\\CUSTOM.H"

#include "..\\..\\COMMON\\COMMON.H"

#include "PROTOTYPE.H"

#include "BIO2\\ROOM_INFO.H"

struct {
	VOID(*func)();
} Room_jump_tbl[] = {
	{ Room_Jump_Menu }
};

#define ROOM_JUMP_MENU				0	// Room_Jump_Menu
