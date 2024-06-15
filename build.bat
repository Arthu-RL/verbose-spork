@echo off
setlocal enabledelayedexpansion

REM Create directory bin if it doesn't exist
if not exist build (
    mkdir build
)

REM Run cmake and check for errors
cmake -B build && cmake --build build
if errorlevel 1 (
    echo Build process failed!
    pause
    exit /b 1
)

REM Print compilation finished message
echo.
echo Compilation finished at %DATE% %TIME%
echo.
pause