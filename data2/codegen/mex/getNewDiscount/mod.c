/*
 * mod.c
 *
 * Code generation for function 'mod'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "getNewDiscount.h"
#include "mod.h"

/* Function Definitions */
real_T b_mod(real_T x)
{
  real_T r;
  if (!muDoubleScalarIsNaN(x)) {
    if (x == 0.0) {
      r = 0.0;
    } else {
      r = muDoubleScalarRem(x, 30000.0);
      if (r == 0.0) {
        r = 0.0;
      }
    }
  } else {
    r = rtNaN;
  }

  return r;
}

/* End of code generation (mod.c) */
