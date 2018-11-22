/*
 * _coder_getNewDiscount_mex.c
 *
 * Code generation for function '_coder_getNewDiscount_mex'
 *
 */

/* Include files */
#include "getNewDiscount.h"
#include "_coder_getNewDiscount_mex.h"
#include "getNewDiscount_terminate.h"
#include "_coder_getNewDiscount_api.h"
#include "getNewDiscount_initialize.h"
#include "getNewDiscount_data.h"

/* Function Declarations */
static void getNewDiscount_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T
  nrhs, const mxArray *prhs[3]);

/* Function Definitions */
static void getNewDiscount_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T
  nrhs, const mxArray *prhs[3])
{
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        14, "getNewDiscount");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "getNewDiscount");
  }

  /* Call the function. */
  getNewDiscount_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  getNewDiscount_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(getNewDiscount_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  getNewDiscount_initialize();

  /* Dispatch the entry-point. */
  getNewDiscount_mexFunction(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_getNewDiscount_mex.c) */
