/*
 * issorted.c
 *
 * Code generation for function 'issorted'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "getNewDiscount.h"
#include "issorted.h"

/* Function Definitions */
boolean_T issorted(const real_T x_data[], const int32_T x_size[1])
{
  boolean_T y;
  int32_T dim;
  int32_T b_dim;
  int32_T n;
  int32_T k;
  boolean_T exitg1;
  int32_T b_n;
  boolean_T exitg2;
  uint8_T subs[2];
  y = true;
  dim = 2;
  if (x_size[0] != 1) {
    dim = 1;
  }

  if (x_size[0] != 0) {
    if (dim <= 1) {
      b_dim = x_size[0];
    } else {
      b_dim = 1;
    }

    if (b_dim != 1) {
      n = !(dim == 2);
      k = 1;
      exitg1 = false;
      while ((!exitg1) && (k <= n)) {
        if (dim == 1) {
          b_n = x_size[0] - 1;
        } else {
          b_n = x_size[0];
        }

        k = 1;
        exitg2 = false;
        while ((!exitg2) && (k <= b_n)) {
          subs[0] = (uint8_T)k;
          subs[1] = 1U;
          subs[dim - 1]++;
          if ((x_data[(uint8_T)k - 1] <= x_data[subs[0] - 1]) ||
              muDoubleScalarIsNaN(x_data[subs[0] - 1])) {
            y = true;
          } else {
            y = false;
          }

          if (!y) {
            exitg2 = true;
          } else {
            k++;
          }
        }

        if (!y) {
          exitg1 = true;
        } else {
          k = 2;
        }
      }
    }
  }

  return y;
}

/* End of code generation (issorted.c) */
