@echo off
set MATLAB=E:\Program Files\MATLAB\R2014b
set MATLAB_ARCH=win64
set MATLAB_BIN="E:\Program Files\MATLAB\R2014b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=getDiscount_mex
set MEX_NAME=getDiscount_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for getDiscount > getDiscount_mex.mki
echo COMPILER=%COMPILER%>> getDiscount_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> getDiscount_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> getDiscount_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> getDiscount_mex.mki
echo LINKER=%LINKER%>> getDiscount_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> getDiscount_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> getDiscount_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> getDiscount_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> getDiscount_mex.mki
echo BORLAND=%BORLAND%>> getDiscount_mex.mki
echo OMPFLAGS= >> getDiscount_mex.mki
echo OMPLINKFLAGS= >> getDiscount_mex.mki
echo EMC_COMPILER=msvc110>> getDiscount_mex.mki
echo EMC_CONFIG=optim>> getDiscount_mex.mki
"E:\Program Files\MATLAB\R2014b\bin\win64\gmake" -B -f getDiscount_mex.mk
