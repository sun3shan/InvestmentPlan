/*
 * _coder_getAllSlope_mex.c
 *
 * Code generation for function '_coder_getAllSlope_mex'
 *
 */

/* Include files */
#include "getAllSlope.h"
#include "_coder_getAllSlope_mex.h"
#include "getAllSlope_terminate.h"
#include "_coder_getAllSlope_api.h"
#include "getAllSlope_initialize.h"
#include "getAllSlope_data.h"

/* Function Declarations */
static void getAllSlope_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[2]);

/* Function Definitions */
static void getAllSlope_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[2])
{
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4,
                        11, "getAllSlope");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "getAllSlope");
  }

  /* Call the function. */
  getAllSlope_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  getAllSlope_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(getAllSlope_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  getAllSlope_initialize();

  /* Dispatch the entry-point. */
  getAllSlope_mexFunction(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_getAllSlope_mex.c) */
