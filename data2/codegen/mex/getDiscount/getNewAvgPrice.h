/*
 * getNewAvgPrice.h
 *
 * Code generation for function 'getNewAvgPrice'
 *
 */

#ifndef __GETNEWAVGPRICE_H__
#define __GETNEWAVGPRICE_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "getDiscount_types.h"

/* Function Declarations */
extern boolean_T eml_i64relops(real_T a, int64_T b);
extern real_T getNewAvgPrice(real_T avgPrice, real_T numPkg, int64_T
  discountAmountLimit, real_T discount);

#ifdef __WATCOMC__

#pragma aux getNewAvgPrice value [8087];

#endif
#endif

/* End of code generation (getNewAvgPrice.h) */
