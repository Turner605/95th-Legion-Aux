@echo off

echo "Building Main"
cd 95th-Legion-Main-Rework/
hemtt.exe build
cd ../

echo "Building Extras"
cd 95th-Legion-Extras/
hemtt.exe build
cd ../

echo "Building Server"
cd 95th-Legion-Server/
hemtt.exe build
cd ../

pause
