@echo OFF

del /s /q /f ".\\result\\slus_00748.txt"
del /s /q /f ".\\result\\slus_00748.log"
del /s /q /f ".\\result\\timestamp.log"
del /s /q /f ".\\result\\floc.log"
del /s /q /f ".\\result\\function.msbuild.log"

cd ".\\source\\function"

call "..\\..\\msbuild.bat" >> "..\\..\\result\\function.msbuild.log"

cd "..\\..\\"

del /s /q /f ".\\disc\\SLUS_007.48"

copy /y ".\\asset\\SLUS_007.48" ".\\disc\\SLUS_007.48"

armips ./source/assembly/slus_00748.s -temp ./result/slus_00748.txt >> ./result/slus_00748.log

test datelog ".\\result\\timestamp.log" 0.0

test exewrite ".\\disc\\SLUS_007.48" 0x80010000 ".\\result\\timestamp.log"

test buildcd ".\\floc.ini"