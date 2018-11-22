/*
 * getAllSlope_initialize.c
 *
 * Code generation for function 'getAllSlope_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getAllSlope.h"
#include "getAllSlope_initialize.h"
#include "_coder_getAllSlope_mex.h"
#include "getAllSlope_data.h"

/* Function Definitions */
void getAllSlope_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (getAllSlope_initialize.c) */
