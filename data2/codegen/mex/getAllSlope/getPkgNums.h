/*
 * getPkgNums.h
 *
 * Code generation for function 'getPkgNums'
 *
 */

#ifndef GETPKGNUMS_H
#define GETPKGNUMS_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "getAllSlope_types.h"

/* Function Declarations */
extern real_T getPkgNums(const emlrtStack *sp, const real_T data_avg_price[200],
  const real_T data_num_package[200], const real_T data_discount_amount_limit
  [200], real_T od_code, const real_T otherPrice[52], real_T discount);

#endif

/* End of code generation (getPkgNums.h) */
