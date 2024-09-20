## Executable ##
CC			=CCPSX
ASM			=ASMPSX
LINK		=SLINK

## Commandline ##
CCOPT		=-c -O2 -G0 -mgpopt -ansi -Wall -comments-c++ -Wa,sOVERLAY -nostdlib
ASMOPT		=/l /o c+ /o an+ /o w+ /zd /x
LINKOPT		=/psx /c /p
PARSER		=parser "OBJ\\PSX\\BUILD\\BOOT.MAP" "OBJ\\PSX\\BUILD\\BOOT.S"

## Project ##
all: build
build:
	$(CC) $(CCOPT) "../../COMMON/COMMON.CPP" -o"OBJ\\PSX\\BUILD\\COMMON.OBJ"
	$(CC) $(CCOPT) "BOOT.CPP" -o"OBJ\\PSX\\BUILD\\BOOT.OBJ"
	$(ASM) $(ASMOPT) ../../ASSEMBLY/BIO2.S,OBJ/PSX/BUILD/BIO2.OBJ
	$(LINK) $(LINKOPT) @MAKEFILE.LINK,OBJ/PSX/BUILD/BOOT.CPE,OBJ/PSX/BUILD/BOOT.SYM,OBJ/PSX/BUILD/BOOT.MAP
	$(PARSER)
rebuild: clean | all
clean:
	echo Y | DEL "OBJ\\PSX\\BUILD\\BOOT.BIN"
	echo Y | DEL "OBJ\\PSX\\BUILD\\BOOT.CPE"
	echo Y | DEL "OBJ\\PSX\\BUILD\\BOOT.MAP"
	echo Y | DEL "OBJ\\PSX\\BUILD\\BOOT.OBJ"
	echo Y | DEL "OBJ\\PSX\\BUILD\\BOOT.SYM"
	echo Y | DEL "OBJ\\PSX\\BUILD\\BOOT.S"