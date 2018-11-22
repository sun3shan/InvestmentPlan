/*
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getNewDiscount.h"
#include "error.h"

/* Variable Definitions */
static emlrtRTEInfo j_emlrtRTEI = { 19,/* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\error.m"/* pName */
};

/* Function Definitions */
void b_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2018a(sp, &j_emlrtRTEI,
    "Coder:toolbox:eml_setop_unsortedB", "Coder:toolbox:eml_setop_unsortedB", 0);
}

void error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2018a(sp, &j_emlrtRTEI,
    "Coder:toolbox:eml_setop_unsortedA", "Coder:toolbox:eml_setop_unsortedA", 0);
}

/* End of code generation (error.c) */
