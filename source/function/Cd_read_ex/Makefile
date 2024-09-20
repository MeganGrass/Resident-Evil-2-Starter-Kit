## Executable ##
CC			=CCPSX
ASM			=ASMPSX
LINK		=SLINK

## Commandline ##
CCOPT		=-c -O2 -G0 -mgpopt -ansi -Wall -comments-c++ -Wa,sOVERLAY -nostdlib
ASMOPT		=/l /o c+ /o an+ /o w+ /zd /x
LINKOPT		=/psx /c /p
PARSER		=parser "OBJ\\PSX\\BUILD\\CDREADEX.MAP" "OBJ\\PSX\\BUILD\\CDREADEX.S"

## Project ##
all: build
build:
	$(CC) $(CCOPT) "CD_READ_EX.CPP" -o"OBJ\\PSX\\BUILD\\CD_READ_EX.OBJ"
	$(ASM) $(ASMOPT) ../../ASSEMBLY/BIO2.S,OBJ/PSX/BUILD/BIO2.OBJ
	$(LINK) $(LINKOPT) @MAKEFILE.LINK,OBJ/PSX/BUILD/CDREADEX.CPE,OBJ/PSX/BUILD/CDREADEX.SYM,OBJ/PSX/BUILD/CDREADEX.MAP
	$(PARSER)
rebuild: clean | all
clean:
	echo Y | DEL "OBJ\\PSX\\BUILD\\CDREADEX.BIN"
	echo Y | DEL "OBJ\\PSX\\BUILD\\CDREADEX.CPE"
	echo Y | DEL "OBJ\\PSX\\BUILD\\CDREADEX.MAP"
	echo Y | DEL "OBJ\\PSX\\BUILD\\CDREADEX.OBJ"
	echo Y | DEL "OBJ\\PSX\\BUILD\\CDREADEX.SYM"
	echo Y | DEL "OBJ\\PSX\\BUILD\\CDREADEX.S"