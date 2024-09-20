## Executable ##
CC		=CCPSX
ASM		=ASMPSX
LINK	=SLINK

## Commandline ##
CCOPT		=-c -O2 -G0 -mgpopt -ansi -Wall -comments-c++ -Wa,sOVERLAY -nostdlib
ASMOPT		=/l /o c+ /o an+ /o w+ /zd /x
LINKOPT		=/psx /c /p
PARSER		=parser "OBJ\\PSX\\BUILD\\LOADBGM.MAP" "OBJ\\PSX\\BUILD\\LOADBGM.S"

## Project ##
all: build
build:
	$(CC) $(CCOPT) "LOAD_BGM.CPP" -o"OBJ\\PSX\\BUILD\\LOAD_BGM.OBJ"
	$(ASM) $(ASMOPT) ../../ASSEMBLY/BIO2.S,OBJ/PSX/BUILD/BIO2.OBJ
	$(LINK) $(LINKOPT) @MAKEFILE.LINK,OBJ/PSX/BUILD/LOADBGM.CPE,OBJ/PSX/BUILD/LOADBGM.SYM,OBJ/PSX/BUILD/LOADBGM.MAP
	$(PARSER)
rebuild: clean | all
clean:
	echo Y | DEL "OBJ\\PSX\\BUILD\\LOADBGM.BIN"
	echo Y | DEL "OBJ\\PSX\\BUILD\\LOADBGM.CPE"
	echo Y | DEL "OBJ\\PSX\\BUILD\\LOADBGM.MAP"
	echo Y | DEL "OBJ\\PSX\\BUILD\\LOADBGM.OBJ"
	echo Y | DEL "OBJ\\PSX\\BUILD\\LOADBGM.SYM"
	echo Y | DEL "OBJ\\PSX\\BUILD\\LOADBGM.S"