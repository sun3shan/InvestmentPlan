/*
 * getAllSlope.h
 *
 * Code generation for function 'getAllSlope'
 *
 */

#ifndef __GETALLSLOPE_H__
#define __GETALLSLOPE_H__

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
#include "getAllSlope_types.h"

/* Function Declarations */
extern void getAllSlope(const emlrtStack *sp, const struct0_T *data, real_T step,
  emxArray_real_T *SLOPE);

#endif

/* End of code generation (getAllSlope.h) */
