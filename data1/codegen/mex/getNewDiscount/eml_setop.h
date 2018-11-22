/*
 * eml_setop.h
 *
 * Code generation for function 'eml_setop'
 *
 */

#ifndef __EML_SETOP_H__
#define __EML_SETOP_H__

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
#include "getNewDiscount_types.h"

/* Function Declarations */
extern void do_vectors(const emlrtStack *sp, const real_T a_data[], const
  int32_T a_size[1], const real_T b_data[], const int32_T b_size[1], real_T
  c_data[], int32_T c_size[1], int32_T ia_data[], int32_T ia_size[1], int32_T
  ib_data[], int32_T ib_size[1]);

#endif

/* End of code generation (eml_setop.h) */
