/*
 * getPkgNums.c
 *
 * Code generation for function 'getPkgNums'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getDiscount.h"
#include "getPkgNums.h"
#include "eml_error.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo g_emlrtRSI = { 2, "getPkgNums",
  "E:\\PythonWorkspace\\2018_02\\getPkgNums.m" };

static emlrtRSInfo h_emlrtRSI = { 3, "getPkgNums",
  "E:\\PythonWorkspace\\2018_02\\getPkgNums.m" };

static emlrtRSInfo i_emlrtRSI = { 42, "power",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\power.m" };

static emlrtRSInfo j_emlrtRSI = { 56, "power",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\power.m" };

/* Function Definitions */
real_T getPkgNums(const emlrtStack *sp, real_T ownPrice, const real_T
                  otherPrice[52], real_T numPkg)
{
  real_T x;
  real_T y[52];
  int32_T k;
  real_T b_y;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &g_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &i_emlrtRSI;
  if (ownPrice < 0.0) {
    c_st.site = &j_emlrtRSI;
    eml_error(&c_st);
  }

  x = muDoubleScalarPower(ownPrice, -1.09);
  st.site = &h_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  for (k = 0; k < 52; k++) {
    if (otherPrice[k] < 0.0) {
      c_st.site = &j_emlrtRSI;
      eml_error(&c_st);
    }

    y[k] = muDoubleScalarPower(otherPrice[k], -1.09);
  }

  b_y = y[0];
  for (k = 0; k < 51; k++) {
    b_y += y[k + 1];
  }

  return muDoubleScalarRound(x / (x + b_y) * numPkg);
}

/* End of code generation (getPkgNums.c) */
