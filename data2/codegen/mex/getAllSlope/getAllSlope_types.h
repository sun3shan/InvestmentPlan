/*
 * getAllSlope_types.h
 *
 * Code generation for function 'getAllSlope'
 *
 */

#ifndef GETALLSLOPE_TYPES_H
#define GETALLSLOPE_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  real_T od_code[200];
  real_T avg_price[200];
  real_T num_package[200];
  real_T discount_amount_limit[200];
} struct0_T;

#endif                                 /*typedef_struct0_T*/
#endif

/* End of code generation (getAllSlope_types.h) */
