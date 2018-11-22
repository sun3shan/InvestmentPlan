/*
 * getPkgNums.c
 *
 * Code generation for function 'getPkgNums'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "getAllSlope.h"
#include "getPkgNums.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo g_emlrtRSI = { 2,   /* lineNo */
  "getPkgNums",                        /* fcnName */
  "D:\\2018_02\\getPkgNums.m"          /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 4,   /* lineNo */
  "getPkgNums",                        /* fcnName */
  "D:\\2018_02\\getPkgNums.m"          /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 5,   /* lineNo */
  "getPkgNums",                        /* fcnName */
  "D:\\2018_02\\getPkgNums.m"          /* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 49,  /* lineNo */
  "power",                             /* fcnName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 61,  /* lineNo */
  "power",                             /* fcnName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtDCInfo b_emlrtDCI = { 3,   /* lineNo */
  31,                                  /* colNo */
  "getPkgNums",                        /* fName */
  "D:\\2018_02\\getPkgNums.m",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  200,                                 /* iLast */
  3,                                   /* lineNo */
  31,                                  /* colNo */
  "data.num_package",                  /* aName */
  "getPkgNums",                        /* fName */
  "D:\\2018_02\\getPkgNums.m",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  200,                                 /* iLast */
  2,                                   /* lineNo */
  31,                                  /* colNo */
  "data.avg_price",                    /* aName */
  "getNewAvgPrice",                    /* fName */
  "D:\\2018_02\\getNewAvgPrice.m",     /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { 1,   /* iFirst */
  200,                                 /* iLast */
  3,                                   /* lineNo */
  31,                                  /* colNo */
  "data.num_package",                  /* aName */
  "getNewAvgPrice",                    /* fName */
  "D:\\2018_02\\getNewAvgPrice.m",     /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { 1,   /* iFirst */
  200,                                 /* iLast */
  4,                                   /* lineNo */
  54,                                  /* colNo */
  "data.discount_amount_limit",        /* aName */
  "getNewAvgPrice",                    /* fName */
  "D:\\2018_02\\getNewAvgPrice.m",     /* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
real_T getPkgNums(const emlrtStack *sp, const real_T data_avg_price[200], const
                  real_T data_num_package[200], const real_T
                  data_discount_amount_limit[200], real_T od_code, const real_T
                  otherPrice[52], real_T discount)
{
  real_T ownPrice;
  int32_T k;
  int32_T i1;
  real_T x;
  int32_T i2;
  boolean_T p;
  real_T y[52];
  int32_T i3;
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

  if (!((k >= 1) && (k <= 200))) {
    emlrtDynamicBoundsCheckR2012b(k, 1, 200, &d_emlrtBCI, &st);
  }

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

  if (!((k >= 1) && (k <= 200))) {
    emlrtDynamicBoundsCheckR2012b(k, 1, 200, &e_emlrtBCI, &st);
  }

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

  if (!((k >= 1) && (k <= 200))) {
    emlrtDynamicBoundsCheckR2012b(k, 1, 200, &f_emlrtBCI, &st);
  }

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

  if (od_code + 1.0 != (int32_T)muDoubleScalarFloor(od_code + 1.0)) {
    emlrtIntegerCheckR2012b(od_code + 1.0, &b_emlrtDCI, sp);
  }

  k = (int32_T)(od_code + 1.0);
  if (!((k >= 1) && (k <= 200))) {
    emlrtDynamicBoundsCheckR2012b(k, 1, 200, &c_emlrtBCI, sp);
  }

  st.site = &h_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  x = muDoubleScalarPower(ownPrice, -1.09);
  if (ownPrice < 0.0) {
    c_st.site = &k_emlrtRSI;
    error(&c_st);
  }

  st.site = &i_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  p = false;
  for (k = 0; k < 52; k++) {
    y[k] = muDoubleScalarPower(otherPrice[k], -1.09);
    if (p || (otherPrice[k] < 0.0)) {
      p = true;
    } else {
      p = false;
    }
  }

  if (p) {
    c_st.site = &k_emlrtRSI;
    error(&c_st);
  }

  ownPrice = y[0];
  for (k = 0; k < 51; k++) {
    ownPrice += y[k + 1];
  }

  return muDoubleScalarRound(x / (x + ownPrice) * data_num_package[(int32_T)
    (od_code + 1.0) - 1] * 1.0E+6) / 1.0E+6;
}

/* End of code generation (getPkgNums.c) */
