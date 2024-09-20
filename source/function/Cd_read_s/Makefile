## Executable ##
CC		=CCPSX
ASM		=ASMPSX
LINK	=SLINK

## Commandline ##
CCOPT		=-c -O2 -G0 -mgpopt -ansi -Wall -comments-c++ -Wa,sOVERLAY -nostdlib
ASMOPT		=/l /o c+ /o an+ /o w+ /zd /x
LINKOPT		=/psx /c /p
PARSER		=parser "OBJ\\PSX\\BUILD\\CD_READ_S.MAP" "OBJ\\PSX\\BUILD\\CD_READ_S.S"

## Project ##
all: build
build:
	$(CC) $(CCOPT) "CD_READ_S.CPP" -o"OBJ\\PSX\\BUILD\\CD_READ_S.OBJ"
	$(ASM) $(ASMOPT) ../../ASSEMBLY/BIO2.S,OBJ/PSX/BUILD/BIO2.OBJ
	$(LINK) $(LINKOPT) @MAKEFILE.LINK,OBJ/PSX/BUILD/CD_READ_S.CPE,OBJ/PSX/BUILD/CD_READ_S.SYM,OBJ/PSX/BUILD/CD_READ_S.MAP
	$(PARSER)
rebuild: clean | all
clean:
	echo Y | DEL "OBJ\\PSX\\BUILD\\CD_READ_S.BIN"
	echo Y | DEL "OBJ\\PSX\\BUILD\\CD_READ_S.CPE"
	echo Y | DEL "OBJ\\PSX\\BUILD\\CD_READ_S.MAP"
	echo Y | DEL "OBJ\\PSX\\BUILD\\CD_READ_S.OBJ"
	echo Y | DEL "OBJ\\PSX\\BUILD\\CD_READ_S.SYM"
	echo Y | DEL "OBJ\\PSX\\BUILD\\CD_READ_S.S"