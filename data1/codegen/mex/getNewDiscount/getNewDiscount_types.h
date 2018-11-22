/*
 * getNewDiscount_types.h
 *
 * Code generation for function 'getNewDiscount'
 *
 */

#ifndef __GETNEWDISCOUNT_TYPES_H__
#define __GETNEWDISCOUNT_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray__common
#define struct_emxArray__common
struct emxArray__common
{
    void *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray__common*/
#ifndef typedef_emxArray__common
#define typedef_emxArray__common
typedef struct emxArray__common emxArray__common;
#endif /*typedef_emxArray__common*/
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
#endif /*struct_emxArray_real_T*/
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /*typedef_emxArray_real_T*/
#ifndef struct_emxArray_real_T_200
#define struct_emxArray_real_T_200
struct emxArray_real_T_200
{
    real_T data[200];
    int32_T size[1];
};
#endif /*struct_emxArray_real_T_200*/
#ifndef typedef_emxArray_real_T_200
#define typedef_emxArray_real_T_200
typedef struct emxArray_real_T_200 emxArray_real_T_200;
#endif /*typedef_emxArray_real_T_200*/
#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct
{
    real_T od_code[200];
    real_T avg_price[200];
    real_T num_package[200];
    real_T discount_amount_limit[200];
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
/* End of code generation (getNewDiscount_types.h) */
