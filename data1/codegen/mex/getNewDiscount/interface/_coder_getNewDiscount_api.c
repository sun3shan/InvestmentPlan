/*
 * _coder_getNewDiscount_api.c
 *
 * Code generation for function '_coder_getNewDiscount_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getNewDiscount.h"
#include "_coder_getNewDiscount_api.h"
#include "fprintf.h"
#include "getNewDiscount_mexutil.h"
#include <stdio.h>

/* Function Declarations */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *data, const
  char_T *identifier, struct0_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[200]);
static const mxArray *emlrt_marshallOut(const struct1_T *u);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *SLOPE,
  const char_T *identifier))[600000000];
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[600000000];
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[200]);
static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[600000000];

/* Function Definitions */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *data, const
  char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  d_emlrt_marshallIn(sp, emlrtAlias(data), &thisId, y);
  emlrtDestroyArray(&data);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[4] = { "od_code", "avg_price", "num_package",
    "discount_amount_limit" };

  thisId.fParent = parentId;
  emlrtCheckStructR2012b(sp, parentId, u, 4, fieldNames, 0U, 0);
  thisId.fIdentifier = "od_code";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "od_code")),
                     &thisId, y->od_code);
  thisId.fIdentifier = "avg_price";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "avg_price")),
                     &thisId, y->avg_price);
  thisId.fIdentifier = "num_package";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "num_package")),
                     &thisId, y->num_package);
  thisId.fIdentifier = "discount_amount_limit";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "discount_amount_limit")), &thisId, y->discount_amount_limit);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[200])
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *emlrt_marshallOut(const struct1_T *u)
{
  const mxArray *y;
  const mxArray *b_y;
  static const int32_T iv7[1] = { 200 };

  const mxArray *m4;
  real_T *pData;
  int32_T i;
  const mxArray *c_y;
  static const int32_T iv8[1] = { 200 };

  const mxArray *d_y;
  static const int32_T iv9[1] = { 200 };

  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  b_y = NULL;
  m4 = emlrtCreateNumericArray(1, iv7, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m4);
  for (i = 0; i < 200; i++) {
    pData[i] = u->DISCOUNT[i];
  }

  emlrtAssign(&b_y, m4);
  emlrtAddField(y, b_y, "DISCOUNT", 0);
  c_y = NULL;
  m4 = emlrtCreateNumericArray(1, iv8, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m4);
  for (i = 0; i < 200; i++) {
    pData[i] = u->NUMPKG[i];
  }

  emlrtAssign(&c_y, m4);
  emlrtAddField(y, c_y, "NUMPKG", 0);
  d_y = NULL;
  m4 = emlrtCreateNumericArray(1, iv9, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m4);
  for (i = 0; i < 200; i++) {
    pData[i] = u->INCREMENT[i];
  }

  emlrtAssign(&d_y, m4);
  emlrtAddField(y, d_y, "INCREMENT", 0);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *SLOPE,
  const char_T *identifier))[600000000]
{
  real_T (*y)[600000000];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = g_emlrt_marshallIn(sp, emlrtAlias(SLOPE), &thisId);
  emlrtDestroyArray(&SLOPE);
  return y;
}
  static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[600000000]
{
  real_T (*y)[600000000];
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[200])
{
  int32_T iv10[1];
  int32_T i0;
  iv10[0] = 200;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, iv10);
  for (i0 = 0; i0 < 200; i0++) {
    ret[i0] = (*(real_T (*)[200])mxGetData(src))[i0];
  }

  emlrtDestroyArray(&src);
}

static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[600000000]
{
  real_T (*ret)[600000000];
  int32_T iv11[2];
  int32_T i1;
  for (i1 = 0; i1 < 2; i1++) {
    iv11[i1] = 3000000 + -2999800 * i1;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv11);
  ret = (real_T (*)[600000000])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  void getNewDiscount_api(const mxArray * const prhs[3], const mxArray *plhs[1])
{
  struct0_T data;
  real_T (*SLOPE)[600000000];
  real_T step;
  struct1_T res;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "data", &data);
  SLOPE = f_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "SLOPE");
  step = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "step");

  /* Invoke the target function */
  getNewDiscount(&st, &data, *SLOPE, step, &res);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(&res);
}

/* End of code generation (_coder_getNewDiscount_api.c) */
