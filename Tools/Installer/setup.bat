@echo off
setlocal enabledelayedexpansion

set "setupDir=%cd%"
echo running FastBuild installer from !setupDir!

set "fastbuildDir=%PROGRAMFILES%\FastBuild"

echo ------ starting to tranfer files -------
echo:
echo !fastbuildDir!
cd %PROGRAMFILES%
mkdir FastBuild

robocopy "!setupDir!\FastBuildFiles" "!fastbuildDir!"
echo:
echo ------ files transfered -------

echo:
echo:
set "pathvar="%path%""
echo:

echo !pathvar!
echo:
echo:
If not %pathvar:FastBuild=% == %pathvar% (
	echo envvar path already contains Fastbuild - variable environement setting skipped
) else (
	echo envvar path doesn't contains FastBuild - adding FastBuild path into "path" envvar
	set "newPath=%path%;!fastbuildDir!"
	echo:
	setx /m path "!newPath!"
	echo:
	echo new path envvar:
	echo !newPath!
)

echo:
echo:

echo getting visualstudio path
for /f "delims=" %%i in ('where cl.exe') do set vsDir=%%i
set vsDir=%vsDir:\VC\bin\cl.exe=%
echo !vsDir!

robocopy "!setupDir!" "!vsDir!\Common7\IDE" usertype.dat

echo:
echo:
echo .. Installation successful ..

endlocal