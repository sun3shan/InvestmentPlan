/*
 * mod.c
 *
 * Code generation for function 'mod'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getDiscount.h"
#include "mod.h"
#include <stdio.h>

/* Function Definitions */
real_T b_mod(real_T x)
{
  return x - muDoubleScalarFloor(x / 30000.0) * 30000.0;
}

/* End of code generation (mod.c) */
