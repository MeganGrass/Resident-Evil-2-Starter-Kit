@echo OFF

del /s /q /f ".\\result\\audio.txt"
del /s /q /f ".\\result\\audio.log"

armips ./source/assembly/audio.s -temp ./result/audio.txt >> ./result/audio.log