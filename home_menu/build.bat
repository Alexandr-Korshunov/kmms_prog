@echo off
set CPP_FILES=menu.cpp menu_func.cpp menu_items.cpp
set APP=example.exe

if exist %APP% del %APP%
g++ %CPP_FILES% -o %APP%

if exist %APP% (
    %APP%
) else (
    echo Ошибка компиляции!
)
