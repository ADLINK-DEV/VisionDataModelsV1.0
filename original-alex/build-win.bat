CLS
@ECHO OFF

SET INSTALL_DIR=C:\dist\adlink

IF "%EDGE_SDK_HOME%"=="" CALL :SourceEdgeSDK

ECHO EDGE_SDK_HOME=[%EDGE_SDK_HOME%]
ECHO OSPL_HOME=[%OSPL_HOME%]
ECHO EDGESDK is ready to rock

CALL :Build data-river install-config.bat
CALL :Build protobuf generate-models.bat
CALL :Build protobuf install-models.bat
CALL :Build protobuf-models build-generated.bat

EXIT /B %ERRORLEVEL%

:Build
	SET directory=%~1
	SET script=%~2
	SET this_dir=%CD%
	CD %directory%
	ECHO Entering [%directory%]
	CALL .\%script%  || exit /B
	CD %~dp0
	ECHO COMPLETED [%directory%] Returning to [%CD%]
	ECHO
EXIT /B

:SourceEdgeSDK
	ECHO Setup EDGESDK Environment
	set release_file="C:\Program Files\ADLINK\EdgeSDK\1.1.0\config_env_variables.bat"
	IF EXIST %release_file% (
		CALL %release_file%
	) ELSE (
		echo "On EdgeSDK installation, a previously installed valid version of Vortex OpenSplice was found."
		echo "Please update the config_env_variables.bat release_file variable to point to your Vortex OpenSplice installation."
		echo "Once updated, re-run config_env_variables.bat."
	)
EXIT /B
