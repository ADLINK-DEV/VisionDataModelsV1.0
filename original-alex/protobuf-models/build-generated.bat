@ECHO OFF

SET INSTALL_DIR=C:\dist\adlink

CALL :MakeProtobuf

ECHO Build Protobuf Models Complete!
EXIT /B %ERRORLEVEL%

:MakeProtobuf
	IF NOT EXIST build (
		REM ECHO y|RMDIR /S build
		MKDIR build
	)
	CD build
	SET VCPKG_ROOT=C:\dist\common\vcpkg
	cmake .. -G "Visual Studio 15 2017" -DCMAKE_TOOLCHAIN_FILE="%VCPKG_ROOT%\scripts\buildsystems\vcpkg.cmake" -DVCPKG_TARGET_TRIPLET=x64-windows-static -DCMAKE_GENERATOR_PLATFORM=x64
	cmake --target build .
  msbuild BUILD.vcxproj
  echo Install
	cmake --target install .
  msbuild INSTALL.vcxproj
	cd ..
EXIT /B 0
