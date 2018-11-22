/*
 * fprintf.c
 *
 * Code generation for function 'fprintf'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getDiscount.h"
#include "fprintf.h"
#include "getDiscount_mexutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo k_emlrtRSI = { 38, "fprintf",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"
};

static emlrtRSInfo l_emlrtRSI = { 35, "fprintf",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"
};

static emlrtMCInfo emlrtMCI = { 69, 14, "fprintf",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"
};

static emlrtRSInfo m_emlrtRSI = { 69, "fprintf",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"
};

/* Function Declarations */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static real_T c_fprintf(const emlrtStack *sp, int32_T varargin_1);
static real_T e_fprintf(const emlrtStack *sp);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m4;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m4, 3, pArrays, "feval", true, location);
}

static real_T c_fprintf(const emlrtStack *sp, int32_T varargin_1)
{
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 7 };

  const mxArray *m0;
  char_T cv0[7];
  int32_T i;
  static const char_T cv1[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv1[2] = { 1, 15 };

  char_T cv2[15];
  static const char_T cv3[15] = { '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b',
    '\\', 'b', '%', '3', 'd', '%', '%' };

  const mxArray *d_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m0 = emlrtCreateCharArray(2, iv0);
  for (i = 0; i < 7; i++) {
    cv0[i] = cv1[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m0, cv0);
  emlrtAssign(&y, m0);
  b_y = NULL;
  m0 = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m0);
  c_y = NULL;
  m0 = emlrtCreateCharArray(2, iv1);
  for (i = 0; i < 15; i++) {
    cv2[i] = cv3[i];
  }

  emlrtInitCharArrayR2013a(sp, 15, m0, cv2);
  emlrtAssign(&c_y, m0);
  d_y = NULL;
  m0 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m0) = varargin_1;
  emlrtAssign(&d_y, m0);
  st.site = &m_emlrtRSI;
  return emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, d_y, &emlrtMCI), "feval");
}

static real_T e_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv2[2] = { 1, 7 };

  const mxArray *m1;
  char_T cv4[7];
  int32_T i;
  static const char_T cv5[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv3[2] = { 1, 2 };

  char_T cv6[2];
  static const char_T cv7[2] = { '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m1 = emlrtCreateCharArray(2, iv2);
  for (i = 0; i < 7; i++) {
    cv4[i] = cv5[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m1, cv4);
  emlrtAssign(&y, m1);
  b_y = NULL;
  m1 = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m1);
  c_y = NULL;
  m1 = emlrtCreateCharArray(2, iv3);
  for (i = 0; i < 2; i++) {
    cv6[i] = cv7[i];
  }

  emlrtInitCharArrayR2013a(sp, 2, m1, cv6);
  emlrtAssign(&c_y, m1);
  st.site = &m_emlrtRSI;
  return emlrt_marshallIn(&st, b_feval(&st, y, b_y, c_y, &emlrtMCI), "feval");
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m3;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m3, 4, pArrays, "feval", true, location);
}

void b_fprintf(const emlrtStack *sp, int32_T formatSpec)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &k_emlrtRSI;
  c_fprintf(&st, formatSpec);
}

void d_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &l_emlrtRSI;
  e_fprintf(&st);
}

/* End of code generation (fprintf.c) */
