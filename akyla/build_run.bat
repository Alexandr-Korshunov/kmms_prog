@echo off
chcp 1251 > nul

set EXE=example
set CHARSET=-finput-charset=utf-8 -fexec-charset=windows-1251

g++ %CHARSET% main.cpp input.cpp output.cpp sort.cpp -o %EXE%.exe
if errorlevel 1 (
echo Ошибка компиляции
pause
exit /b 1
)

%EXE%.exe