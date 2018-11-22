@echo off
set MATLAB=E:\Program Files\MATLAB\R2014b
set MATLAB_ARCH=win64
set MATLAB_BIN="E:\Program Files\MATLAB\R2014b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=getAllSlope_mex
set MEX_NAME=getAllSlope_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for getAllSlope > getAllSlope_mex.mki
echo COMPILER=%COMPILER%>> getAllSlope_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> getAllSlope_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> getAllSlope_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> getAllSlope_mex.mki
echo LINKER=%LINKER%>> getAllSlope_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> getAllSlope_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> getAllSlope_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> getAllSlope_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> getAllSlope_mex.mki
echo BORLAND=%BORLAND%>> getAllSlope_mex.mki
echo OMPFLAGS= >> getAllSlope_mex.mki
echo OMPLINKFLAGS= >> getAllSlope_mex.mki
echo EMC_COMPILER=msvc110>> getAllSlope_mex.mki
echo EMC_CONFIG=optim>> getAllSlope_mex.mki
"E:\Program Files\MATLAB\R2014b\bin\win64\gmake" -B -f getAllSlope_mex.mk
