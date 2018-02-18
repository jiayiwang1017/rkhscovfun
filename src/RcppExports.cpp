// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393
#define ARMA_NO_DEBUG
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;
using namespace arma;

// K_sob_cpp
vec K_sob_cpp(const vec& s, const vec& t);
RcppExport SEXP _rkhscovfun_K_sob_cpp(SEXP sSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const vec& >::type s(sSEXP);
    Rcpp::traits::input_parameter< const vec& >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(K_sob_cpp(s, t));
    return rcpp_result_gen;
END_RCPP
}
// getK
mat getK(const vec& t);
RcppExport SEXP _rkhscovfun_getK(SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const vec& >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(getK(t));
    return rcpp_result_gen;
END_RCPP
}
// getM
mat getM(const vec& t, int k, int p, double tol);
RcppExport SEXP _rkhscovfun_getM(SEXP tSEXP, SEXP kSEXP, SEXP pSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const vec& >::type t(tSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(getM(t, k, p, tol));
    return rcpp_result_gen;
END_RCPP
}
// svec_cpp
vec svec_cpp(const mat& B);
RcppExport SEXP _rkhscovfun_svec_cpp(SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const mat& >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(svec_cpp(B));
    return rcpp_result_gen;
END_RCPP
}
// Qlossprep_cpp
List Qlossprep_cpp(List Xs, List Ms, const ivec& include);
RcppExport SEXP _rkhscovfun_Qlossprep_cpp(SEXP XsSEXP, SEXP MsSEXP, SEXP includeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type Xs(XsSEXP);
    Rcpp::traits::input_parameter< List >::type Ms(MsSEXP);
    Rcpp::traits::input_parameter< const ivec& >::type include(includeSEXP);
    rcpp_result_gen = Rcpp::wrap(Qlossprep_cpp(Xs, Ms, include));
    return rcpp_result_gen;
END_RCPP
}
// testQloss
List testQloss(vec Bv, SEXP RR, SEXP RQv, double c);
RcppExport SEXP _rkhscovfun_testQloss(SEXP BvSEXP, SEXP RRSEXP, SEXP RQvSEXP, SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< vec >::type Bv(BvSEXP);
    Rcpp::traits::input_parameter< SEXP >::type RR(RRSEXP);
    Rcpp::traits::input_parameter< SEXP >::type RQv(RQvSEXP);
    Rcpp::traits::input_parameter< double >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(testQloss(Bv, RR, RQv, c));
    return rcpp_result_gen;
END_RCPP
}
// prox_trace_hs
mat prox_trace_hs(const vec& Bv, double s1, double s2, const vec& weight, int r, int max_rank, bool pos);
RcppExport SEXP _rkhscovfun_prox_trace_hs(SEXP BvSEXP, SEXP s1SEXP, SEXP s2SEXP, SEXP weightSEXP, SEXP rSEXP, SEXP max_rankSEXP, SEXP posSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const vec& >::type Bv(BvSEXP);
    Rcpp::traits::input_parameter< double >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< double >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< const vec& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type max_rank(max_rankSEXP);
    Rcpp::traits::input_parameter< bool >::type pos(posSEXP);
    rcpp_result_gen = Rcpp::wrap(prox_trace_hs(Bv, s1, s2, weight, r, max_rank, pos));
    return rcpp_result_gen;
END_RCPP
}
// prox
vec prox(const vec& Bv, double s1, double s2, const vec& weight, int r, int max_rank, bool pos);
RcppExport SEXP _rkhscovfun_prox(SEXP BvSEXP, SEXP s1SEXP, SEXP s2SEXP, SEXP weightSEXP, SEXP rSEXP, SEXP max_rankSEXP, SEXP posSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const vec& >::type Bv(BvSEXP);
    Rcpp::traits::input_parameter< double >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< double >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< const vec& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type max_rank(max_rankSEXP);
    Rcpp::traits::input_parameter< bool >::type pos(posSEXP);
    rcpp_result_gen = Rcpp::wrap(prox(Bv, s1, s2, weight, r, max_rank, pos));
    return rcpp_result_gen;
END_RCPP
}
// rkhscov_pg_cpp
List rkhscov_pg_cpp(SEXP RR, SEXP RQv, double c, double lam, double gam, vec B0v, vec weight, double L, double eta, double alpha, int maxit, bool traceit, double tol, int max_rank, bool pos, int variant, int cond);
RcppExport SEXP _rkhscovfun_rkhscov_pg_cpp(SEXP RRSEXP, SEXP RQvSEXP, SEXP cSEXP, SEXP lamSEXP, SEXP gamSEXP, SEXP B0vSEXP, SEXP weightSEXP, SEXP LSEXP, SEXP etaSEXP, SEXP alphaSEXP, SEXP maxitSEXP, SEXP traceitSEXP, SEXP tolSEXP, SEXP max_rankSEXP, SEXP posSEXP, SEXP variantSEXP, SEXP condSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type RR(RRSEXP);
    Rcpp::traits::input_parameter< SEXP >::type RQv(RQvSEXP);
    Rcpp::traits::input_parameter< double >::type c(cSEXP);
    Rcpp::traits::input_parameter< double >::type lam(lamSEXP);
    Rcpp::traits::input_parameter< double >::type gam(gamSEXP);
    Rcpp::traits::input_parameter< vec >::type B0v(B0vSEXP);
    Rcpp::traits::input_parameter< vec >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< double >::type L(LSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< bool >::type traceit(traceitSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type max_rank(max_rankSEXP);
    Rcpp::traits::input_parameter< bool >::type pos(posSEXP);
    Rcpp::traits::input_parameter< int >::type variant(variantSEXP);
    Rcpp::traits::input_parameter< int >::type cond(condSEXP);
    rcpp_result_gen = Rcpp::wrap(rkhscov_pg_cpp(RR, RQv, c, lam, gam, B0v, weight, L, eta, alpha, maxit, traceit, tol, max_rank, pos, variant, cond));
    return rcpp_result_gen;
END_RCPP
}
// start_lambda
double start_lambda(SEXP RR, SEXP RQv, double c, vec weight, double gam, bool pos, double rtol);
RcppExport SEXP _rkhscovfun_start_lambda(SEXP RRSEXP, SEXP RQvSEXP, SEXP cSEXP, SEXP weightSEXP, SEXP gamSEXP, SEXP posSEXP, SEXP rtolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type RR(RRSEXP);
    Rcpp::traits::input_parameter< SEXP >::type RQv(RQvSEXP);
    Rcpp::traits::input_parameter< double >::type c(cSEXP);
    Rcpp::traits::input_parameter< vec >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< double >::type gam(gamSEXP);
    Rcpp::traits::input_parameter< bool >::type pos(posSEXP);
    Rcpp::traits::input_parameter< double >::type rtol(rtolSEXP);
    rcpp_result_gen = Rcpp::wrap(start_lambda(RR, RQv, c, weight, gam, pos, rtol));
    return rcpp_result_gen;
END_RCPP
}
// sumvaliderr
double sumvaliderr(SEXP RR, SEXP RQv, double c, const vec& Bv);
RcppExport SEXP _rkhscovfun_sumvaliderr(SEXP RRSEXP, SEXP RQvSEXP, SEXP cSEXP, SEXP BvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type RR(RRSEXP);
    Rcpp::traits::input_parameter< SEXP >::type RQv(RQvSEXP);
    Rcpp::traits::input_parameter< double >::type c(cSEXP);
    Rcpp::traits::input_parameter< const vec& >::type Bv(BvSEXP);
    rcpp_result_gen = Rcpp::wrap(sumvaliderr(RR, RQv, c, Bv));
    return rcpp_result_gen;
END_RCPP
}
// rkhscov_pg_cvj_cpp
mat rkhscov_pg_cvj_cpp(List Xs, List Ms, ivec traingroup, ivec testgroup, const vec& lams, double gam, vec B0v, vec weight, double L, double eta, double alpha, int maxit, bool traceit, double tol, int max_rank, bool pos, int variant, int cond);
RcppExport SEXP _rkhscovfun_rkhscov_pg_cvj_cpp(SEXP XsSEXP, SEXP MsSEXP, SEXP traingroupSEXP, SEXP testgroupSEXP, SEXP lamsSEXP, SEXP gamSEXP, SEXP B0vSEXP, SEXP weightSEXP, SEXP LSEXP, SEXP etaSEXP, SEXP alphaSEXP, SEXP maxitSEXP, SEXP traceitSEXP, SEXP tolSEXP, SEXP max_rankSEXP, SEXP posSEXP, SEXP variantSEXP, SEXP condSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type Xs(XsSEXP);
    Rcpp::traits::input_parameter< List >::type Ms(MsSEXP);
    Rcpp::traits::input_parameter< ivec >::type traingroup(traingroupSEXP);
    Rcpp::traits::input_parameter< ivec >::type testgroup(testgroupSEXP);
    Rcpp::traits::input_parameter< const vec& >::type lams(lamsSEXP);
    Rcpp::traits::input_parameter< double >::type gam(gamSEXP);
    Rcpp::traits::input_parameter< vec >::type B0v(B0vSEXP);
    Rcpp::traits::input_parameter< vec >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< double >::type L(LSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< bool >::type traceit(traceitSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type max_rank(max_rankSEXP);
    Rcpp::traits::input_parameter< bool >::type pos(posSEXP);
    Rcpp::traits::input_parameter< int >::type variant(variantSEXP);
    Rcpp::traits::input_parameter< int >::type cond(condSEXP);
    rcpp_result_gen = Rcpp::wrap(rkhscov_pg_cvj_cpp(Xs, Ms, traingroup, testgroup, lams, gam, B0v, weight, L, eta, alpha, maxit, traceit, tol, max_rank, pos, variant, cond));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rkhscovfun_K_sob_cpp", (DL_FUNC) &_rkhscovfun_K_sob_cpp, 2},
    {"_rkhscovfun_getK", (DL_FUNC) &_rkhscovfun_getK, 1},
    {"_rkhscovfun_getM", (DL_FUNC) &_rkhscovfun_getM, 4},
    {"_rkhscovfun_svec_cpp", (DL_FUNC) &_rkhscovfun_svec_cpp, 1},
    {"_rkhscovfun_Qlossprep_cpp", (DL_FUNC) &_rkhscovfun_Qlossprep_cpp, 3},
    {"_rkhscovfun_testQloss", (DL_FUNC) &_rkhscovfun_testQloss, 4},
    {"_rkhscovfun_prox_trace_hs", (DL_FUNC) &_rkhscovfun_prox_trace_hs, 7},
    {"_rkhscovfun_prox", (DL_FUNC) &_rkhscovfun_prox, 7},
    {"_rkhscovfun_rkhscov_pg_cpp", (DL_FUNC) &_rkhscovfun_rkhscov_pg_cpp, 17},
    {"_rkhscovfun_start_lambda", (DL_FUNC) &_rkhscovfun_start_lambda, 7},
    {"_rkhscovfun_sumvaliderr", (DL_FUNC) &_rkhscovfun_sumvaliderr, 4},
    {"_rkhscovfun_rkhscov_pg_cvj_cpp", (DL_FUNC) &_rkhscovfun_rkhscov_pg_cvj_cpp, 18},
    {NULL, NULL, 0}
};

RcppExport void R_init_rkhscovfun(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
