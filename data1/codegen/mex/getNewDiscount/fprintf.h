/*
 * fprintf.h
 *
 * Code generation for function 'fprintf'
 *
 */

#ifndef __FPRINTF_H__
#define __FPRINTF_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "getNewDiscount_types.h"

/* Function Declarations */
extern void b_fprintf(const emlrtStack *sp, int32_T formatSpec);
extern void d_fprintf(const emlrtStack *sp);

#endif

/* End of code generation (fprintf.h) */
