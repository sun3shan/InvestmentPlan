@echo off
set MATLAB=E:\Program Files\MATLAB\R2014b
set MATLAB_ARCH=win64
set MATLAB_BIN="E:\Program Files\MATLAB\R2014b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=getNewDiscount_mex
set MEX_NAME=getNewDiscount_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for getNewDiscount > getNewDiscount_mex.mki
echo COMPILER=%COMPILER%>> getNewDiscount_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> getNewDiscount_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> getNewDiscount_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> getNewDiscount_mex.mki
echo LINKER=%LINKER%>> getNewDiscount_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> getNewDiscount_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> getNewDiscount_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> getNewDiscount_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> getNewDiscount_mex.mki
echo BORLAND=%BORLAND%>> getNewDiscount_mex.mki
echo OMPFLAGS= >> getNewDiscount_mex.mki
echo OMPLINKFLAGS= >> getNewDiscount_mex.mki
echo EMC_COMPILER=msvc110>> getNewDiscount_mex.mki
echo EMC_CONFIG=optim>> getNewDiscount_mex.mki
"E:\Program Files\MATLAB\R2014b\bin\win64\gmake" -B -f getNewDiscount_mex.mk
