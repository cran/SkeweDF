#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP _SkeweDF_Generalized_Pareto(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _SkeweDF_Generalized_Pareto_calc_function(SEXP, SEXP, SEXP, SEXP);
extern SEXP _SkeweDF_Generalized_Pareto_calc_P0_delta(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _SkeweDF_Generalized_Pareto_calc_P0_iter(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _SkeweDF_Generalized_Pareto_calc_pi(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _SkeweDF_Kolmogorov_Waring(SEXP, SEXP, SEXP, SEXP);
extern SEXP _SkeweDF_Kolmogorov_Waring_P0(SEXP, SEXP, SEXP);
extern SEXP _SkeweDF_Kolmogorov_Waring_P0_calc(SEXP, SEXP, SEXP);
extern SEXP _SkeweDF_RGHD(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _SkeweDF_RGHD_P0(SEXP, SEXP, SEXP);
extern SEXP _SkeweDF_RGHD_P0_calc(SEXP, SEXP, SEXP, SEXP);
extern SEXP _SkeweDF_RGHD_P0_calc_function(SEXP, SEXP, SEXP, SEXP);
extern SEXP _SkeweDF_RGHD_P0_calc_pi(SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_SkeweDF_Generalized_Pareto",               (DL_FUNC) &_SkeweDF_Generalized_Pareto,               5},
    {"_SkeweDF_Generalized_Pareto_calc_function", (DL_FUNC) &_SkeweDF_Generalized_Pareto_calc_function, 4},
    {"_SkeweDF_Generalized_Pareto_calc_P0_delta", (DL_FUNC) &_SkeweDF_Generalized_Pareto_calc_P0_delta, 5},
    {"_SkeweDF_Generalized_Pareto_calc_P0_iter",  (DL_FUNC) &_SkeweDF_Generalized_Pareto_calc_P0_iter,  5},
    {"_SkeweDF_Generalized_Pareto_calc_pi",       (DL_FUNC) &_SkeweDF_Generalized_Pareto_calc_pi,       5},
    {"_SkeweDF_Kolmogorov_Waring",                (DL_FUNC) &_SkeweDF_Kolmogorov_Waring,                4},
    {"_SkeweDF_Kolmogorov_Waring_P0",             (DL_FUNC) &_SkeweDF_Kolmogorov_Waring_P0,             3},
    {"_SkeweDF_Kolmogorov_Waring_P0_calc",        (DL_FUNC) &_SkeweDF_Kolmogorov_Waring_P0_calc,        3},
    {"_SkeweDF_RGHD",                             (DL_FUNC) &_SkeweDF_RGHD,                             6},
    {"_SkeweDF_RGHD_P0",                          (DL_FUNC) &_SkeweDF_RGHD_P0,                          3},
    {"_SkeweDF_RGHD_P0_calc",                     (DL_FUNC) &_SkeweDF_RGHD_P0_calc,                     4},
    {"_SkeweDF_RGHD_P0_calc_function",            (DL_FUNC) &_SkeweDF_RGHD_P0_calc_function,            4},
    {"_SkeweDF_RGHD_P0_calc_pi",                  (DL_FUNC) &_SkeweDF_RGHD_P0_calc_pi,                  4},
    {NULL, NULL, 0}
};

void R_init_SkeweDF(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
