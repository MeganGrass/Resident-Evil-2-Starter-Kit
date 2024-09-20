@echo OFF

setlocal enabledelayedexpansion

for /f "usebackq tokens=*" %%i in (`"C:/Program Files (x86)/Microsoft Visual Studio/Installer/vswhere.exe" -latest -requires Microsoft.Component.MSBuild -find MSBuild\**\Bin\MSBuild.exe`) do (
  "%%i" %*
  exit /b !errorlevel!
)