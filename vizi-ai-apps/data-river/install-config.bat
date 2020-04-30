@ECHO OFF

INSTALL_DIR="C:/dist/adlink"

CALL :MakeProject

ECHO Install Config Complete!
EXIT /B %ERRORLEVEL%

:MakeProject
	IF NOT EXIST build (
		REM ECHO y|RMDIR /S build
    MKDIR build
	)
	CD build
	SET VCPKG_ROOT=C:\dist\common\vcpkg
	cmake .. ^
    -G "Visual Studio 15 2017" ^
    -DCMAKE_TOOLCHAIN_FILE="%VCPKG_ROOT%\scripts\buildsystems\vcpkg.cmake" ^
    -DVCPKG_TARGET_TRIPLET=x64-windows-static ^
    -DCMAKE_INSTALL_PREFIX=C:/dist/adlink ^
    -DCMAKE_GENERATOR_PLATFORM=x64
	cmake --target build .
  msbuild BUILD.vcxproj
  echo Install
	cmake --target install .
  msbuild INSTALL.vcxproj
	cd ..
EXIT /B 0
