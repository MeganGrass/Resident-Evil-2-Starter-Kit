## Executable ##
CC		=CCPSX
ASM		=ASMPSX
LINK	=SLINK

## Commandline ##
CCOPT		=-c -O2 -G0 -mgpopt -ansi -Wall -comments-c++ -Wa,sOVERLAY -nostdlib
ASMOPT		=/l /o c+ /o an+ /o w+ /zd /x
LINKOPT		=/psx /c /p
PARSER		=parser "OBJ\\PSX\\BUILD\\SND_SYS_ENEM_SET.MAP" "OBJ\\PSX\\BUILD\\SND_SYS_ENEM_SET.S"

## Project ##
all: build
build:
	$(CC) $(CCOPT) "SND_SYS_ENEM_SET.CPP" -o"OBJ\\PSX\\BUILD\\SND_SYS_ENEM_SET.OBJ"
	$(ASM) $(ASMOPT) ../../ASSEMBLY/BIO2.S,OBJ/PSX/BUILD/BIO2.OBJ
	$(LINK) $(LINKOPT) @MAKEFILE.LINK,OBJ/PSX/BUILD/SND_SYS_ENEM_SET.CPE,OBJ/PSX/BUILD/SND_SYS_ENEM_SET.SYM,OBJ/PSX/BUILD/SND_SYS_ENEM_SET.MAP
	$(PARSER)
	@echo Copying to G Drive
	COPY /y "OBJ\\PSX\\BUILD\\SND_SYS_ENEM_SET.BIN" "G:/"
rebuild: clean | all
clean:
	echo Y | DEL "OBJ\\PSX\\BUILD\\SND_SYS_ENEM_SET.BIN"
	echo Y | DEL "OBJ\\PSX\\BUILD\\SND_SYS_ENEM_SET.CPE"
	echo Y | DEL "OBJ\\PSX\\BUILD\\SND_SYS_ENEM_SET.MAP"
	echo Y | DEL "OBJ\\PSX\\BUILD\\SND_SYS_ENEM_SET.OBJ"
	echo Y | DEL "OBJ\\PSX\\BUILD\\SND_SYS_ENEM_SET.SYM"
	echo Y | DEL "OBJ\\PSX\\BUILD\\SND_SYS_ENEM_SET.S"