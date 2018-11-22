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
#include "getNewDiscount_mexutil.h"
#include "getNewDiscount_data.h"

/* Function Declarations */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *data, const
  char_T *identifier, struct0_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[200]);
static const mxArray *emlrt_marshallOut(const struct1_T *u);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *SLOPE,
  const char_T *identifier))[435678000];
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[435678000];
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[200]);
static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[435678000];

/* Function Definitions */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *data, const
  char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(data), &thisId, y);
  emlrtDestroyArray(&data);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[4] = { "od_code", "avg_price", "num_package",
    "discount_amount_limit" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 4, fieldNames, 0U, &dims);
  thisId.fIdentifier = "od_code";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "od_code")),
                     &thisId, y->od_code);
  thisId.fIdentifier = "avg_price";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1, "avg_price")),
                     &thisId, y->avg_price);
  thisId.fIdentifier = "num_package";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2,
    "num_package")), &thisId, y->num_package);
  thisId.fIdentifier = "discount_amount_limit";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3,
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
  static const char * sv0[3] = { "DISCOUNT", "NUMPKG", "INCREMENT" };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv4[1] = { 200 };

  real_T *pData;
  int32_T i0;
  int32_T i;
  static const int32_T iv5[1] = { 200 };

  static const int32_T iv6[1] = { 200 };

  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 3, sv0));
  b_y = NULL;
  m1 = emlrtCreateNumericArray(1, iv4, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m1);
  i0 = 0;
  for (i = 0; i < 200; i++) {
    pData[i0] = u->DISCOUNT[i];
    i0++;
  }

  emlrtAssign(&b_y, m1);
  emlrtSetFieldR2017b(y, 0, "DISCOUNT", b_y, 0);
  b_y = NULL;
  m1 = emlrtCreateNumericArray(1, iv5, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m1);
  i0 = 0;
  for (i = 0; i < 200; i++) {
    pData[i0] = u->NUMPKG[i];
    i0++;
  }

  emlrtAssign(&b_y, m1);
  emlrtSetFieldR2017b(y, 0, "NUMPKG", b_y, 1);
  b_y = NULL;
  m1 = emlrtCreateNumericArray(1, iv6, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m1);
  i0 = 0;
  for (i = 0; i < 200; i++) {
    pData[i0] = u->INCREMENT[i];
    i0++;
  }

  emlrtAssign(&b_y, m1);
  emlrtSetFieldR2017b(y, 0, "INCREMENT", b_y, 2);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *SLOPE,
  const char_T *identifier))[435678000]
{
  real_T (*y)[435678000];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = g_emlrt_marshallIn(sp, emlrtAlias(SLOPE), &thisId);
  emlrtDestroyArray(&SLOPE);
  return y;
}
  static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[435678000]
{
  real_T (*y)[435678000];
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[200])
{
  static const int32_T dims[1] = { 200 };

  int32_T i1;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i1 = 0; i1 < 200; i1++) {
    ret[i1] = (*(real_T (*)[200])emlrtMxGetData(src))[i1];
  }

  emlrtDestroyArray(&src);
}

static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[435678000]
{
  real_T (*ret)[435678000];
  static const int32_T dims[2] = { 2178390, 200 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[435678000])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  void getNewDiscount_api(const mxArray * const prhs[3], int32_T nlhs, const
  mxArray *plhs[1])
{
  struct0_T data;
  real_T (*SLOPE)[435678000];
  real_T step;
  struct1_T res;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
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
