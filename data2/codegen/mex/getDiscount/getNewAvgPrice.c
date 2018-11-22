/*
 * getNewAvgPrice.c
 *
 * Code generation for function 'getNewAvgPrice'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getDiscount.h"
#include "getNewAvgPrice.h"
#include <stdio.h>

/* Function Definitions */
boolean_T eml_i64relops(real_T a, int64_T b)
{
  boolean_T p;
  boolean_T inq;
  boolean_T alarge;
  boolean_T bsmall;
  boolean_T asmall;
  p = false;
  if ((-9.2233720368547758E+18 <= a) && (a < 9.2233720368547758E+18)) {
    inq = true;
  } else {
    inq = false;
  }

  if (!inq) {
    if (a >= 0.0) {
      p = true;
    }
  } else {
    inq = (a >= 4.503599627370496E+15);
    alarge = (b >= 4503599627370496LL);
    bsmall = (a <= -4.503599627370496E+15);
    asmall = (b <= -4503599627370496LL);
    if (((!alarge) && inq) || (asmall && (!bsmall))) {
      p = true;
    } else if (inq || asmall) {
      p = (b < (int64_T)muDoubleScalarRound(a));
    } else {
      if ((!alarge) && (!bsmall)) {
        p = (b < a);
      }
    }
  }

  return p;
}

real_T getNewAvgPrice(real_T avgPrice, real_T numPkg, int64_T
                      discountAmountLimit, real_T discount)
{
  real_T newAvgPrice;
  real_T x;
  real_T roundedy;
  boolean_T inq;
  int64_T q1;
  int64_T qY;
  uint64_T q0;
  uint64_T tmp;
  int64_T b_q0;
  int64_T b_x;
  if (eml_i64relops(discount, discountAmountLimit)) {
    x = avgPrice * numPkg;
    if (discountAmountLimit == MIN_int64_T) {
      roundedy = muDoubleScalarRound(x);
      if ((-9.2233720368547758E+18 <= roundedy) && (roundedy <
           9.2233720368547758E+18)) {
        inq = true;
      } else {
        inq = false;
      }

      if (inq) {
        if (x - muDoubleScalarFloor(x) == 0.5) {
          if ((x < 0.0) && (-9223372036854775807LL <= (int64_T)roundedy)) {
            roundedy++;
          }

          q1 = (int64_T)roundedy;
          qY = MAX_int64_T + q1;
          if ((q1 > 0LL) && (qY <= 0LL)) {
            qY = MAX_int64_T;
          }
        } else {
          q1 = (int64_T)roundedy;
          qY = MAX_int64_T + q1;
          if ((q1 > 0LL) && (qY <= 0LL)) {
            qY = MAX_int64_T;
          }
        }
      } else if (x >= 0.0) {
        qY = MAX_int64_T;
      } else if (x < 0.0) {
        if (-x < 1.8446744073709552E+19) {
          q0 = (uint64_T)-x;
          tmp = q0 - 9223372036854775807ULL;
          if (tmp > q0) {
            tmp = 0ULL;
          }

          if (tmp > 9223372036854775807ULL) {
            qY = MIN_int64_T;
          } else {
            qY = -(int64_T)tmp;
          }
        } else {
          qY = MIN_int64_T;
        }
      } else {
        qY = 0LL;
      }

      if ((qY < MAX_int64_T) && (!muDoubleScalarIsInf(x)) &&
          (!muDoubleScalarIsNaN(x))) {
        b_q0 = qY + 1LL;
        if ((qY > 0LL) && (b_q0 <= 0LL)) {
          b_q0 = MAX_int64_T;
        }

        qY = b_q0;
      }
    } else {
      b_x = -discountAmountLimit;
      roundedy = muDoubleScalarRound(x);
      if ((-9.2233720368547758E+18 <= roundedy) && (roundedy <
           9.2233720368547758E+18)) {
        inq = true;
      } else {
        inq = false;
      }

      if (inq) {
        if (x - muDoubleScalarFloor(x) == 0.5) {
          if ((x > 0.0) && (b_x < 0LL) && (b_x <= (int64_T)-roundedy)) {
            roundedy--;
          } else {
            if ((x < 0.0) && (b_x > 0LL) && (-b_x <= (int64_T)roundedy)) {
              roundedy++;
            }
          }

          q1 = (int64_T)roundedy;
          qY = b_x + q1;
          if ((b_x < 0LL) && ((q1 < 0LL) && (qY >= 0LL))) {
            qY = MIN_int64_T;
          } else {
            if ((b_x > 0LL) && ((q1 > 0LL) && (qY <= 0LL))) {
              qY = MAX_int64_T;
            }
          }
        } else {
          q1 = (int64_T)roundedy;
          qY = b_x + q1;
          if ((b_x < 0LL) && ((q1 < 0LL) && (qY >= 0LL))) {
            qY = MIN_int64_T;
          } else {
            if ((b_x > 0LL) && ((q1 > 0LL) && (qY <= 0LL))) {
              qY = MAX_int64_T;
            }
          }
        }
      } else if (x >= 0.0) {
        if ((x < 1.8446744073709552E+19) && (b_x < 0LL)) {
          b_q0 = -b_x;
          if (b_q0 < 0LL) {
            b_q0 = 0LL;
          }

          if (b_x > MIN_int64_T) {
            tmp = (uint64_T)x - b_q0;
          } else {
            tmp = (uint64_T)x - 9223372036854775807ULL;
          }

          if (tmp > 9223372036854775807ULL) {
            qY = MAX_int64_T;
          } else {
            qY = (int64_T)tmp;
          }
        } else {
          qY = MAX_int64_T;
        }
      } else if (x < 0.0) {
        if (-x < 1.8446744073709552E+19) {
          q0 = (uint64_T)-x;
          tmp = q0 - b_x;
          if (tmp > q0) {
            tmp = 0ULL;
          }

          if (tmp > 9223372036854775807ULL) {
            qY = MIN_int64_T;
          } else {
            qY = -(int64_T)tmp;
          }
        } else {
          qY = MIN_int64_T;
        }
      } else {
        qY = 0LL;
      }
    }

    newAvgPrice = (real_T)qY / numPkg;
  } else {
    newAvgPrice = (avgPrice * numPkg - discount) / numPkg;
  }

  return newAvgPrice;
}

/* End of code generation (getNewAvgPrice.c) */
