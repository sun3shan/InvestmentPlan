/*
 * _coder_getAllSlope_api.c
 *
 * Code generation for function '_coder_getAllSlope_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getAllSlope.h"
#include "_coder_getAllSlope_api.h"
#include "getAllSlope_emxutil.h"
#include "fprintf.h"
#include "getAllSlope_mexutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = { 1, 1, "_coder_getAllSlope_api", "" };

/* Function Declarations */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *data, const
  char_T *identifier, struct0_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[200]);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
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
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv4[2] = { 0, 0 };

  const mxArray *m2;
  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv4, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m2, (void *)u->data);
  emlrtSetDimensions((mxArray *)m2, u->size, 2);
  emlrtAssign(&y, m2);
  return y;
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[200])
{
  int32_T iv5[1];
  int32_T i4;
  iv5[0] = 200;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, iv5);
  for (i4 = 0; i4 < 200; i4++) {
    ret[i4] = (*(real_T (*)[200])mxGetData(src))[i4];
  }

  emlrtDestroyArray(&src);
}

void getAllSlope_api(const mxArray * const prhs[2], const mxArray *plhs[1])
{
  emxArray_real_T *SLOPE;
  struct0_T data;
  real_T step;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &SLOPE, 2, &b_emlrtRTEI, true);

  /* Marshall function inputs */
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "data", &data);
  step = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "step");

  /* Invoke the target function */
  getAllSlope(&st, &data, step, SLOPE);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(SLOPE);
  SLOPE->canFreeData = false;
  emxFree_real_T(&SLOPE);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_getAllSlope_api.c) */
