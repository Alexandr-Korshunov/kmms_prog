@echo off
chcp 1251 > nul

set MAIN=main
set EXE=example
set CHARSET=-finput-charset=utf-8 -fexec-charset=windows-1251

g++ %CHARSET% %MAIN%.cpp -o %EXE%.exe
if errorlevel 1 (
echo Ошибка компиляции
pause
exit /b 1
)

%EXE%.exe