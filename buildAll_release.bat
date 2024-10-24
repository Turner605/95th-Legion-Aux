@echo off

echo "Building Main"
cd 95th-Legion-Main-Rework/
hemtt.exe release
cd ../

echo "Building Extras"
cd 95th-Legion-Extras/
hemtt.exe release
cd ../

echo "Building Server"
cd 95th-Legion-Server/
hemtt.exe release
cd ../

pause
