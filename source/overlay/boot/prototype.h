/*
*
*	Megan Grass
*	March 27, 2014
*
*
*	TODO: define function prototypes here so that they can be referenced in other overlay projects
*
*/

VOID Boot(VOID);

VOID Boot_Game_Set(VOID);
VOID Boot_Game_Init(VOID);

VOID Boot_Init(VOID);
VOID Boot_Logo(VOID);
VOID Boot_Title(VOID);
VOID Boot_New(VOID);
VOID Boot_Load(VOID);
VOID Boot_Option(VOID);
VOID Boot_Config(VOID);
VOID Boot_Sound(VOID);
VOID Boot_Exit(VOID);

VOID Boot_File_System(VOID);

#if _DEBUG
VOID Boot_Debug(VOID);

VOID Boot_Room_Jump(VOID);
#endif