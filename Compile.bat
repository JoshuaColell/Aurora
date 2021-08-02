@echo off
cls
echo Please select a number
echo ==================================================
echo 1. Compile and Organize everything
echo ==================================================
:start
echo.
title Select a number that is gonna fulfill your needs.


set /p choice=Type the number here: 
if not '%choice%'=='' set choice=%choice:~0,1%
if '%choice%'=='1' goto caoe
echo "%choice%" is not valid, try again
echo.
echo Please select a CORRECT number
goto start
:caoe
set /p choice=Type the VS Build type here: 
if not "%choice%"=="" set choice=%choice:~0,6%
if "%choice%"=="vs2017" goto 17
if "%choice%"=="vs2019" goto 19
echo "%choice%" is not valid, try again (Also if you are using a VS Build lower than vs2017, then this would not work)
echo.
goto caoe
:17
call vendor\bin\premake\premake5.exe "%choice%"
pause
goto end
:19
call vendor\bin\premake\premake5.exe "%choice%"
pause
goto end
pause
goto end