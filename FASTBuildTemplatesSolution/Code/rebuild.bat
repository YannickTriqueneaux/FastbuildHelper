@echo off
setlocal enabledelayedexpansion

set "currentpath=%cd%"
echo current path !currentpath!

set "codebuildpath=!currentpath!\..\..\..\..\Build\fastbuild"
echo fbuild file path !codebuildpath!

cd !codebuildpath!
fbuild -vs -clean