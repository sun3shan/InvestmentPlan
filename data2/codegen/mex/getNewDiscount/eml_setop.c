/*
 * eml_setop.c
 *
 * Code generation for function 'eml_setop'
 *
 */

/* Include files */
#include <math.h>
#include "mwmathutil.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "getNewDiscount.h"
#include "eml_setop.h"
#include "error.h"
#include "issorted.h"

/* Variable Definitions */
static emlrtRSInfo t_emlrtRSI = { 225, /* lineNo */
  "eml_setop",                         /* fcnName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 228, /* lineNo */
  "eml_setop",                         /* fcnName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"/* pathName */
};

static emlrtRTEInfo g_emlrtRTEI = { 392,/* lineNo */
  5,                                   /* colNo */
  "eml_setop",                         /* fName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 403,/* lineNo */
  9,                                   /* colNo */
  "eml_setop",                         /* fName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 430,/* lineNo */
  5,                                   /* colNo */
  "eml_setop",                         /* fName */
  "E:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"/* pName */
};

/* Function Declarations */
static real_T skip_to_last_equal_value(int32_T *k, const real_T x_data[], const
  int32_T x_size[1]);

/* Function Definitions */
static real_T skip_to_last_equal_value(int32_T *k, const real_T x_data[], const
  int32_T x_size[1])
{
  real_T xk;
  boolean_T exitg1;
  real_T absxk;
  int32_T exponent;
  xk = x_data[*k - 1];
  exitg1 = false;
  while ((!exitg1) && (*k < x_size[0])) {
    absxk = muDoubleScalarAbs(xk / 2.0);
    if (!muDoubleScalarIsNaN(absxk)) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &exponent);
        absxk = ldexp(1.0, exponent - 53);
      }
    } else {
      absxk = rtNaN;
    }

    if (muDoubleScalarAbs(xk - x_data[*k]) < absxk) {
      (*k)++;
    } else {
      exitg1 = true;
    }
  }

  return xk;
}

void do_vectors(const emlrtStack *sp, const real_T a_data[], const int32_T
                a_size[1], const real_T b_data[], const int32_T b_size[1],
                real_T c_data[], int32_T c_size[1], int32_T ia_data[], int32_T
                ia_size[1], int32_T ib_data[], int32_T ib_size[1])
{
  int32_T ncmax;
  int32_T nc;
  int32_T iafirst;
  int32_T ialast;
  int32_T ibfirst;
  int32_T iblast;
  int32_T b_ialast;
  real_T ak;
  int32_T b_iblast;
  real_T bk;
  int32_T b_ia_data[200];
  real_T absxk;
  int32_T exponent;
  boolean_T b0;
  real_T b_c_data[200];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  ncmax = muIntScalarMin_sint32(a_size[0], b_size[0]);
  c_size[0] = (uint8_T)ncmax;
  ia_size[0] = ncmax;
  ib_size[0] = ncmax;
  if (!issorted(a_data, a_size)) {
    st.site = &t_emlrtRSI;
    error(&st);
  }

  if (!issorted(b_data, b_size)) {
    st.site = &u_emlrtRSI;
    b_error(&st);
  }

  nc = 0;
  iafirst = 0;
  ialast = 1;
  ibfirst = 0;
  iblast = 1;
  while ((ialast <= a_size[0]) && (iblast <= b_size[0])) {
    b_ialast = ialast;
    ak = skip_to_last_equal_value(&b_ialast, a_data, a_size);
    ialast = b_ialast;
    b_iblast = iblast;
    bk = skip_to_last_equal_value(&b_iblast, b_data, b_size);
    iblast = b_iblast;
    absxk = muDoubleScalarAbs(bk / 2.0);
    if (!muDoubleScalarIsNaN(absxk)) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &exponent);
        absxk = ldexp(1.0, exponent - 53);
      }
    } else {
      absxk = rtNaN;
    }

    if (muDoubleScalarAbs(bk - ak) < absxk) {
      nc++;
      c_data[nc - 1] = ak;
      ia_data[nc - 1] = iafirst + 1;
      ib_data[nc - 1] = ibfirst + 1;
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    } else {
      if (muDoubleScalarIsNaN(bk)) {
        b0 = !muDoubleScalarIsNaN(ak);
      } else {
        b0 = ((!muDoubleScalarIsNaN(ak)) && (ak < bk));
      }

      if (b0) {
        ialast = b_ialast + 1;
        iafirst = b_ialast;
      } else {
        iblast = b_iblast + 1;
        ibfirst = b_iblast;
      }
    }
  }

  if (ncmax > 0) {
    if (!(nc <= ncmax)) {
      emlrtErrorWithMessageIdR2018a(sp, &g_emlrtRTEI,
        "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
    }

    if (1 > nc) {
      iafirst = 0;
    } else {
      iafirst = nc;
    }

    if (0 <= iafirst - 1) {
      memcpy(&b_ia_data[0], &ia_data[0], (uint32_T)(iafirst * (int32_T)sizeof
              (int32_T)));
    }

    ia_size[0] = iafirst;
    if (0 <= iafirst - 1) {
      memcpy(&ia_data[0], &b_ia_data[0], (uint32_T)(iafirst * (int32_T)sizeof
              (int32_T)));
    }

    if (!(nc <= ncmax)) {
      emlrtErrorWithMessageIdR2018a(sp, &h_emlrtRTEI,
        "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
    }

    if (1 > nc) {
      iafirst = 0;
    } else {
      iafirst = nc;
    }

    if (0 <= iafirst - 1) {
      memcpy(&b_ia_data[0], &ib_data[0], (uint32_T)(iafirst * (int32_T)sizeof
              (int32_T)));
    }

    ib_size[0] = iafirst;
    if (0 <= iafirst - 1) {
      memcpy(&ib_data[0], &b_ia_data[0], (uint32_T)(iafirst * (int32_T)sizeof
              (int32_T)));
    }

    if (!(nc <= ncmax)) {
      emlrtErrorWithMessageIdR2018a(sp, &i_emlrtRTEI,
        "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
    }

    if (1 > nc) {
      iafirst = 0;
    } else {
      iafirst = nc;
    }

    if (0 <= iafirst - 1) {
      memcpy(&b_c_data[0], &c_data[0], (uint32_T)(iafirst * (int32_T)sizeof
              (real_T)));
    }

    c_size[0] = iafirst;
    if (0 <= iafirst - 1) {
      memcpy(&c_data[0], &b_c_data[0], (uint32_T)(iafirst * (int32_T)sizeof
              (real_T)));
    }
  }
}

/* End of code generation (eml_setop.c) */
