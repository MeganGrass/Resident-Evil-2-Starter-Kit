## Executable ##
CC			=CCPSX
ASM			=ASMPSX
LINK		=SLINK

## Commandline ##
CCOPT		=-c -O2 -G0 -mgpopt -ansi -Wall -comments-c++ -Wa,sOVERLAY -nostdlib
ASMOPT		=/l /o c+ /o an+ /o w+ /zd /x
LINKOPT		=/psx /c /p
PARSER		=parser "OBJ\\PSX\\BUILD\\CDREAD.MAP" "OBJ\\PSX\\BUILD\\CDREAD.S"

## Project ##
all: build
build:
	$(CC) $(CCOPT) "CD_READ.CPP" -o"OBJ\\PSX\\BUILD\\CD_READ.OBJ"
	$(ASM) $(ASMOPT) ../../ASSEMBLY/BIO2.S,OBJ/PSX/BUILD/BIO2.OBJ
	$(LINK) $(LINKOPT) @MAKEFILE.LINK,OBJ/PSX/BUILD/CDREAD.CPE,OBJ/PSX/BUILD/CDREAD.SYM,OBJ/PSX/BUILD/CDREAD.MAP
	$(PARSER)
rebuild: clean | all
clean:
	echo Y | DEL "OBJ\\PSX\\BUILD\\CDREAD.BIN"
	echo Y | DEL "OBJ\\PSX\\BUILD\\CDREAD.CPE"
	echo Y | DEL "OBJ\\PSX\\BUILD\\CDREAD.MAP"
	echo Y | DEL "OBJ\\PSX\\BUILD\\CDREAD.OBJ"
	echo Y | DEL "OBJ\\PSX\\BUILD\\CDREAD.SYM"
	echo Y | DEL "OBJ\\PSX\\BUILD\\CDREAD.S"