/*
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getAllSlope.h"
#include "error.h"

/* Variable Definitions */
static emlrtRTEInfo d_emlrtRTEI = { 19,/* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\error.m"/* pName */
};

/* Function Definitions */
void error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI,
    "Coder:toolbox:power_domainError", "Coder:toolbox:power_domainError", 0);
}

/* End of code generation (error.c) */
