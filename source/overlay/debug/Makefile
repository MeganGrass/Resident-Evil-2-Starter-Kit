## Executable ##
CC			=CCPSX
ASM			=ASMPSX
LINK		=SLINK

## Commandline ##
CCOPT		=-c -O2 -G0 -mgpopt -ansi -Wall -comments-c++ -Wa,sOVERLAY -nostdlib
ASMOPT		=/l /o c+ /o an+ /o w+ /zd /x
LINKOPT		=/psx /c /p
PARSER		=parser "OBJ\\PSX\\BUILD\\DEBUG.MAP" "OBJ\\PSX\\BUILD\\DEBUG.S"

## Project ##
all: build
build:
	$(CC) $(CCOPT) "../../COMMON/COMMON.CPP" -o"OBJ\\PSX\\BUILD\\COMMON.OBJ"
	$(CC) $(CCOPT) "DEBUG.CPP" -o"OBJ\\PSX\\BUILD\\DEBUG.OBJ"
	$(ASM) $(ASMOPT) ../../ASSEMBLY/BIO2.S,OBJ/PSX/BUILD/BIO2.OBJ
	$(LINK) $(LINKOPT) @MAKEFILE.LINK,OBJ/PSX/BUILD/DEBUG.CPE,OBJ/PSX/BUILD/DEBUG.SYM,OBJ/PSX/BUILD/DEBUG.MAP
	$(PARSER)
rebuild: clean | all
clean:
	echo Y | DEL "OBJ\\PSX\\BUILD\\DEBUG.BIN"
	echo Y | DEL "OBJ\\PSX\\BUILD\\DEBUG.CPE"
	echo Y | DEL "OBJ\\PSX\\BUILD\\DEBUG.MAP"
	echo Y | DEL "OBJ\\PSX\\BUILD\\DEBUG.OBJ"
	echo Y | DEL "OBJ\\PSX\\BUILD\\DEBUG.SYM"
	echo Y | DEL "OBJ\\PSX\\BUILD\\DEBUG.S"