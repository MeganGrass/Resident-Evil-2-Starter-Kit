@echo OFF

del /s /q /f ".\\result\\overlay.txt"
del /s /q /f ".\\result\\overlay.log"
del /s /q /f ".\\result\\overlay.msbuild.log"

cd ".\\source\\overlay"

call "..\\..\\msbuild.bat" >> "..\\..\\result\\overlay.msbuild.log"

cd "..\\..\\"

del /s /q /f ".\\disc\\overlay\\*.bin"

copy /y ".\\asset\\common\\bin\\CONFIG.BIN" ".\\disc\\overlay\\"
copy /y ".\\asset\\common\\bin\\DIEDEMO.BIN" ".\\disc\\overlay\\"
copy /y ".\\asset\\common\\bin\\ENDING.BIN" ".\\disc\\overlay\\"
copy /y ".\\asset\\common\\bin\\MEM_CARD.BIN" ".\\disc\\overlay\\"
copy /y ".\\asset\\common\\bin\\OPENING.BIN" ".\\disc\\overlay\\"
copy /y ".\\asset\\common\\bin\\RESULT.BIN" ".\\disc\\overlay\\"
copy /y ".\\asset\\common\\bin\\SELECT.BIN" ".\\disc\\overlay\\"

copy /y ".\\source\\overlay\\boot\\obj\\psx\\build\\BOOT.BIN" ".\\disc\\overlay\\"
copy /y ".\\source\\overlay\\debug\\obj\\psx\\build\\DEBUG.BIN" ".\\disc\\overlay\\"
copy /y ".\\source\\overlay\\room_jump\\obj\\psx\\build\\ROOMJUMP.BIN" ".\\disc\\overlay\\"

armips ./source/assembly/overlay.s -temp ./result/overlay.txt >> ./result/overlay.log