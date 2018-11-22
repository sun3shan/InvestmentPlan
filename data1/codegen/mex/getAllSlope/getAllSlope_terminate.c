/*
 * getAllSlope_terminate.c
 *
 * Code generation for function 'getAllSlope_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getAllSlope.h"
#include "getAllSlope_terminate.h"
#include <stdio.h>

/* Function Definitions */
void getAllSlope_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void getAllSlope_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (getAllSlope_terminate.c) */
