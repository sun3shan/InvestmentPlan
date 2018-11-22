/*
 * getAllSlope.c
 *
 * Code generation for function 'getAllSlope'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getAllSlope.h"
#include "getAllSlope_emxutil.h"
#include "fprintf.h"
#include "getPkgNums.h"
#include "getAllSlope_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 8, "getAllSlope",
  "E:\\PythonWorkspace\\2018_02\\data1\\getAllSlope.m" };

static emlrtRSInfo b_emlrtRSI = { 18, "getAllSlope",
  "E:\\PythonWorkspace\\2018_02\\data1\\getAllSlope.m" };

static emlrtRSInfo c_emlrtRSI = { 22, "getAllSlope",
  "E:\\PythonWorkspace\\2018_02\\data1\\getAllSlope.m" };

static emlrtRSInfo e_emlrtRSI = { 4, "getSlope",
  "E:\\PythonWorkspace\\2018_02\\data1\\getSlope.m" };

static emlrtRSInfo f_emlrtRSI = { 8, "getSlope",
  "E:\\PythonWorkspace\\2018_02\\data1\\getSlope.m" };

static emlrtRTEInfo emlrtRTEI = { 1, 20, "getAllSlope",
  "E:\\PythonWorkspace\\2018_02\\data1\\getAllSlope.m" };

static emlrtBCInfo emlrtBCI = { 1, 200, 2, 14, "data.num_package", "getSlope",
  "E:\\PythonWorkspace\\2018_02\\data1\\getSlope.m", 0 };

static emlrtRTEInfo c_emlrtRTEI = { 6, 1, "getAllSlope",
  "E:\\PythonWorkspace\\2018_02\\data1\\getAllSlope.m" };

static emlrtDCInfo emlrtDCI = { 3, 15, "getAllSlope",
  "E:\\PythonWorkspace\\2018_02\\data1\\getAllSlope.m", 4 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 18, 15, "SLOPE", "getAllSlope",
  "E:\\PythonWorkspace\\2018_02\\data1\\getAllSlope.m", 0 };

/* Function Definitions */
void getAllSlope(const emlrtStack *sp, const struct0_T *data, real_T step,
                 emxArray_real_T *SLOPE)
{
  int32_T ixstart;
  real_T mtmp;
  int32_T ix;
  boolean_T exitg3;
  real_T dp1;
  int32_T i0;
  real_T dp2;
  boolean_T exitg2;
  real_T b_index;
  int32_T discount;
  boolean_T exitg1;
  real_T b_discount;
  int32_T i;
  real_T otherPrice[52];
  real_T discount2;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  ixstart = 1;
  mtmp = data->discount_amount_limit[0];
  if (muDoubleScalarIsNaN(data->discount_amount_limit[0])) {
    ix = 2;
    exitg3 = false;
    while ((!exitg3) && (ix < 201)) {
      ixstart = ix;
      if (!muDoubleScalarIsNaN(data->discount_amount_limit[ix - 1])) {
        mtmp = data->discount_amount_limit[ix - 1];
        exitg3 = true;
      } else {
        ix++;
      }
    }
  }

  if (ixstart < 200) {
    while (ixstart + 1 < 201) {
      if (data->discount_amount_limit[ixstart] > mtmp) {
        mtmp = data->discount_amount_limit[ixstart];
      }

      ixstart++;
    }
  }

  dp1 = muDoubleScalarMin(mtmp, 3.0E+6) / step;
  i0 = SLOPE->size[0] * SLOPE->size[1];
  dp2 = muDoubleScalarRound(dp1);
  if (dp2 < 2.147483648E+9) {
    if (dp2 >= -2.147483648E+9) {
      ixstart = (int32_T)dp2;
    } else {
      ixstart = MIN_int32_T;
    }
  } else if (dp2 >= 2.147483648E+9) {
    ixstart = MAX_int32_T;
  } else {
    ixstart = 0;
  }

  SLOPE->size[0] = (int32_T)emlrtNonNegativeCheckFastR2012b(ixstart, &emlrtDCI,
    sp);
  SLOPE->size[1] = 200;
  emxEnsureCapacity(sp, (emxArray__common *)SLOPE, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
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

  ixstart = (int32_T)emlrtNonNegativeCheckFastR2012b(i0, &emlrtDCI, sp) * 200;
  for (i0 = 0; i0 < ixstart; i0++) {
    SLOPE->data[i0] = 0.0;
  }

  ixstart = 1;
  mtmp = data->discount_amount_limit[0];
  if (muDoubleScalarIsNaN(data->discount_amount_limit[0])) {
    ix = 2;
    exitg2 = false;
    while ((!exitg2) && (ix < 201)) {
      ixstart = ix;
      if (!muDoubleScalarIsNaN(data->discount_amount_limit[ix - 1])) {
        mtmp = data->discount_amount_limit[ix - 1];
        exitg2 = true;
      } else {
        ix++;
      }
    }
  }

  if (ixstart < 200) {
    while (ixstart + 1 < 201) {
      if (data->discount_amount_limit[ixstart] > mtmp) {
        mtmp = data->discount_amount_limit[ixstart];
      }

      ixstart++;
    }
  }

  b_index = 1.0;
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

  i0 = (int32_T)(((real_T)i0 + step) / step);
  dp2 = muDoubleScalarRound(dp1);
  if (dp2 < 2.147483648E+9) {
    if (dp2 >= -2.147483648E+9) {
      ixstart = (int32_T)dp2;
    } else {
      ixstart = MIN_int32_T;
    }
  } else if (dp2 >= 2.147483648E+9) {
    ixstart = MAX_int32_T;
  } else {
    ixstart = 0;
  }

  emlrtForLoopVectorCheckR2012b(0.0, step, ixstart, mxDOUBLE_CLASS, i0,
    &c_emlrtRTEI, sp);
  discount = 0;
  exitg1 = false;
  while ((!exitg1) && (discount <= i0 - 1)) {
    b_discount = (real_T)discount * step;
    if (b_discount - muDoubleScalarFloor(b_discount / 30000.0) * 30000.0 == 0.0)
    {
      dp2 = muDoubleScalarRound(b_discount / 30000.0);
      if (dp2 < 2.147483648E+9) {
        if (dp2 >= -2.147483648E+9) {
          ixstart = (int32_T)dp2;
        } else {
          ixstart = MIN_int32_T;
        }
      } else if (dp2 >= 2.147483648E+9) {
        ixstart = MAX_int32_T;
      } else {
        ixstart = 0;
      }

      st.site = &emlrtRSI;
      b_fprintf(&st, ixstart);
    }

    if ((b_discount == 3.0E+6) || (b_discount > mtmp)) {
      exitg1 = true;
    } else {
      for (i = 0; i < 200; i++) {
        if (b_discount > data->discount_amount_limit[i]) {
        } else {
          for (ixstart = 0; ixstart < 52; ixstart++) {
            otherPrice[ixstart] = data->avg_price[i];
          }

          st.site = &b_emlrtRSI;
          discount2 = b_discount + step;
          dp2 = muDoubleScalarRound(data->od_code[i] + 1.0);
          if (dp2 < 2.147483648E+9) {
            if (dp2 >= -2.147483648E+9) {
              ixstart = (int32_T)dp2;
            } else {
              ixstart = MIN_int32_T;
            }
          } else if (dp2 >= 2.147483648E+9) {
            ixstart = MAX_int32_T;
          } else {
            ixstart = 0;
          }

          emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, 200, &emlrtBCI, &st);
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
          if (b_discount == discount2) {
            dp1 = 0.0;
          } else {
            dp1 = (dp2 - dp1) / (discount2 - b_discount);
          }

          ixstart = SLOPE->size[0];
          ix = (int32_T)b_index;
          SLOPE->data[(emlrtDynamicBoundsCheckFastR2012b(ix, 1, ixstart,
            &b_emlrtBCI, sp) + SLOPE->size[0] * i) - 1] = dp1;
        }

        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }

      b_index++;
      discount++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }
  }

  st.site = &c_emlrtRSI;
  d_fprintf(&st);
}

/* End of code generation (getAllSlope.c) */
