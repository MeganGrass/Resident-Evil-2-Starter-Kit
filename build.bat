@echo OFF

call ".\\overlay.bat"

call ".\\audio.bat"

call ".\\executable.bat"

del /s /q /f ".\\result\\mkpsxiso.log"

reio mkpsxiso -y disc.xml >> ".\\result\\mkpsxiso.log"