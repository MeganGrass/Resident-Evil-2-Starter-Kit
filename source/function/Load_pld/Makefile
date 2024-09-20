## Executable ##
CC		=CCPSX
ASM		=ASMPSX
LINK	=SLINK

## Commandline ##
CCOPT		=-c -O2 -G0 -mgpopt -ansi -Wall -comments-c++ -Wa,sOVERLAY -nostdlib
ASMOPT		=/l /o c+ /o an+ /o w+ /zd /x
LINKOPT		=/psx /c /p
PARSER		=parser "OBJ\\PSX\\BUILD\\LOADPLD.MAP" "OBJ\\PSX\\BUILD\\LOADPLD.S"

## Project ##
all: build
build:
	$(CC) $(CCOPT) "LOAD_PLD.CPP" -o"OBJ\\PSX\\BUILD\\LOAD_PLD.OBJ"
	$(ASM) $(ASMOPT) ../../ASSEMBLY/BIO2.S,OBJ/PSX/BUILD/BIO2.OBJ
	$(LINK) $(LINKOPT) @MAKEFILE.LINK,OBJ/PSX/BUILD/LOADPLD.CPE,OBJ/PSX/BUILD/LOADPLD.SYM,OBJ/PSX/BUILD/LOADPLD.MAP
	$(PARSER)
rebuild: clean | all
clean:
	echo Y | DEL "OBJ\\PSX\\BUILD\\LOADPLD.BIN"
	echo Y | DEL "OBJ\\PSX\\BUILD\\LOADPLD.CPE"
	echo Y | DEL "OBJ\\PSX\\BUILD\\LOADPLD.MAP"
	echo Y | DEL "OBJ\\PSX\\BUILD\\LOADPLD.OBJ"
	echo Y | DEL "OBJ\\PSX\\BUILD\\LOADPLD.SYM"
	echo Y | DEL "OBJ\\PSX\\BUILD\\LOADPLD.S"