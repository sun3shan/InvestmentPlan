/*
 * getAllSlope.c
 *
 * Code generation for function 'getAllSlope'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "getAllSlope.h"
#include "getAllSlope_emxutil.h"
#include "getPkgNums.h"
#include "getAllSlope_mexutil.h"
#include "getAllSlope_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 8,     /* lineNo */
  "getAllSlope",                       /* fcnName */
  "D:\\2018_02\\getAllSlope.m"         /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 18,  /* lineNo */
  "getAllSlope",                       /* fcnName */
  "D:\\2018_02\\getAllSlope.m"         /* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 22,  /* lineNo */
  "getAllSlope",                       /* fcnName */
  "D:\\2018_02\\getAllSlope.m"         /* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 38,  /* lineNo */
  "fprintf",                           /* fcnName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 4,   /* lineNo */
  "getSlope",                          /* fcnName */
  "D:\\2018_02\\getSlope.m"            /* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 8,   /* lineNo */
  "getSlope",                          /* fcnName */
  "D:\\2018_02\\getSlope.m"            /* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 35,  /* lineNo */
  "fprintf",                           /* fcnName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 60,    /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 1,   /* lineNo */
  20,                                  /* colNo */
  "getAllSlope",                       /* fName */
  "D:\\2018_02\\getAllSlope.m"         /* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 6, /* lineNo */
  16,                                  /* colNo */
  "getAllSlope",                       /* fName */
  "D:\\2018_02\\getAllSlope.m"         /* pName */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  200,                                 /* iLast */
  2,                                   /* lineNo */
  31,                                  /* colNo */
  "data.num_package",                  /* aName */
  "getSlope",                          /* fName */
  "D:\\2018_02\\getSlope.m",           /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 3,     /* lineNo */
  15,                                  /* colNo */
  "getAllSlope",                       /* fName */
  "D:\\2018_02\\getAllSlope.m",        /* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  15,                                  /* colNo */
  "SLOPE",                             /* aName */
  "getAllSlope",                       /* fName */
  "D:\\2018_02\\getAllSlope.m",        /* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo m_emlrtRSI = { 60,  /* lineNo */
  "fprintf",                           /* fcnName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

/* Function Declarations */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m3;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m3, 3, pArrays, "feval", true, location);
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m2;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m2, 4, pArrays, "feval", true, location);
}

void getAllSlope(const emlrtStack *sp, const struct0_T *data, real_T step,
                 emxArray_real_T *SLOPE)
{
  real_T dp1;
  int32_T i0;
  real_T dp2;
  int32_T idx;
  int32_T k;
  boolean_T exitg1;
  real_T MAXDISCOUNT;
  real_T b_index;
  int32_T discount;
  real_T b_discount;
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 7 };

  static const char_T u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  int32_T i;
  static const int32_T iv1[2] = { 1, 7 };

  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 2 };

  static const char_T b_u[2] = { '\\', 'n' };

  real_T otherPrice[52];
  real_T discount2;
  static const int32_T iv3[2] = { 1, 15 };

  static const char_T c_u[15] = { '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b',
    '\\', 'b', '%', '3', 'd', '%', '%' };

  const mxArray *d_y;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  dp1 = 3.0E+6 / step;
  i0 = SLOPE->size[0] * SLOPE->size[1];
  dp2 = muDoubleScalarRound(dp1);
  if (dp2 < 2.147483648E+9) {
    if (dp2 >= -2.147483648E+9) {
      idx = (int32_T)dp2;
    } else {
      idx = MIN_int32_T;
    }
  } else if (dp2 >= 2.147483648E+9) {
    idx = MAX_int32_T;
  } else {
    idx = 0;
  }

  if (!(idx >= 0)) {
    emlrtNonNegativeCheckR2012b(idx, &emlrtDCI, sp);
  }

  SLOPE->size[0] = idx;
  SLOPE->size[1] = 200;
  emxEnsureCapacity_real_T(sp, SLOPE, i0, &emlrtRTEI);
  dp2 = muDoubleScalarRound(dp1);
  if (dp2 < 2.147483648E+9) {
    if (dp2 >= -2.147483648E+9) {
      i0 = (int32_T)dp2;
    } else {
      i0 = MIN_int32_T;
    }
  } else if (dp2 >= 2.147483648E+9) {
    i0 = MAX_int32_T;
  } else {
    i0 = 0;
  }

  if (!(i0 >= 0)) {
    emlrtNonNegativeCheckR2012b(i0, &emlrtDCI, sp);
  }

  idx = i0 * 200;
  for (i0 = 0; i0 < idx; i0++) {
    SLOPE->data[i0] = 0.0;
  }

  if (!muDoubleScalarIsNaN(data->discount_amount_limit[0])) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 201)) {
      if (!muDoubleScalarIsNaN(data->discount_amount_limit[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    MAXDISCOUNT = data->discount_amount_limit[0];
  } else {
    MAXDISCOUNT = data->discount_amount_limit[idx - 1];
    while (idx + 1 < 201) {
      if (MAXDISCOUNT < data->discount_amount_limit[idx]) {
        MAXDISCOUNT = data->discount_amount_limit[idx];
      }

      idx++;
    }
  }

  b_index = 1.0;
  i0 = (int32_T)((3.0E+6 + step) / step);
  emlrtForLoopVectorCheckR2012b(0.0, step, 3.0E+6, mxDOUBLE_CLASS, i0,
    &c_emlrtRTEI, sp);
  discount = 0;
  exitg1 = false;
  while ((!exitg1) && (discount <= i0 - 1)) {
    b_discount = (real_T)discount * step;
    if ((!muDoubleScalarIsInf(b_discount)) && (!muDoubleScalarIsNaN(b_discount)))
    {
      if (b_discount == 0.0) {
        dp1 = 0.0;
      } else {
        dp1 = muDoubleScalarRem(b_discount, 30000.0);
        if (dp1 == 0.0) {
          dp1 = 0.0;
        } else {
          if (b_discount < 0.0) {
            dp1 += 30000.0;
          }
        }
      }
    } else {
      dp1 = rtNaN;
    }

    if (dp1 == 0.0) {
      st.site = &emlrtRSI;
      b_st.site = &d_emlrtRSI;
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(&b_st, 7, m0, &u[0]);
      emlrtAssign(&y, m0);
      b_y = NULL;
      m0 = emlrtCreateDoubleScalar(1.0);
      emlrtAssign(&b_y, m0);
      c_y = NULL;
      m0 = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(&b_st, 15, m0, &c_u[0]);
      emlrtAssign(&c_y, m0);
      d_y = NULL;
      m0 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
      dp2 = muDoubleScalarRound(b_discount / 30000.0);
      if (dp2 < 2.147483648E+9) {
        if (dp2 >= -2.147483648E+9) {
          idx = (int32_T)dp2;
        } else {
          idx = MIN_int32_T;
        }
      } else if (dp2 >= 2.147483648E+9) {
        idx = MAX_int32_T;
      } else {
        idx = 0;
      }

      *(int32_T *)emlrtMxGetData(m0) = idx;
      emlrtAssign(&d_y, m0);
      c_st.site = &m_emlrtRSI;
      emlrt_marshallIn(&c_st, feval(&c_st, y, b_y, c_y, d_y, &emlrtMCI), "feval");
    }

    if ((b_discount == 3.0E+6) || (b_discount > MAXDISCOUNT)) {
      exitg1 = true;
    } else {
      i = 0;
      while (i < 200) {
        if (!(b_discount > data->discount_amount_limit[i])) {
          for (idx = 0; idx < 52; idx++) {
            otherPrice[idx] = data->avg_price[i];
          }

          st.site = &b_emlrtRSI;
          discount2 = b_discount + step;
          dp2 = muDoubleScalarRound(data->od_code[i] + 1.0);
          if (dp2 < 2.147483648E+9) {
            if (dp2 >= -2.147483648E+9) {
              idx = (int32_T)dp2;
            } else {
              idx = MIN_int32_T;
            }
          } else if (dp2 >= 2.147483648E+9) {
            idx = MAX_int32_T;
          } else {
            idx = 0;
          }

          if (!((idx >= 1) && (idx <= 200))) {
            emlrtDynamicBoundsCheckR2012b(idx, 1, 200, &emlrtBCI, &st);
          }

          b_st.site = &e_emlrtRSI;
          dp1 = getPkgNums(&b_st, data->avg_price, data->num_package,
                           data->discount_amount_limit, data->od_code[i],
                           otherPrice, b_discount);

          /*      if discount2 > data.discount_amount_limit(od_code+1) */
          /*          discount2 = data.discount_amount_limit(od_code+1); */
          /*      end */
          b_st.site = &f_emlrtRSI;
          dp2 = getPkgNums(&b_st, data->avg_price, data->num_package,
                           data->discount_amount_limit, data->od_code[i],
                           otherPrice, discount2);
          idx = SLOPE->size[0];
          k = (int32_T)b_index;
          if (!((k >= 1) && (k <= idx))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, idx, &b_emlrtBCI, sp);
          }

          SLOPE->data[(k + SLOPE->size[0] * i) - 1] = (dp2 - dp1) / (discount2 -
            b_discount);
        }

        i++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      b_index++;
      discount++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }
  }

  st.site = &c_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  y = NULL;
  m0 = emlrtCreateCharArray(2, iv0);
  emlrtInitCharArrayR2013a(&b_st, 7, m0, &u[0]);
  emlrtAssign(&y, m0);
  b_y = NULL;
  m0 = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m0);
  c_y = NULL;
  m0 = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(&b_st, 2, m0, &b_u[0]);
  emlrtAssign(&c_y, m0);
  c_st.site = &m_emlrtRSI;
  emlrt_marshallIn(&c_st, b_feval(&c_st, y, b_y, c_y, &emlrtMCI), "feval");
}

/* End of code generation (getAllSlope.c) */
