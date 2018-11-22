/*
 * getNewDiscount.c
 *
 * Code generation for function 'getNewDiscount'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "getNewDiscount.h"
#include "getNewDiscount_emxutil.h"
#include "sum.h"
#include "eml_setop.h"
#include "mod.h"
#include "getNewDiscount_mexutil.h"
#include "getNewDiscount_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 15,    /* lineNo */
  "getNewDiscount",                    /* fcnName */
  "D:\\2018_02\\getNewDiscount.m"      /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 21,  /* lineNo */
  "getNewDiscount",                    /* fcnName */
  "D:\\2018_02\\getNewDiscount.m"      /* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 28,  /* lineNo */
  "getNewDiscount",                    /* fcnName */
  "D:\\2018_02\\getNewDiscount.m"      /* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 32,  /* lineNo */
  "getNewDiscount",                    /* fcnName */
  "D:\\2018_02\\getNewDiscount.m"      /* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 33,  /* lineNo */
  "getNewDiscount",                    /* fcnName */
  "D:\\2018_02\\getNewDiscount.m"      /* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 46,  /* lineNo */
  "getNewDiscount",                    /* fcnName */
  "D:\\2018_02\\getNewDiscount.m"      /* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 38,  /* lineNo */
  "fprintf",                           /* fcnName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 25,  /* lineNo */
  "colon",                             /* fcnName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 98,  /* lineNo */
  "colon",                             /* fcnName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 282, /* lineNo */
  "colon",                             /* fcnName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 41,  /* lineNo */
  "find",                              /* fcnName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 153, /* lineNo */
  "find",                              /* fcnName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 13,  /* lineNo */
  "min",                               /* fcnName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 19,  /* lineNo */
  "minOrMax",                          /* fcnName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 40,  /* lineNo */
  "minOrMax",                          /* fcnName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 23,  /* lineNo */
  "intersect",                         /* fcnName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\intersect.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 70,  /* lineNo */
  "eml_setop",                         /* fcnName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 35, /* lineNo */
  "fprintf",                           /* fcnName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 60,    /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 1,   /* lineNo */
  18,                                  /* colNo */
  "getNewDiscount",                    /* fName */
  "D:\\2018_02\\getNewDiscount.m"      /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 98,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 21,/* lineNo */
  9,                                   /* colNo */
  "getNewDiscount",                    /* fName */
  "D:\\2018_02\\getNewDiscount.m"      /* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 388,/* lineNo */
  15,                                  /* colNo */
  "colon",                             /* fName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 77,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 22,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  35,                                  /* colNo */
  "temp1",                             /* aName */
  "getNewDiscount",                    /* fName */
  "D:\\2018_02\\getNewDiscount.m",     /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  22,                                  /* lineNo */
  9,                                   /* colNo */
  "getNewDiscount",                    /* fName */
  "D:\\2018_02\\getNewDiscount.m"      /* pName */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  200,                                 /* iLast */
  37,                                  /* lineNo */
  44,                                  /* colNo */
  "DISCOUNT",                          /* aName */
  "getNewDiscount",                    /* fName */
  "D:\\2018_02\\getNewDiscount.m",     /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  200,                                 /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "DISCOUNT",                          /* aName */
  "getNewDiscount",                    /* fName */
  "D:\\2018_02\\getNewDiscount.m",     /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 22,    /* lineNo */
  30,                                  /* colNo */
  "getNewDiscount",                    /* fName */
  "D:\\2018_02\\getNewDiscount.m",     /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  2178390,                             /* iLast */
  22,                                  /* lineNo */
  30,                                  /* colNo */
  "SLOPE",                             /* aName */
  "getNewDiscount",                    /* fName */
  "D:\\2018_02\\getNewDiscount.m",     /* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo cb_emlrtRSI = { 60, /* lineNo */
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

void getNewDiscount(const emlrtStack *sp, const struct0_T *data, const real_T
                    SLOPE[435678000], real_T step, struct1_T *res)
{
  real_T DISCOUNT[200];
  real_T NUMPKG[200];
  real_T INCREMENT[200];
  real_T increment;
  real_T discount;
  emxArray_real_T *x;
  emxArray_real_T *b_x;
  int32_T i;
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const char_T u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  int32_T idx;
  real_T maxIncrement;
  const mxArray *b_y;
  int32_T k;
  boolean_T exitg1;
  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 2 };

  static const char_T b_u[15] = { '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b',
    '\\', 'b', '%', '3', 'd', '%', '%' };

  static const char_T c_u[2] = { '\\', 'n' };

  real_T ndbl;
  real_T apnd;
  const mxArray *d_y;
  real_T cdiff;
  int32_T loop_ub;
  int32_T nm1d2;
  uint8_T ii_data[200];
  int32_T temp_size[1];
  real_T temp_data[200];
  boolean_T c_x[200];
  int32_T ii_size[1];
  real_T b_ii_data[200];
  real_T temp1_data[200];
  int32_T temp1_size[1];
  int32_T ia_data[200];
  int32_T ia_size[1];
  int32_T ib_data[200];
  int32_T ib_size[1];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  (void)step;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  memset(&DISCOUNT[0], 0, 200U * sizeof(real_T));
  memset(&NUMPKG[0], 0, 200U * sizeof(real_T));
  memset(&INCREMENT[0], 0, 200U * sizeof(real_T));
  increment = 0.0;
  discount = 0.0;
  emxInit_real_T(sp, &x, 2, &c_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_x, 1, &emlrtRTEI, true);
  while (discount < 3.0E+6) {
    if (b_mod(discount) == 0.0) {
      st.site = &emlrtRSI;
      b_st.site = &g_emlrtRSI;
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv0);
      emlrtInitCharArrayR2013a(&b_st, 7, m0, &u[0]);
      emlrtAssign(&y, m0);
      b_y = NULL;
      m0 = emlrtCreateDoubleScalar(1.0);
      emlrtAssign(&b_y, m0);
      c_y = NULL;
      m0 = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(&b_st, 15, m0, &b_u[0]);
      emlrtAssign(&c_y, m0);
      d_y = NULL;
      m0 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
      maxIncrement = muDoubleScalarRound(discount / 30000.0);
      if (maxIncrement >= -2.147483648E+9) {
        k = (int32_T)maxIncrement;
      } else {
        k = MIN_int32_T;
      }

      *(int32_T *)emlrtMxGetData(m0) = k;
      emlrtAssign(&d_y, m0);
      c_st.site = &cb_emlrtRSI;
      emlrt_marshallIn(&c_st, feval(&c_st, y, b_y, c_y, d_y, &emlrtMCI), "feval");
    }

    increment++;
    i = 0;
    while (i < 200) {
      st.site = &b_emlrtRSI;
      maxIncrement = DISCOUNT[i] + increment;
      b_st.site = &h_emlrtRSI;
      if (maxIncrement < DISCOUNT[i] + 1.0) {
        k = x->size[0] * x->size[1];
        x->size[0] = 1;
        x->size[1] = 0;
        emxEnsureCapacity_real_T(&b_st, x, k, &emlrtRTEI);
      } else if ((muDoubleScalarIsInf(DISCOUNT[i] + 1.0) || muDoubleScalarIsInf
                  (maxIncrement)) && (DISCOUNT[i] + 1.0 == maxIncrement)) {
        k = x->size[0] * x->size[1];
        x->size[0] = 1;
        x->size[1] = 1;
        emxEnsureCapacity_real_T(&b_st, x, k, &emlrtRTEI);
        x->data[0] = rtNaN;
      } else if (DISCOUNT[i] + 1.0 == DISCOUNT[i] + 1.0) {
        k = x->size[0] * x->size[1];
        x->size[0] = 1;
        x->size[1] = (int32_T)muDoubleScalarFloor(maxIncrement - (DISCOUNT[i] +
          1.0)) + 1;
        emxEnsureCapacity_real_T(&b_st, x, k, &emlrtRTEI);
        loop_ub = (int32_T)muDoubleScalarFloor(maxIncrement - (DISCOUNT[i] + 1.0));
        for (k = 0; k <= loop_ub; k++) {
          x->data[x->size[0] * k] = (DISCOUNT[i] + 1.0) + (real_T)k;
        }
      } else {
        c_st.site = &i_emlrtRSI;
        ndbl = muDoubleScalarFloor((maxIncrement - (DISCOUNT[i] + 1.0)) + 0.5);
        apnd = (DISCOUNT[i] + 1.0) + ndbl;
        cdiff = apnd - maxIncrement;
        if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 *
            muDoubleScalarMax(DISCOUNT[i] + 1.0, maxIncrement)) {
          ndbl++;
          apnd = maxIncrement;
        } else if (cdiff > 0.0) {
          apnd = (DISCOUNT[i] + 1.0) + (ndbl - 1.0);
        } else {
          ndbl++;
        }

        if (ndbl >= 0.0) {
          idx = (int32_T)ndbl;
        } else {
          idx = 0;
        }

        d_st.site = &j_emlrtRSI;
        if (ndbl > 2.147483647E+9) {
          emlrtErrorWithMessageIdR2018a(&d_st, &d_emlrtRTEI,
            "Coder:MATLAB:pmaxsize", "Coder:MATLAB:pmaxsize", 0);
        }

        k = x->size[0] * x->size[1];
        x->size[0] = 1;
        x->size[1] = idx;
        emxEnsureCapacity_real_T(&c_st, x, k, &b_emlrtRTEI);
        if (idx > 0) {
          x->data[0] = DISCOUNT[i] + 1.0;
          if (idx > 1) {
            x->data[idx - 1] = apnd;
            nm1d2 = (idx - 1) / 2;
            for (k = 1; k < nm1d2; k++) {
              x->data[k] = (DISCOUNT[i] + 1.0) + (real_T)k;
              x->data[(idx - k) - 1] = apnd - (real_T)k;
            }

            if (nm1d2 << 1 == idx - 1) {
              x->data[nm1d2] = ((DISCOUNT[i] + 1.0) + apnd) / 2.0;
            } else {
              x->data[nm1d2] = (DISCOUNT[i] + 1.0) + (real_T)nm1d2;
              x->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
            }
          }
        }
      }

      loop_ub = x->size[1];
      for (k = 0; k < loop_ub; k++) {
        maxIncrement = x->data[x->size[0] * k];
        if (maxIncrement != (int32_T)muDoubleScalarFloor(maxIncrement)) {
          emlrtIntegerCheckR2012b(maxIncrement, &emlrtDCI, sp);
        }

        nm1d2 = (int32_T)maxIncrement;
        if (!((nm1d2 >= 1) && (nm1d2 <= 2178390))) {
          emlrtDynamicBoundsCheckR2012b(nm1d2, 1, 2178390, &d_emlrtBCI, sp);
        }
      }

      k = b_x->size[0];
      b_x->size[0] = x->size[1];
      emxEnsureCapacity_real_T1(sp, b_x, k, &emlrtRTEI);
      loop_ub = x->size[1];
      for (k = 0; k < loop_ub; k++) {
        b_x->data[k] = x->data[x->size[0] * k];
      }

      k = b_x->size[0];
      if (1 != k) {
        emlrtSubAssignSizeCheck1dR2017a(1, k, &emlrtECI, sp);
      }

      INCREMENT[i] = SLOPE[((int32_T)x->data[0] + 2178390 * i) - 1];
      i++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    if (!muDoubleScalarIsNaN(INCREMENT[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k < 201)) {
        if (!muDoubleScalarIsNaN(INCREMENT[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (idx == 0) {
      maxIncrement = INCREMENT[0];
    } else {
      maxIncrement = INCREMENT[idx - 1];
      while (idx + 1 < 201) {
        if (maxIncrement < INCREMENT[idx]) {
          maxIncrement = INCREMENT[idx];
        }

        idx++;
      }
    }

    if (!(maxIncrement == 0.0)) {
      st.site = &c_emlrtRSI;
      b_st.site = &k_emlrtRSI;
      c_st.site = &l_emlrtRSI;
      idx = 0;
      nm1d2 = 1;
      exitg1 = false;
      while ((!exitg1) && (nm1d2 < 201)) {
        if (INCREMENT[nm1d2 - 1] == maxIncrement) {
          idx++;
          ii_data[idx - 1] = (uint8_T)nm1d2;
          if (idx >= 200) {
            exitg1 = true;
          } else {
            nm1d2++;
          }
        } else {
          nm1d2++;
        }
      }

      if (1 > idx) {
        loop_ub = 0;
      } else {
        loop_ub = idx;
      }

      if (1 > idx) {
        nm1d2 = 0;
      } else {
        nm1d2 = idx;
      }

      temp_size[0] = loop_ub;
      for (k = 0; k < loop_ub; k++) {
        temp_data[k] = ii_data[k];
      }

      if (nm1d2 == 1) {
        maxIncrement = temp_data[0];
      } else {
        st.site = &d_emlrtRSI;
        b_st.site = &o_emlrtRSI;
        c_st.site = &p_emlrtRSI;
        d_st.site = &q_emlrtRSI;
        if ((nm1d2 == 1) || (nm1d2 != 1)) {
        } else {
          emlrtErrorWithMessageIdR2018a(&d_st, &f_emlrtRTEI,
            "Coder:toolbox:autoDimIncompatibility",
            "Coder:toolbox:autoDimIncompatibility", 0);
        }

        if (!(nm1d2 >= 1)) {
          emlrtErrorWithMessageIdR2018a(&d_st, &e_emlrtRTEI,
            "Coder:toolbox:eml_min_or_max_varDimZero",
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
        }

        if (nm1d2 <= 2) {
          if (nm1d2 == 1) {
            maxIncrement = data->avg_price[(int32_T)temp_data[0] - 1];
          } else if ((data->avg_price[(int32_T)temp_data[0] - 1] >
                      data->avg_price[(int32_T)temp_data[1] - 1]) ||
                     (muDoubleScalarIsNaN(data->avg_price[(int32_T)temp_data[0]
                       - 1]) && (!muDoubleScalarIsNaN(data->avg_price[(int32_T)
                        temp_data[1] - 1])))) {
            maxIncrement = data->avg_price[(int32_T)temp_data[1] - 1];
          } else {
            maxIncrement = data->avg_price[(int32_T)temp_data[0] - 1];
          }
        } else {
          if (!muDoubleScalarIsNaN(data->avg_price[(int32_T)temp_data[0] - 1]))
          {
            idx = 1;
          } else {
            idx = 0;
            k = 2;
            exitg1 = false;
            while ((!exitg1) && (k <= loop_ub)) {
              if (!muDoubleScalarIsNaN(data->avg_price[(int32_T)temp_data[k - 1]
                   - 1])) {
                idx = k;
                exitg1 = true;
              } else {
                k++;
              }
            }
          }

          if (idx == 0) {
            maxIncrement = data->avg_price[(int32_T)temp_data[0] - 1];
          } else {
            maxIncrement = data->avg_price[(int32_T)temp_data[idx - 1] - 1];
            while (idx + 1 <= loop_ub) {
              if (maxIncrement > data->avg_price[(int32_T)temp_data[idx] - 1]) {
                maxIncrement = data->avg_price[(int32_T)temp_data[idx] - 1];
              }

              idx++;
            }
          }
        }

        st.site = &e_emlrtRSI;
        for (i = 0; i < 200; i++) {
          c_x[i] = (data->avg_price[i] == maxIncrement);
        }

        b_st.site = &k_emlrtRSI;
        c_st.site = &l_emlrtRSI;
        idx = 0;
        nm1d2 = 1;
        exitg1 = false;
        while ((!exitg1) && (nm1d2 < 201)) {
          if (c_x[nm1d2 - 1]) {
            idx++;
            ii_data[idx - 1] = (uint8_T)nm1d2;
            if (idx >= 200) {
              exitg1 = true;
            } else {
              nm1d2++;
            }
          } else {
            nm1d2++;
          }
        }

        if (1 > idx) {
          loop_ub = 0;
        } else {
          loop_ub = idx;
        }

        st.site = &e_emlrtRSI;
        b_st.site = &r_emlrtRSI;
        ii_size[0] = loop_ub;
        for (k = 0; k < loop_ub; k++) {
          b_ii_data[k] = ii_data[k];
        }

        c_st.site = &s_emlrtRSI;
        do_vectors(&c_st, b_ii_data, ii_size, temp_data, temp_size, temp1_data,
                   temp1_size, ia_data, ia_size, ib_data, ib_size);
        if (!(1 <= temp1_size[0])) {
          emlrtDynamicBoundsCheckR2012b(1, 1, temp1_size[0], &emlrtBCI, sp);
        }

        maxIncrement = temp1_data[0];
      }

      k = (int32_T)maxIncrement;
      if (!((k >= 1) && (k <= 200))) {
        emlrtDynamicBoundsCheckR2012b(k, 1, 200, &b_emlrtBCI, sp);
      }

      nm1d2 = (int32_T)maxIncrement;
      if (!((nm1d2 >= 1) && (nm1d2 <= 200))) {
        emlrtDynamicBoundsCheckR2012b(nm1d2, 1, 200, &c_emlrtBCI, sp);
      }

      DISCOUNT[nm1d2 - 1] = DISCOUNT[k - 1] + increment;
      NUMPKG[(int32_T)maxIncrement - 1] += INCREMENT[(int32_T)maxIncrement - 1];
      increment = 0.0;
      discount = sum(DISCOUNT);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(sp, &b_x);
  emxFree_real_T(sp, &x);
  st.site = &f_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  y = NULL;
  m0 = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(&b_st, 7, m0, &u[0]);
  emlrtAssign(&y, m0);
  b_y = NULL;
  m0 = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m0);
  c_y = NULL;
  m0 = emlrtCreateCharArray(2, iv3);
  emlrtInitCharArrayR2013a(&b_st, 2, m0, &c_u[0]);
  emlrtAssign(&c_y, m0);
  c_st.site = &cb_emlrtRSI;
  emlrt_marshallIn(&c_st, b_feval(&c_st, y, b_y, c_y, &emlrtMCI), "feval");
  memcpy(&res->DISCOUNT[0], &DISCOUNT[0], 200U * sizeof(real_T));
  memcpy(&res->NUMPKG[0], &NUMPKG[0], 200U * sizeof(real_T));
  memcpy(&res->INCREMENT[0], &INCREMENT[0], 200U * sizeof(real_T));
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (getNewDiscount.c) */
