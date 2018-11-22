/*
 * getDiscount_types.h
 *
 * Code generation for function 'getDiscount'
 *
 */

#ifndef __GETDISCOUNT_TYPES_H__
#define __GETDISCOUNT_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_int32_T_200
#define struct_emxArray_int32_T_200
struct emxArray_int32_T_200
{
    int32_T data[200];
    int32_T size[1];
};
#endif /*struct_emxArray_int32_T_200*/
#ifndef typedef_emxArray_int32_T_200
#define typedef_emxArray_int32_T_200
typedef struct emxArray_int32_T_200 emxArray_int32_T_200;
#endif /*typedef_emxArray_int32_T_200*/
#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct
{
    int64_T od_code[200];
    real_T avg_price[200];
    real_T num_package[200];
    int64_T discount_amount_limit[200];
} struct0_T;
#endif /*typedef_struct0_T*/
#ifndef typedef_struct1_T
#define typedef_struct1_T
typedef struct
{
    real_T DISCOUNT[200];
    real_T NUMPKG[200];
    real_T INCREMENT[200];
} struct1_T;
#endif /*typedef_struct1_T*/

#endif
/* End of code generation (getDiscount_types.h) */
