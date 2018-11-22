/*
 * eml_error.c
 *
 * Code generation for function 'eml_error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getAllSlope.h"
#include "eml_error.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRTEInfo e_emlrtRTEI = { 20, 5, "eml_error",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_error.m"
};

/* Function Definitions */
void eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &e_emlrtRTEI,
    "Coder:toolbox:power_domainError", 0);
}

/* End of code generation (eml_error.c) */
