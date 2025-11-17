@echo off
REM Build script for PARRY on Windows using MinGW/GCC

echo ========================================
echo Building PARRY - Complete C Recreation
echo ========================================

REM Check if data files exist, generate if not
if not exist parry_dictionary.c (
    echo Generating C data files from LISP sources...
    python parse_lisp_data.py
    if errorlevel 1 (
        echo ERROR: Failed to parse LISP data
        exit /b 1
    )
)

echo.
echo Compiling source files...

gcc -c -Wall -Wextra -std=c99 -O2 main_complete.c -o main_complete.o
if errorlevel 1 goto error

gcc -c -Wall -Wextra -std=c99 -O2 parry_complete.c -o parry_complete.o
if errorlevel 1 goto error

gcc -c -Wall -Wextra -std=c99 -O2 parry_dictionary.c -o parry_dictionary.o
if errorlevel 1 goto error

gcc -c -Wall -Wextra -std=c99 -O2 parry_synonyms.c -o parry_synonyms.o
if errorlevel 1 goto error

gcc -c -Wall -Wextra -std=c99 -O2 parry_idioms.c -o parry_idioms.o
if errorlevel 1 goto error

gcc -c -Wall -Wextra -std=c99 -O2 parry_flares.c -o parry_flares.o
if errorlevel 1 goto error

echo.
echo Linking...

gcc main_complete.o parry_complete.o parry_dictionary.o parry_synonyms.o parry_idioms.o parry_flares.o -o parry_complete.exe
if errorlevel 1 goto error

echo.
echo ========================================
echo Build successful!
echo Run with: parry_complete.exe
echo ========================================
goto end

:error
echo.
echo ========================================
echo BUILD FAILED!
echo ========================================
exit /b 1

:end
