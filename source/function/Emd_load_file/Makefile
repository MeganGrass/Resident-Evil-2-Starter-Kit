## Executable ##
CC		=CCPSX
ASM		=ASMPSX
LINK	=SLINK

## Commandline ##
CCOPT		=-c -O2 -G0 -mgpopt -ansi -Wall -comments-c++ -Wa,sOVERLAY -nostdlib
ASMOPT		=/l /o c+ /o an+ /o w+ /zd /x
LINKOPT		=/psx /c /p
PARSER		=parser "OBJ\\PSX\\BUILD\\EMDLOADFILE.MAP" "OBJ\\PSX\\BUILD\\EMDLOADFILE.S"

## Project ##
all: build
build:
	$(CC) $(CCOPT) "EMD_LOAD_FILE.CPP" -o"OBJ\\PSX\\BUILD\\EMD_LOAD_FILE.OBJ"
	$(ASM) $(ASMOPT) ../../ASSEMBLY/BIO2.S,OBJ/PSX/BUILD/BIO2.OBJ
	$(LINK) $(LINKOPT) @MAKEFILE.LINK,OBJ/PSX/BUILD/EMDLOADFILE.CPE,OBJ/PSX/BUILD/EMDLOADFILE.SYM,OBJ/PSX/BUILD/EMDLOADFILE.MAP
	$(PARSER)
rebuild: clean | all
clean:
	echo Y | DEL "OBJ\\PSX\\BUILD\\EMDLOADFILE.BIN"
	echo Y | DEL "OBJ\\PSX\\BUILD\\EMDLOADFILE.CPE"
	echo Y | DEL "OBJ\\PSX\\BUILD\\EMDLOADFILE.MAP"
	echo Y | DEL "OBJ\\PSX\\BUILD\\EMDLOADFILE.OBJ"
	echo Y | DEL "OBJ\\PSX\\BUILD\\EMDLOADFILE.SYM"
	echo Y | DEL "OBJ\\PSX\\BUILD\\EMDLOADFILE.S"