/*
 * getPkgNums.c
 *
 * Code generation for function 'getPkgNums'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getAllSlope.h"
#include "getPkgNums.h"
#include "eml_error.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo g_emlrtRSI = { 2, "getPkgNums",
  "E:\\PythonWorkspace\\2018_02\\data1\\getPkgNums.m" };

static emlrtRSInfo h_emlrtRSI = { 4, "getPkgNums",
  "E:\\PythonWorkspace\\2018_02\\data1\\getPkgNums.m" };

static emlrtRSInfo i_emlrtRSI = { 5, "getPkgNums",
  "E:\\PythonWorkspace\\2018_02\\data1\\getPkgNums.m" };

static emlrtRSInfo j_emlrtRSI = { 42, "power",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\power.m" };

static emlrtRSInfo k_emlrtRSI = { 56, "power",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\power.m" };

static emlrtBCInfo c_emlrtBCI = { 1, 200, 4, 27, "data.discount_amount_limit",
  "getNewAvgPrice", "E:\\PythonWorkspace\\2018_02\\data1\\getNewAvgPrice.m", 0 };

static emlrtBCInfo d_emlrtBCI = { 1, 200, 3, 14, "data.num_package",
  "getNewAvgPrice", "E:\\PythonWorkspace\\2018_02\\data1\\getNewAvgPrice.m", 0 };

static emlrtBCInfo e_emlrtBCI = { 1, 200, 2, 16, "data.avg_price",
  "getNewAvgPrice", "E:\\PythonWorkspace\\2018_02\\data1\\getNewAvgPrice.m", 0 };

static emlrtBCInfo f_emlrtBCI = { 1, 200, 3, 14, "data.num_package",
  "getPkgNums", "E:\\PythonWorkspace\\2018_02\\data1\\getPkgNums.m", 0 };

static emlrtDCInfo b_emlrtDCI = { 3, 14, "getPkgNums",
  "E:\\PythonWorkspace\\2018_02\\data1\\getPkgNums.m", 1 };

/* Function Definitions */
real_T getPkgNums(const emlrtStack *sp, const real_T data_avg_price[200], const
                  real_T data_num_package[200], const real_T
                  data_discount_amount_limit[200], real_T od_code, const real_T
                  otherPrice[52], real_T discount)
{
  real_T ownPrice;
  int32_T k;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  real_T y[52];
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
  ownPrice = muDoubleScalarRound(od_code + 1.0);
  if (ownPrice < 2.147483648E+9) {
    if (ownPrice >= -2.147483648E+9) {
      k = (int32_T)ownPrice;
    } else {
      k = MIN_int32_T;
    }
  } else if (ownPrice >= 2.147483648E+9) {
    k = MAX_int32_T;
  } else {
    k = 0;
  }

  emlrtDynamicBoundsCheckFastR2012b(k, 1, 200, &e_emlrtBCI, &st);
  ownPrice = muDoubleScalarRound(od_code + 1.0);
  if (ownPrice < 2.147483648E+9) {
    if (ownPrice >= -2.147483648E+9) {
      k = (int32_T)ownPrice;
    } else {
      k = MIN_int32_T;
    }
  } else if (ownPrice >= 2.147483648E+9) {
    k = MAX_int32_T;
  } else {
    k = 0;
  }

  emlrtDynamicBoundsCheckFastR2012b(k, 1, 200, &d_emlrtBCI, &st);
  ownPrice = muDoubleScalarRound(od_code + 1.0);
  if (ownPrice < 2.147483648E+9) {
    if (ownPrice >= -2.147483648E+9) {
      k = (int32_T)ownPrice;
    } else {
      k = MIN_int32_T;
    }
  } else if (ownPrice >= 2.147483648E+9) {
    k = MAX_int32_T;
  } else {
    k = 0;
  }

  emlrtDynamicBoundsCheckFastR2012b(k, 1, 200, &c_emlrtBCI, &st);
  if (discount == 0.0) {
    ownPrice = muDoubleScalarRound(od_code + 1.0);
    if (ownPrice < 2.147483648E+9) {
      if (ownPrice >= -2.147483648E+9) {
        k = (int32_T)ownPrice;
      } else {
        k = MIN_int32_T;
      }
    } else if (ownPrice >= 2.147483648E+9) {
      k = MAX_int32_T;
    } else {
      k = 0;
    }

    ownPrice = data_avg_price[k - 1];
  } else {
    ownPrice = muDoubleScalarRound(od_code + 1.0);
    if (ownPrice < 2.147483648E+9) {
      if (ownPrice >= -2.147483648E+9) {
        k = (int32_T)ownPrice;
      } else {
        k = MIN_int32_T;
      }
    } else if (ownPrice >= 2.147483648E+9) {
      k = MAX_int32_T;
    } else {
      k = 0;
    }

    if (discount > data_discount_amount_limit[k - 1]) {
      ownPrice = muDoubleScalarRound(od_code + 1.0);
      if (ownPrice < 2.147483648E+9) {
        if (ownPrice >= -2.147483648E+9) {
          k = (int32_T)ownPrice;
        } else {
          k = MIN_int32_T;
        }
      } else if (ownPrice >= 2.147483648E+9) {
        k = MAX_int32_T;
      } else {
        k = 0;
      }

      ownPrice = muDoubleScalarRound(od_code + 1.0);
      if (ownPrice < 2.147483648E+9) {
        if (ownPrice >= -2.147483648E+9) {
          i1 = (int32_T)ownPrice;
        } else {
          i1 = MIN_int32_T;
        }
      } else if (ownPrice >= 2.147483648E+9) {
        i1 = MAX_int32_T;
      } else {
        i1 = 0;
      }

      ownPrice = muDoubleScalarRound(od_code + 1.0);
      if (ownPrice < 2.147483648E+9) {
        if (ownPrice >= -2.147483648E+9) {
          i2 = (int32_T)ownPrice;
        } else {
          i2 = MIN_int32_T;
        }
      } else if (ownPrice >= 2.147483648E+9) {
        i2 = MAX_int32_T;
      } else {
        i2 = 0;
      }

      ownPrice = muDoubleScalarRound(od_code + 1.0);
      if (ownPrice < 2.147483648E+9) {
        if (ownPrice >= -2.147483648E+9) {
          i3 = (int32_T)ownPrice;
        } else {
          i3 = MIN_int32_T;
        }
      } else if (ownPrice >= 2.147483648E+9) {
        i3 = MAX_int32_T;
      } else {
        i3 = 0;
      }

      ownPrice = (data_avg_price[k - 1] * data_num_package[i1 - 1] -
                  data_discount_amount_limit[i2 - 1]) / data_num_package[i3 - 1];
    } else {
      ownPrice = muDoubleScalarRound(od_code + 1.0);
      if (ownPrice < 2.147483648E+9) {
        if (ownPrice >= -2.147483648E+9) {
          k = (int32_T)ownPrice;
        } else {
          k = MIN_int32_T;
        }
      } else if (ownPrice >= 2.147483648E+9) {
        k = MAX_int32_T;
      } else {
        k = 0;
      }

      ownPrice = muDoubleScalarRound(od_code + 1.0);
      if (ownPrice < 2.147483648E+9) {
        if (ownPrice >= -2.147483648E+9) {
          i1 = (int32_T)ownPrice;
        } else {
          i1 = MIN_int32_T;
        }
      } else if (ownPrice >= 2.147483648E+9) {
        i1 = MAX_int32_T;
      } else {
        i1 = 0;
      }

      ownPrice = muDoubleScalarRound(od_code + 1.0);
      if (ownPrice < 2.147483648E+9) {
        if (ownPrice >= -2.147483648E+9) {
          i2 = (int32_T)ownPrice;
        } else {
          i2 = MIN_int32_T;
        }
      } else if (ownPrice >= 2.147483648E+9) {
        i2 = MAX_int32_T;
      } else {
        i2 = 0;
      }

      ownPrice = (data_avg_price[k - 1] * data_num_package[i1 - 1] - discount) /
        data_num_package[i2 - 1];
    }
  }

  k = (int32_T)emlrtIntegerCheckFastR2012b(od_code + 1.0, &b_emlrtDCI, sp);
  emlrtDynamicBoundsCheckFastR2012b(k, 1, 200, &f_emlrtBCI, sp);
  st.site = &h_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  if (ownPrice < 0.0) {
    c_st.site = &k_emlrtRSI;
    eml_error(&c_st);
  }

  ownPrice = muDoubleScalarPower(ownPrice, -1.09);
  st.site = &i_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  for (k = 0; k < 52; k++) {
    if (otherPrice[k] < 0.0) {
      c_st.site = &k_emlrtRSI;
      eml_error(&c_st);
    }

    y[k] = muDoubleScalarPower(otherPrice[k], -1.09);
  }

  b_y = y[0];
  for (k = 0; k < 51; k++) {
    b_y += y[k + 1];
  }

  return muDoubleScalarRound(ownPrice / (ownPrice + b_y) * data_num_package
    [(int32_T)(od_code + 1.0) - 1] * 1.0E+6) / 1.0E+6;
}

/* End of code generation (getPkgNums.c) */
