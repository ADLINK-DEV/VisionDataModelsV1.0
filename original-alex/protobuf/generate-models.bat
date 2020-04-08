@ECHO OFF

SET INSTALL_DIR="C:\dist\adlink"
SET PROTODIR=C:\dist\protobuf\bin
SET BUILD_DIR="proto-build"

ECHO Launch Windows Protobuf Generate

if EXIST %CD%\build (
	ECHO y|RMDIR /S %CD%\build
)
MKDIR %BUILD_DIR%

ECHO Build in %CD%

IF NOT EXIST %INSTALL_DIR% (
	MKDIR %INSTALL_DIR%
)

SET PATH=C:\Qt\Tools\mingw730_64\bin;%PATH%

ECHO %PATH%

CALL :Generate common  || exit /b
CALL :Generate config  || exit /b
CALL :Generate data-interfaces || exit /b
CALL :Generate device || exit /b
CALL :Generate smart-pallet || exit /b
CALL :Generate alarm || exit /b

ECHO Protobuf Generation Complete!

if EXIST %CD%\%BUILD_DIR% (
	REM ECHO y|RMDIR /S %CD%\%BUILD_DIR%
)

EXIT /B %ERRORLEVEL%


:Generate
    SET name=%~1
    SET output_dir=%CD%\..\protobuf-models\src

	IF NOT EXIST %output_dir% (
		MKDIR %output_dir%
	)

	SET plugin=
	SET inc=-I=%cd%
	SET out=--cpp_out=%BUILD_DIR%

	SET input=%name%.proto
    IF EXIST %input% (
		ECHO Generate [%input%]
        CALL C:\dist\mingw32\protobuf\bin\protoc.exe %inc% %out% %name%.proto || exit /b
    ) ELSE (
		ECHO Input proto does not exist [%input%]
		exit /B 255
	)

    MOVE /Y %BUILD_DIR%\%name%.pb.h %CD%\..\protobuf-models\include\vision-protobuf-data-models || exit /b
    MOVE /Y %BUILD_DIR%\%name%.pb.cc %output_dir% || exit /b
EXIT /B 0
