/*
 * getAllSlope_mexutil.h
 *
 * Code generation for function 'getAllSlope_mexutil'
 *
 */

#ifndef GETALLSLOPE_MEXUTIL_H
#define GETALLSLOPE_MEXUTIL_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "getAllSlope_types.h"

/* Function Declarations */
extern real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
extern real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_feval,
  const char_T *identifier);
extern real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

#endif

/* End of code generation (getAllSlope_mexutil.h) */
