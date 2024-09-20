## Executable ##
CC		=CCPSX
ASM		=ASMPSX
LINK	=SLINK

## Commandline ##
CCOPT		=-c -O2 -G0 -mgpopt -ansi -Wall -comments-c++ -Wa,sOVERLAY -nostdlib
ASMOPT		=/l /o c+ /o an+ /o w+ /zd /x
LINKOPT		=/psx /c /p
PARSER		=parser "OBJ\\PSX\\BUILD\\SETDISK.MAP" "OBJ\\PSX\\BUILD\\SETDISK.S"

## Project ##
all: build
build:
	$(CC) $(CCOPT) "SET_DISK.CPP" -o"OBJ\\PSX\\BUILD\\SET_DISK.OBJ"
	$(ASM) $(ASMOPT) ../../ASSEMBLY/BIO2.S,OBJ/PSX/BUILD/BIO2.OBJ
	$(LINK) $(LINKOPT) @MAKEFILE.LINK,OBJ/PSX/BUILD/SETDISK.CPE,OBJ/PSX/BUILD/SETDISK.SYM,OBJ/PSX/BUILD/SETDISK.MAP
	$(PARSER)
rebuild: clean | all
clean:
	echo Y | DEL "OBJ\\PSX\\BUILD\\SETDISK.BIN"
	echo Y | DEL "OBJ\\PSX\\BUILD\\SETDISK.CPE"
	echo Y | DEL "OBJ\\PSX\\BUILD\\SETDISK.MAP"
	echo Y | DEL "OBJ\\PSX\\BUILD\\SETDISK.OBJ"
	echo Y | DEL "OBJ\\PSX\\BUILD\\SETDISK.SYM"
	echo Y | DEL "OBJ\\PSX\\BUILD\\SETDISK.S"