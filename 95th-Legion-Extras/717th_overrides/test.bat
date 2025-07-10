@echo off

echo Counting 717th Overrides

set "folder=./addons"

for /F %%a in ('
    dir /B /A:D "%folder%\*" ^| find /C /V ""
') do (
    set "counter=%%a"
)

echo Creating %counter% PBOs

for /f %%f in ('dir /B /A:D "%folder%\*"') do (
  echo Processing Folder %%f
  MakePbo -P addons\%%f ..\717th_overrides\output\%%f
  echo Processed Folder %%f
)

echo Copying PBO's
xcopy .\output\*.* ..\.hemttout\build\addons. /Y
echo Copy Complete