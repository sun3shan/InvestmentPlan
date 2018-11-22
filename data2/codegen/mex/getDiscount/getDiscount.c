/*
 * getDiscount.c
 *
 * Code generation for function 'getDiscount'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getDiscount.h"
#include "getPkgNums.h"
#include "getNewAvgPrice.h"
#include "sum.h"
#include "fprintf.h"
#include "mod.h"
#include "getDiscount_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 9, "getDiscount",
  "E:\\PythonWorkspace\\2018_02\\getDiscount.m" };

static emlrtRSInfo b_emlrtRSI = { 29, "getDiscount",
  "E:\\PythonWorkspace\\2018_02\\getDiscount.m" };

static emlrtRSInfo c_emlrtRSI = { 41, "getDiscount",
  "E:\\PythonWorkspace\\2018_02\\getDiscount.m" };

static emlrtRSInfo d_emlrtRSI = { 94, "getDiscount",
  "E:\\PythonWorkspace\\2018_02\\getDiscount.m" };

static emlrtRSInfo e_emlrtRSI = { 100, "getDiscount",
  "E:\\PythonWorkspace\\2018_02\\getDiscount.m" };

static emlrtRSInfo f_emlrtRSI = { 132, "getDiscount",
  "E:\\PythonWorkspace\\2018_02\\getDiscount.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 62, 37, "temp", "getDiscount",
  "E:\\PythonWorkspace\\2018_02\\getDiscount.m", 0 };

static emlrtRTEInfo emlrtRTEI = { 24, 5, "getDiscount",
  "E:\\PythonWorkspace\\2018_02\\getDiscount.m" };

/* Function Definitions */
void getDiscount(const emlrtStack *sp, const struct0_T *data, real_T step,
                 struct1_T *res)
{
  real_T DISCOUNT[200];
  real_T NUMPKG[200];
  real_T INCREMENT[200];
  int32_T i;
  real_T RAWNUMPKG[200];
  real_T b_data[52];
  int32_T i0;
  int32_T discount;
  real_T x;
  real_T discount_;
  int32_T i1;
  real_T increment;
  int32_T idx;
  boolean_T exitg2;
  uint8_T ii_data[200];
  boolean_T exitg1;
  boolean_T guard1 = false;
  int32_T ii_size_idx_0;
  uint8_T temp_data[200];
  boolean_T b_guard1 = false;
  real_T maxNumPkg;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 200; i++) {
    DISCOUNT[i] = 0.0;
    NUMPKG[i] = 0.0;
    INCREMENT[i] = 0.0;
  }

  for (i = 0; i < 200; i++) {
    for (i0 = 0; i0 < 52; i0++) {
      b_data[i0] = data->avg_price[i];
    }

    st.site = &emlrtRSI;
    RAWNUMPKG[i] = getPkgNums(&st, getNewAvgPrice(data->avg_price[i],
      data->num_package[i], data->discount_amount_limit[i], 0.0), b_data,
      data->num_package[i]);
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  /*  while remain>0 */
  /*      if remain < step */
  /*          step = floor(step/10); */
  /*      end */
  /*      if step == 0 */
  /*          step = 1; */
  /*      end */
  i0 = (int32_T)((3.0E+6 + step) / step);
  emlrtForLoopVectorCheckR2012b(0.0, step, 3.0E+6, mxDOUBLE_CLASS, i0,
    &emlrtRTEI, sp);
  discount = 0;
  while (discount <= i0 - 1) {
    x = (real_T)discount * step;
    if (x == 0.0) {
    } else {
      if (b_mod(x) == 0.0) {
        discount_ = muDoubleScalarRound(x / 30000.0);
        if (discount_ < 2.147483648E+9) {
          if (discount_ >= -2.147483648E+9) {
            i1 = (int32_T)discount_;
          } else {
            i1 = MIN_int32_T;
          }
        } else if (discount_ >= 2.147483648E+9) {
          i1 = MAX_int32_T;
        } else {
          i1 = 0;
        }

        st.site = &b_emlrtRSI;
        b_fprintf(&st, i1);
      }

      increment = x - sum(DISCOUNT);
      for (i = 0; i < 200; i++) {
        if (eml_i64relops(DISCOUNT[i] + increment, data->discount_amount_limit[i]))
        {
          INCREMENT[i] = -1.0;
        } else {
          for (i1 = 0; i1 < 52; i1++) {
            b_data[i1] = data->avg_price[i];
          }

          st.site = &c_emlrtRSI;
          discount_ = getPkgNums(&st, getNewAvgPrice(data->avg_price[i],
            data->num_package[i], data->discount_amount_limit[i], DISCOUNT[i] +
            increment), b_data, data->num_package[i]) - RAWNUMPKG[i];
          INCREMENT[i] = discount_ - NUMPKG[i];
        }

        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }

      i = 1;
      discount_ = INCREMENT[0];
      if (muDoubleScalarIsNaN(INCREMENT[0])) {
        idx = 2;
        exitg2 = false;
        while ((!exitg2) && (idx < 201)) {
          i = idx;
          if (!muDoubleScalarIsNaN(INCREMENT[idx - 1])) {
            discount_ = INCREMENT[idx - 1];
            exitg2 = true;
          } else {
            idx++;
          }
        }
      }

      if (i < 200) {
        while (i + 1 < 201) {
          if (INCREMENT[i] > discount_) {
            discount_ = INCREMENT[i];
          }

          i++;
        }
      }

      idx = 0;
      i = 1;
      exitg1 = false;
      while ((!exitg1) && (i < 201)) {
        guard1 = false;
        if (INCREMENT[i - 1] == discount_) {
          idx++;
          ii_data[idx - 1] = (uint8_T)i;
          if (idx >= 200) {
            exitg1 = true;
          } else {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }

        if (guard1) {
          i++;
        }
      }

      if (1 > idx) {
        ii_size_idx_0 = 0;
      } else {
        ii_size_idx_0 = idx;
      }

      if (1 > idx) {
        i = 0;
      } else {
        i = idx;
      }

      for (i1 = 0; i1 < i; i1++) {
        temp_data[i1] = ii_data[i1];
      }

      b_guard1 = false;
      if (ii_size_idx_0 == 1) {
        /*          if maxIncrement*2 > sum(INCREMENT) */
        idx = temp_data[0] - 1;

        /*          else */
        /*              maxNumPkg = 0; */
        /*              maxIncrementIndex = -1; */
        /*              continue; */
        /*          end */
        b_guard1 = true;
      } else {
        /*          min_discount = min(DISCOUNT(temp)); */
        /*          temp2 = intersect(find(DISCOUNT==min_discount),temp); */
        if (x + step > 3.0E+6) {
          emlrtDynamicBoundsCheckFastR2012b(1, 1, ii_size_idx_0, &emlrtBCI, sp);
          idx = temp_data[0] - 1;
          b_guard1 = true;
        }
      }

      if (b_guard1) {
        maxNumPkg = INCREMENT[idx];
        discount_ = DISCOUNT[idx] + increment;
        for (i = 0; i < 200; i++) {
          if ((DISCOUNT[i] >= discount_) || eml_i64relops(discount_,
               data->discount_amount_limit[i])) {
          } else {
            for (i1 = 0; i1 < 52; i1++) {
              b_data[i1] = data->avg_price[i];
            }

            st.site = &d_emlrtRSI;
            x = (getPkgNums(&st, getNewAvgPrice(data->avg_price[i],
                   data->num_package[i], data->discount_amount_limit[i],
                   discount_), b_data, data->num_package[i]) - RAWNUMPKG[i]) -
              NUMPKG[i];
            for (i1 = 0; i1 < 52; i1++) {
              b_data[i1] = data->avg_price[idx];
            }

            st.site = &e_emlrtRSI;
            increment = (getPkgNums(&st, getNewAvgPrice(data->avg_price[idx],
              data->num_package[idx], data->discount_amount_limit[idx],
              DISCOUNT[i]), b_data, data->num_package[idx]) - RAWNUMPKG[idx]) -
              NUMPKG[idx];
            if (x + increment > maxNumPkg) {
              DISCOUNT[idx] = DISCOUNT[i];
              NUMPKG[idx] += increment;
              idx = i;
              maxNumPkg = x;
            }
          }

          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
        }

        DISCOUNT[idx] = discount_;

        /*          getMinDiscount(data.avg_price(maxIncrementIndex), ... */
        /*                                                       data.num_package(maxIncrementIndex),... */
        /*                                                       otherPrice,... */
        /*                                                       maxNumPkg+NUMPKG(maxIncrementIndex)+RAWNUMPKG(maxIncrementIndex), ... */
        /*                                                       discount_); */
        NUMPKG[idx] += maxNumPkg;
      }
    }

    discount++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  /*      if 3000000 - sum(DISCOUNT) == remain */
  /*          if step == 1 */
  /*              break; */
  /*          else */
  /*              step = step / 10; */
  /*          end */
  /*      end */
  /*      remain = 3000000 - sum(DISCOUNT); */
  /*      base = sum(DISCOUNT); */
  /*  end */
  st.site = &f_emlrtRSI;
  d_fprintf(&st);
  for (i = 0; i < 200; i++) {
    res->DISCOUNT[i] = DISCOUNT[i];
    res->NUMPKG[i] = NUMPKG[i];
    res->INCREMENT[i] = INCREMENT[i];
  }
}

/* End of code generation (getDiscount.c) */
