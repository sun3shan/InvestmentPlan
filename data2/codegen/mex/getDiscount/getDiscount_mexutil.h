/*
 * getDiscount_mexutil.h
 *
 * Code generation for function 'getDiscount_mexutil'
 *
 */

#ifndef __GETDISCOUNT_MEXUTIL_H__
#define __GETDISCOUNT_MEXUTIL_H__

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
#include "getDiscount_types.h"

/* Function Declarations */
extern real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);

#ifdef __WATCOMC__

#pragma aux b_emlrt_marshallIn value [8087];

#endif

extern real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_feval,
  const char_T *identifier);

#ifdef __WATCOMC__

#pragma aux emlrt_marshallIn value [8087];

#endif

extern real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

#ifdef __WATCOMC__

#pragma aux g_emlrt_marshallIn value [8087];

#endif
#endif

/* End of code generation (getDiscount_mexutil.h) */
