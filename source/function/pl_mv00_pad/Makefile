## Executable ##
CC		=CCPSX
ASM		=ASMPSX
LINK	=SLINK

## Commandline ##
CCOPT		=-c -O2 -G0 -mgpopt -ansi -Wall -comments-c++ -Wa,sOVERLAY -nostdlib
ASMOPT		=/l /o c+ /o an+ /o w+ /zd /x
LINKOPT		=/psx /c /p
PARSER		=parser "OBJ\\PSX\\BUILD\\PL_MV00_PAD.MAP" "OBJ\\PSX\\BUILD\\PL_MV00_PAD.S"

## Project ##
all: build
build:
	$(CC) $(CCOPT) "PL_MV00_PAD.CPP" -o"OBJ\\PSX\\BUILD\\PL_MV00_PAD.OBJ"
	$(ASM) $(ASMOPT) ../../ASSEMBLY/BIO2.S,OBJ/PSX/BUILD/BIO2.OBJ
	$(LINK) $(LINKOPT) @MAKEFILE.LINK,OBJ/PSX/BUILD/PL_MV00_PAD.CPE,OBJ/PSX/BUILD/PL_MV00_PAD.SYM,OBJ/PSX/BUILD/PL_MV00_PAD.MAP
	$(PARSER)
rebuild: clean | all
clean:
	echo Y | DEL "OBJ\\PSX\\BUILD\\PL_MV00_PAD.BIN"
	echo Y | DEL "OBJ\\PSX\\BUILD\\PL_MV00_PAD.CPE"
	echo Y | DEL "OBJ\\PSX\\BUILD\\PL_MV00_PAD.MAP"
	echo Y | DEL "OBJ\\PSX\\BUILD\\PL_MV00_PAD.OBJ"
	echo Y | DEL "OBJ\\PSX\\BUILD\\PL_MV00_PAD.SYM"
	echo Y | DEL "OBJ\\PSX\\BUILD\\PL_MV00_PAD.S"