## Executable ##
CC			=CCPSX
ASM			=ASMPSX
LINK		=SLINK

## Commandline ##
CCOPT		=-c -O2 -G0 -mgpopt -ansi -Wall -comments-c++ -Wa,sOVERLAY -nostdlib
ASMOPT		=/l /o c+ /o an+ /o w+ /zd /x
LINKOPT		=/psx /c /p
PARSER		=parser "OBJ\\PSX\\BUILD\\XA_PLAY.MAP" "OBJ\\PSX\\BUILD\\XA_PLAY.S"

## Project ##
all: build
build:
	$(CC) $(CCOPT) "XA_PLAY.CPP" -o"OBJ\\PSX\\BUILD\\XA_PLAY.OBJ"
	$(ASM) $(ASMOPT) ../../ASSEMBLY/BIO2.S,OBJ/PSX/BUILD/BIO2.OBJ
	$(LINK) $(LINKOPT) @MAKEFILE.LINK,OBJ/PSX/BUILD/XA_PLAY.CPE,OBJ/PSX/BUILD/XA_PLAY.SYM,OBJ/PSX/BUILD/XA_PLAY.MAP
	$(PARSER)
rebuild: clean | all
clean:
	echo Y | DEL "OBJ\\PSX\\BUILD\\XA_PLAY.BIN"
	echo Y | DEL "OBJ\\PSX\\BUILD\\XA_PLAY.CPE"
	echo Y | DEL "OBJ\\PSX\\BUILD\\XA_PLAY.MAP"
	echo Y | DEL "OBJ\\PSX\\BUILD\\XA_PLAY.OBJ"
	echo Y | DEL "OBJ\\PSX\\BUILD\\XA_PLAY.SYM"
	echo Y | DEL "OBJ\\PSX\\BUILD\\XA_PLAY.S"