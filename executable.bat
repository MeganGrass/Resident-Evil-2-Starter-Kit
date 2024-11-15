@echo OFF

del /s /q /f ".\\result\\function.msbuild.log"
del /s /q /f ".\\result\\slus_00748.txt"
del /s /q /f ".\\result\\slus_00748.log"
del /s /q /f ".\\result\\timestamp.log"
del /s /q /f ".\\result\\bio2io.log"
del /s /q /f ".\\result\\floc.log"

cd ".\\source\\function"

call "..\\..\\msbuild.bat" >> "..\\..\\result\\function.msbuild.log"

cd "..\\..\\"

del /s /q /f ".\\disc\\SLUS_007.48"

copy /y ".\\asset\\SLUS_007.48" ".\\disc\\SLUS_007.48"

armips ./source/assembly/slus_00748.s -temp ./result/slus_00748.txt >> ./result/slus_00748.log

reio datelog ".\\result\\timestamp.log" 0.0
reio exe ram 2 kseg 1 open ".\\disc\\SLUS_007.48" import 0x80010000 ".\\result\\timestamp.log" dumpexe ".\\disc\\SLUS_007.48" >> ".\\result\\bio2io.log"

reio mkpsxiso -retext ".\\temp.log" -noisogen ".\\disc.xml"
reio disk ver 0 floc 0x800988A4 update ".\\disc\\SLUS_007.48" ".\\temp.log" >> ".\\result\\floc.log"
del /s /q /f ".\\temp.log"