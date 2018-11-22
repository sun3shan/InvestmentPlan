/*
 * getNewDiscount.c
 *
 * Code generation for function 'getNewDiscount'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getNewDiscount.h"
#include "getNewDiscount_emxutil.h"
#include "eml_setop.h"
#include "fprintf.h"
#include "getNewDiscount_mexutil.h"
#include "getNewDiscount_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 15, "getNewDiscount",
  "E:\\PythonWorkspace\\2018_02\\data1\\getNewDiscount.m" };

static emlrtRSInfo b_emlrtRSI = { 21, "getNewDiscount",
  "E:\\PythonWorkspace\\2018_02\\data1\\getNewDiscount.m" };

static emlrtRSInfo c_emlrtRSI = { 32, "getNewDiscount",
  "E:\\PythonWorkspace\\2018_02\\data1\\getNewDiscount.m" };

static emlrtRSInfo d_emlrtRSI = { 33, "getNewDiscount",
  "E:\\PythonWorkspace\\2018_02\\data1\\getNewDiscount.m" };

static emlrtRSInfo e_emlrtRSI = { 46, "getNewDiscount",
  "E:\\PythonWorkspace\\2018_02\\data1\\getNewDiscount.m" };

static emlrtRSInfo g_emlrtRSI = { 21, "colon",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo h_emlrtRSI = { 79, "colon",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo i_emlrtRSI = { 283, "colon",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo j_emlrtRSI = { 16, "min",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"
};

static emlrtRSInfo k_emlrtRSI = { 18, "eml_min_or_max",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo l_emlrtRSI = { 23, "intersect",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\intersect.m"
};

static emlrtRSInfo m_emlrtRSI = { 67, "eml_setop",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtMCInfo b_emlrtMCI = { 405, 5, "colon",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtMCInfo c_emlrtMCI = { 404, 15, "colon",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtMCInfo d_emlrtMCI = { 41, 9, "eml_min_or_max",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtMCInfo e_emlrtMCI = { 38, 19, "eml_min_or_max",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtMCInfo f_emlrtMCI = { 82, 9, "eml_min_or_max",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtMCInfo g_emlrtMCI = { 81, 19, "eml_min_or_max",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRTEInfo emlrtRTEI = { 284, 1, "colon",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRTEInfo b_emlrtRTEI = { 1, 18, "getNewDiscount",
  "E:\\PythonWorkspace\\2018_02\\data1\\getNewDiscount.m" };

static emlrtRTEInfo c_emlrtRTEI = { 21, 9, "getNewDiscount",
  "E:\\PythonWorkspace\\2018_02\\data1\\getNewDiscount.m" };

static emlrtECInfo emlrtECI = { -1, 22, 9, "getNewDiscount",
  "E:\\PythonWorkspace\\2018_02\\data1\\getNewDiscount.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 22, 9, "SLOPE(x, i)", "getNewDiscount",
  "E:\\PythonWorkspace\\2018_02\\data1\\getNewDiscount.m", 0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 34, 29, "temp1", "getNewDiscount",
  "E:\\PythonWorkspace\\2018_02\\data1\\getNewDiscount.m", 0 };

static emlrtBCInfo c_emlrtBCI = { 1, 3000000, 22, 30, "SLOPE", "getNewDiscount",
  "E:\\PythonWorkspace\\2018_02\\data1\\getNewDiscount.m", 0 };

static emlrtDCInfo emlrtDCI = { 22, 30, "getNewDiscount",
  "E:\\PythonWorkspace\\2018_02\\data1\\getNewDiscount.m", 1 };

static emlrtRSInfo t_emlrtRSI = { 404, "colon",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo u_emlrtRSI = { 81, "eml_min_or_max",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo v_emlrtRSI = { 38, "eml_min_or_max",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo w_emlrtRSI = { 405, "colon",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo x_emlrtRSI = { 82, "eml_min_or_max",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo y_emlrtRSI = { 41, "eml_min_or_max",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

/* Function Declarations */
static const mxArray *message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m6;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m6, 1, &pArray, "message", true, location);
}

void getNewDiscount(const emlrtStack *sp, const struct0_T *data, const real_T
                    SLOPE[600000000], real_T step, struct1_T *res)
{
  real_T DISCOUNT[200];
  real_T NUMPKG[200];
  real_T INCREMENT[200];
  int32_T i;
  real_T increment;
  real_T discount;
  emxArray_real_T *x;
  emxArray_real_T *b_x;
  emxArray_real_T *c_x;
  int32_T idx;
  real_T maxIncrementIndex;
  int32_T loop_ub;
  real_T anew;
  real_T apnd;
  boolean_T n_too_large;
  real_T ndbl;
  real_T cdiff;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 21 };

  const mxArray *m0;
  char_T cv0[21];
  int32_T ixstart;
  static const char_T cv1[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  boolean_T exitg4;
  uint8_T ii_data[200];
  boolean_T exitg3;
  boolean_T guard2 = false;
  int32_T ii_size_idx_0;
  int32_T temp_size[1];
  real_T temp_data[200];
  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 36 };

  char_T cv2[36];
  static const char_T cv3[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 39 };

  char_T cv4[39];
  static const char_T cv5[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  boolean_T exitg2;
  boolean_T d_x[200];
  boolean_T exitg1;
  boolean_T guard1 = false;
  real_T b_ii_data[200];
  int32_T ii_size[1];
  int32_T ib_size[1];
  int32_T ib_data[200];
  int32_T ia_size[1];
  int32_T ia_data[200];
  int32_T temp1_size[1];
  real_T temp1_data[200];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  (void)step;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  f_st.prev = &d_st;
  f_st.tls = d_st.tls;
  g_st.prev = &d_st;
  g_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  for (i = 0; i < 200; i++) {
    DISCOUNT[i] = 0.0;
    NUMPKG[i] = 0.0;
    INCREMENT[i] = 0.0;
  }

  increment = 0.0;
  discount = 0.0;
  emxInit_real_T(sp, &x, 2, &c_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_x, 1, &b_emlrtRTEI, true);
  b_emxInit_real_T(sp, &c_x, 1, &b_emlrtRTEI, true);
  while (discount < 3.0E+6) {
    if (discount - muDoubleScalarFloor(discount / 30000.0) * 30000.0 == 0.0) {
      idx = (int32_T)muDoubleScalarRound(discount / 30000.0);
      st.site = &emlrtRSI;
      b_fprintf(&st, idx);
    }

    increment++;
    for (i = 0; i < 200; i++) {
      st.site = &b_emlrtRSI;
      maxIncrementIndex = DISCOUNT[i] + increment;
      b_st.site = &g_emlrtRSI;
      c_st.site = &h_emlrtRSI;
      if (maxIncrementIndex < DISCOUNT[i] + 1.0) {
        loop_ub = -1;
        anew = DISCOUNT[i] + 1.0;
        apnd = maxIncrementIndex;
        n_too_large = false;
      } else if (muDoubleScalarIsInf(DISCOUNT[i] + 1.0) || muDoubleScalarIsInf
                 (maxIncrementIndex)) {
        loop_ub = 0;
        anew = rtNaN;
        apnd = maxIncrementIndex;
        n_too_large = !(DISCOUNT[i] + 1.0 == maxIncrementIndex);
      } else {
        anew = DISCOUNT[i] + 1.0;
        ndbl = muDoubleScalarFloor((maxIncrementIndex - (DISCOUNT[i] + 1.0)) +
          0.5);
        apnd = (DISCOUNT[i] + 1.0) + ndbl;
        cdiff = apnd - maxIncrementIndex;
        if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 *
            muDoubleScalarMax(DISCOUNT[i] + 1.0, maxIncrementIndex)) {
          ndbl++;
          apnd = maxIncrementIndex;
        } else if (cdiff > 0.0) {
          apnd = (DISCOUNT[i] + 1.0) + (ndbl - 1.0);
        } else {
          ndbl++;
        }

        n_too_large = (2.147483647E+9 < ndbl);
        if (ndbl >= 0.0) {
          loop_ub = (int32_T)ndbl - 1;
        } else {
          loop_ub = -1;
        }
      }

      d_st.site = &i_emlrtRSI;
      if (!n_too_large) {
      } else {
        y = NULL;
        m0 = emlrtCreateCharArray(2, iv0);
        for (ixstart = 0; ixstart < 21; ixstart++) {
          cv0[ixstart] = cv1[ixstart];
        }

        emlrtInitCharArrayR2013a(&d_st, 21, m0, cv0);
        emlrtAssign(&y, m0);
        f_st.site = &t_emlrtRSI;
        g_st.site = &w_emlrtRSI;
        error(&f_st, message(&g_st, y, &b_emlrtMCI), &c_emlrtMCI);
      }

      idx = x->size[0] * x->size[1];
      x->size[0] = 1;
      x->size[1] = loop_ub + 1;
      emxEnsureCapacity(&c_st, (emxArray__common *)x, idx, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      if (loop_ub + 1 > 0) {
        x->data[0] = anew;
        if (loop_ub + 1 > 1) {
          x->data[loop_ub] = apnd;
          idx = loop_ub + (loop_ub < 0);
          if (idx >= 0) {
            idx = (int32_T)((uint32_T)idx >> 1);
          } else {
            idx = (int32_T)~(~(uint32_T)idx >> 1);
          }

          for (ixstart = 1; ixstart < idx; ixstart++) {
            x->data[ixstart] = anew + (real_T)ixstart;
            x->data[loop_ub - ixstart] = apnd - (real_T)ixstart;
          }

          if (idx << 1 == loop_ub) {
            x->data[idx] = (anew + apnd) / 2.0;
          } else {
            x->data[idx] = anew + (real_T)idx;
            x->data[idx + 1] = apnd - (real_T)idx;
          }
        }
      }

      loop_ub = x->size[1];
      for (idx = 0; idx < loop_ub; idx++) {
        maxIncrementIndex = x->data[x->size[0] * idx];
        ixstart = (int32_T)emlrtIntegerCheckFastR2012b(maxIncrementIndex,
          &emlrtDCI, sp);
        emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, 3000000, &c_emlrtBCI, sp);
      }

      idx = b_x->size[0];
      b_x->size[0] = x->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)b_x, idx, (int32_T)sizeof(real_T),
                        &b_emlrtRTEI);
      loop_ub = x->size[1];
      for (idx = 0; idx < loop_ub; idx++) {
        b_x->data[idx] = x->data[x->size[0] * idx];
      }

      idx = b_x->size[0];
      emlrtSizeEqCheck1DFastR2012b(1, idx, &emlrtECI, sp);
      idx = c_x->size[0];
      c_x->size[0] = x->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)c_x, idx, (int32_T)sizeof(real_T),
                        &b_emlrtRTEI);
      loop_ub = x->size[1];
      for (idx = 0; idx < loop_ub; idx++) {
        c_x->data[idx] = x->data[x->size[0] * idx];
      }

      idx = c_x->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, idx, &emlrtBCI, sp);
      INCREMENT[i] = SLOPE[((int32_T)x->data[0] + 3000000 * i) - 1];
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    ixstart = 1;
    maxIncrementIndex = INCREMENT[0];
    if (muDoubleScalarIsNaN(INCREMENT[0])) {
      idx = 2;
      exitg4 = false;
      while ((!exitg4) && (idx < 201)) {
        ixstart = idx;
        if (!muDoubleScalarIsNaN(INCREMENT[idx - 1])) {
          maxIncrementIndex = INCREMENT[idx - 1];
          exitg4 = true;
        } else {
          idx++;
        }
      }
    }

    if (ixstart < 200) {
      while (ixstart + 1 < 201) {
        if (INCREMENT[ixstart] > maxIncrementIndex) {
          maxIncrementIndex = INCREMENT[ixstart];
        }

        ixstart++;
      }
    }

    if (maxIncrementIndex == 0.0) {
    } else {
      idx = 0;
      ixstart = 1;
      exitg3 = false;
      while ((!exitg3) && (ixstart < 201)) {
        guard2 = false;
        if (INCREMENT[ixstart - 1] == maxIncrementIndex) {
          idx++;
          ii_data[idx - 1] = (uint8_T)ixstart;
          if (idx >= 200) {
            exitg3 = true;
          } else {
            guard2 = true;
          }
        } else {
          guard2 = true;
        }

        if (guard2) {
          ixstart++;
        }
      }

      if (1 > idx) {
        loop_ub = 0;
      } else {
        loop_ub = idx;
      }

      if (1 > idx) {
        ii_size_idx_0 = 0;
      } else {
        ii_size_idx_0 = idx;
      }

      temp_size[0] = loop_ub;
      for (idx = 0; idx < loop_ub; idx++) {
        temp_data[idx] = ii_data[idx];
      }

      if (ii_size_idx_0 == 1) {
        maxIncrementIndex = temp_data[0];
      } else {
        st.site = &c_emlrtRSI;
        b_st.site = &j_emlrtRSI;
        c_st.site = &k_emlrtRSI;
        if ((ii_size_idx_0 == 1) || (ii_size_idx_0 != 1)) {
          n_too_large = true;
        } else {
          n_too_large = false;
        }

        if (n_too_large) {
        } else {
          b_y = NULL;
          m0 = emlrtCreateCharArray(2, iv1);
          for (i = 0; i < 36; i++) {
            cv2[i] = cv3[i];
          }

          emlrtInitCharArrayR2013a(&c_st, 36, m0, cv2);
          emlrtAssign(&b_y, m0);
          d_st.site = &v_emlrtRSI;
          e_st.site = &y_emlrtRSI;
          error(&d_st, message(&e_st, b_y, &d_emlrtMCI), &e_emlrtMCI);
        }

        if (ii_size_idx_0 > 0) {
        } else {
          c_y = NULL;
          m0 = emlrtCreateCharArray(2, iv2);
          for (i = 0; i < 39; i++) {
            cv4[i] = cv5[i];
          }

          emlrtInitCharArrayR2013a(&c_st, 39, m0, cv4);
          emlrtAssign(&c_y, m0);
          d_st.site = &u_emlrtRSI;
          e_st.site = &x_emlrtRSI;
          error(&d_st, message(&e_st, c_y, &f_emlrtMCI), &g_emlrtMCI);
        }

        ixstart = 1;
        maxIncrementIndex = data->avg_price[(int32_T)temp_data[0] - 1];
        if (ii_size_idx_0 > 1) {
          if (muDoubleScalarIsNaN(data->avg_price[(int32_T)temp_data[0] - 1])) {
            idx = 2;
            exitg2 = false;
            while ((!exitg2) && (idx <= ii_size_idx_0)) {
              ixstart = idx;
              if (!muDoubleScalarIsNaN(data->avg_price[(int32_T)temp_data[idx -
                   1] - 1])) {
                maxIncrementIndex = data->avg_price[(int32_T)temp_data[idx - 1]
                  - 1];
                exitg2 = true;
              } else {
                idx++;
              }
            }
          }

          if (ixstart < ii_size_idx_0) {
            while (ixstart + 1 <= ii_size_idx_0) {
              if (data->avg_price[(int32_T)temp_data[ixstart] - 1] <
                  maxIncrementIndex) {
                maxIncrementIndex = data->avg_price[(int32_T)temp_data[ixstart]
                  - 1];
              }

              ixstart++;
            }
          }
        }

        for (i = 0; i < 200; i++) {
          d_x[i] = (data->avg_price[i] == maxIncrementIndex);
        }

        idx = 0;
        ixstart = 1;
        exitg1 = false;
        while ((!exitg1) && (ixstart < 201)) {
          guard1 = false;
          if (d_x[ixstart - 1]) {
            idx++;
            ii_data[idx - 1] = (uint8_T)ixstart;
            if (idx >= 200) {
              exitg1 = true;
            } else {
              guard1 = true;
            }
          } else {
            guard1 = true;
          }

          if (guard1) {
            ixstart++;
          }
        }

        if (1 > idx) {
          loop_ub = 0;
        } else {
          loop_ub = idx;
        }

        st.site = &d_emlrtRSI;
        b_st.site = &l_emlrtRSI;
        ii_size[0] = loop_ub;
        for (idx = 0; idx < loop_ub; idx++) {
          b_ii_data[idx] = ii_data[idx];
        }

        c_st.site = &m_emlrtRSI;
        do_vectors(&c_st, b_ii_data, ii_size, temp_data, temp_size, temp1_data,
                   temp1_size, ia_data, ia_size, ib_data, ib_size);
        emlrtDynamicBoundsCheckFastR2012b(1, 1, temp1_size[0], &b_emlrtBCI, sp);
        maxIncrementIndex = temp1_data[0];
      }

      DISCOUNT[(int32_T)maxIncrementIndex - 1] += increment;
      NUMPKG[(int32_T)maxIncrementIndex - 1] += INCREMENT[(int32_T)
        maxIncrementIndex - 1];
      increment = 0.0;
      discount = DISCOUNT[0];
      for (ixstart = 0; ixstart < 199; ixstart++) {
        discount += DISCOUNT[ixstart + 1];
      }
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&c_x);
  emxFree_real_T(&b_x);
  emxFree_real_T(&x);
  st.site = &e_emlrtRSI;
  d_fprintf(&st);
  for (i = 0; i < 200; i++) {
    res->DISCOUNT[i] = DISCOUNT[i];
    res->NUMPKG[i] = NUMPKG[i];
    res->INCREMENT[i] = INCREMENT[i];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (getNewDiscount.c) */
