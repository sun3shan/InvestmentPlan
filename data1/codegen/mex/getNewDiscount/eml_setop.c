/*
 * eml_setop.c
 *
 * Code generation for function 'eml_setop'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getNewDiscount.h"
#include "eml_setop.h"
#include "eml_error.h"
#include "issorted.h"
#include "getNewDiscount_mexutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo n_emlrtRSI = { 222, "eml_setop",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtRSInfo o_emlrtRSI = { 225, "eml_setop",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtMCInfo h_emlrtMCI = { 389, 5, "eml_setop",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtMCInfo i_emlrtMCI = { 400, 9, "eml_setop",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtMCInfo j_emlrtMCI = { 427, 5, "eml_setop",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtRSInfo q_emlrtRSI = { 427, "eml_setop",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtRSInfo r_emlrtRSI = { 400, "eml_setop",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
};

static emlrtRSInfo s_emlrtRSI = { 389, "eml_setop",
  "E:\\Program Files\\MATLAB\\R2014b\\toolbox\\eml\\lib\\matlab\\ops\\eml_setop.m"
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
    if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
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
  real_T absxk;
  int32_T exponent;
  boolean_T p;
  const mxArray *y;
  const mxArray *m2;
  int32_T b_ia_data[200];
  const mxArray *b_y;
  const mxArray *c_y;
  real_T b_c_data[200];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  ncmax = muIntScalarMin_sint32(a_size[0], b_size[0]);
  c_size[0] = (uint8_T)ncmax;
  ia_size[0] = ncmax;
  ib_size[0] = ncmax;
  if (!issorted(a_data, a_size)) {
    st.site = &n_emlrtRSI;
    eml_error(&st);
  }

  if (!issorted(b_data, b_size)) {
    st.site = &o_emlrtRSI;
    b_eml_error(&st);
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
    if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
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
      if ((ak < bk) || muDoubleScalarIsNaN(bk)) {
        p = true;
      } else {
        p = false;
      }

      if (p) {
        ialast = b_ialast + 1;
        iafirst = b_ialast;
      } else {
        iblast = b_iblast + 1;
        ibfirst = b_iblast;
      }
    }
  }

  if (ncmax > 0) {
    if (nc <= ncmax) {
    } else {
      y = NULL;
      m2 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&y, m2);
      st.site = &s_emlrtRSI;
      error(&st, y, &h_emlrtMCI);
    }

    if (1 > nc) {
      iafirst = 0;
    } else {
      iafirst = nc;
    }

    for (ialast = 0; ialast < iafirst; ialast++) {
      b_ia_data[ialast] = ia_data[ialast];
    }

    ia_size[0] = iafirst;
    for (ialast = 0; ialast < iafirst; ialast++) {
      ia_data[ialast] = b_ia_data[ialast];
    }
  }

  if (ncmax > 0) {
    if (nc <= ncmax) {
    } else {
      b_y = NULL;
      m2 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&b_y, m2);
      st.site = &r_emlrtRSI;
      error(&st, b_y, &i_emlrtMCI);
    }

    if (1 > nc) {
      iafirst = 0;
    } else {
      iafirst = nc;
    }

    for (ialast = 0; ialast < iafirst; ialast++) {
      b_ia_data[ialast] = ib_data[ialast];
    }

    ib_size[0] = iafirst;
    for (ialast = 0; ialast < iafirst; ialast++) {
      ib_data[ialast] = b_ia_data[ialast];
    }
  }

  if (ncmax > 0) {
    if (nc <= ncmax) {
    } else {
      c_y = NULL;
      m2 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&c_y, m2);
      st.site = &q_emlrtRSI;
      error(&st, c_y, &j_emlrtMCI);
    }

    if (1 > nc) {
      iafirst = 0;
    } else {
      iafirst = nc;
    }

    for (ialast = 0; ialast < iafirst; ialast++) {
      b_c_data[ialast] = c_data[ialast];
    }

    c_size[0] = iafirst;
    for (ialast = 0; ialast < iafirst; ialast++) {
      c_data[ialast] = b_c_data[ialast];
    }
  }
}

/* End of code generation (eml_setop.c) */
