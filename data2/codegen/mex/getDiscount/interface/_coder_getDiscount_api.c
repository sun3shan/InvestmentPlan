/*
 * _coder_getDiscount_api.c
 *
 * Code generation for function '_coder_getDiscount_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getDiscount.h"
#include "_coder_getDiscount_api.h"
#include "fprintf.h"
#include "getDiscount_mexutil.h"
#include <stdio.h>

/* Function Declarations */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *data, const
  char_T *identifier, struct0_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, int64_T y[200]);
static const mxArray *emlrt_marshallOut(const struct1_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[200]);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, int64_T ret[200]);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[200]);

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
  f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "avg_price")),
                     &thisId, y->avg_price);
  thisId.fIdentifier = "num_package";
  f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "num_package")),
                     &thisId, y->num_package);
  thisId.fIdentifier = "discount_amount_limit";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "discount_amount_limit")), &thisId, y->discount_amount_limit);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, int64_T y[200])
{
  h_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *emlrt_marshallOut(const struct1_T *u)
{
  const mxArray *y;
  const mxArray *b_y;
  static const int32_T iv4[1] = { 200 };

  const mxArray *m2;
  real_T *pData;
  int32_T i;
  const mxArray *c_y;
  static const int32_T iv5[1] = { 200 };

  const mxArray *d_y;
  static const int32_T iv6[1] = { 200 };

  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  b_y = NULL;
  m2 = emlrtCreateNumericArray(1, iv4, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m2);
  for (i = 0; i < 200; i++) {
    pData[i] = u->DISCOUNT[i];
  }

  emlrtAssign(&b_y, m2);
  emlrtAddField(y, b_y, "DISCOUNT", 0);
  c_y = NULL;
  m2 = emlrtCreateNumericArray(1, iv5, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m2);
  for (i = 0; i < 200; i++) {
    pData[i] = u->NUMPKG[i];
  }

  emlrtAssign(&c_y, m2);
  emlrtAddField(y, c_y, "NUMPKG", 0);
  d_y = NULL;
  m2 = emlrtCreateNumericArray(1, iv6, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m2);
  for (i = 0; i < 200; i++) {
    pData[i] = u->INCREMENT[i];
  }

  emlrtAssign(&d_y, m2);
  emlrtAddField(y, d_y, "INCREMENT", 0);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[200])
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, int64_T ret[200])
{
  int32_T iv7[2];
  int32_T i2;
  for (i2 = 0; i2 < 2; i2++) {
    iv7[i2] = 1 + 199 * i2;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "int64", false, 2U, iv7);
  for (i2 = 0; i2 < 200; i2++) {
    ret[i2] = (*(int64_T (*)[200])mxGetData(src))[i2];
  }

  emlrtDestroyArray(&src);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[200])
{
  int32_T iv8[2];
  int32_T i3;
  for (i3 = 0; i3 < 2; i3++) {
    iv8[i3] = 1 + 199 * i3;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv8);
  for (i3 = 0; i3 < 200; i3++) {
    ret[i3] = (*(real_T (*)[200])mxGetData(src))[i3];
  }

  emlrtDestroyArray(&src);
}

void getDiscount_api(const mxArray * const prhs[2], const mxArray *plhs[1])
{
  struct0_T data;
  real_T step;
  struct1_T res;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "data", &data);
  step = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "step");

  /* Invoke the target function */
  getDiscount(&st, &data, step, &res);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(&res);
}

/* End of code generation (_coder_getDiscount_api.c) */
