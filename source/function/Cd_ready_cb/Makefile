## Executable ##
CC		=CCPSX
ASM		=ASMPSX
LINK	=SLINK

## Commandline ##
CCOPT		=-c -O2 -G0 -mgpopt -ansi -Wall -comments-c++ -Wa,sOVERLAY -nostdlib
ASMOPT		=/l /o c+ /o an+ /o w+ /zd /x
LINKOPT		=/psx /c /p
PARSER		=parser "OBJ\\PSX\\BUILD\\CD_READY_CB.MAP" "OBJ\\PSX\\BUILD\\CD_READY_CB.S"

## Project ##
all: build
build:
	$(CC) $(CCOPT) "CD_READY_CB.CPP" -o"OBJ\\PSX\\BUILD\\CD_READY_CB.OBJ"
	$(ASM) $(ASMOPT) ../../ASSEMBLY/BIO2.S,OBJ/PSX/BUILD/BIO2.OBJ
	$(LINK) $(LINKOPT) @MAKEFILE.LINK,OBJ/PSX/BUILD/CD_READY_CB.CPE,OBJ/PSX/BUILD/CD_READY_CB.SYM,OBJ/PSX/BUILD/CD_READY_CB.MAP
	$(PARSER)
rebuild: clean | all
clean:
	echo Y | DEL "OBJ\\PSX\\BUILD\\CD_READY_CB.BIN"
	echo Y | DEL "OBJ\\PSX\\BUILD\\CD_READY_CB.CPE"
	echo Y | DEL "OBJ\\PSX\\BUILD\\CD_READY_CB.MAP"
	echo Y | DEL "OBJ\\PSX\\BUILD\\CD_READY_CB.OBJ"
	echo Y | DEL "OBJ\\PSX\\BUILD\\CD_READY_CB.SYM"
	echo Y | DEL "OBJ\\PSX\\BUILD\\CD_READY_CB.S"