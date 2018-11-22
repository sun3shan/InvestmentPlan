/*
 * getNewDiscount_terminate.c
 *
 * Code generation for function 'getNewDiscount_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getNewDiscount.h"
#include "getNewDiscount_terminate.h"
#include "_coder_getNewDiscount_mex.h"
#include "getNewDiscount_data.h"

/* Function Definitions */
void getNewDiscount_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void getNewDiscount_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (getNewDiscount_terminate.c) */
