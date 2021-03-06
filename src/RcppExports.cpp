// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// integer_rng
template <class RNG> int integer_rng(const int& X, RNG& base_rng__, std::ostream* pstream__);
RcppExport SEXP _testStanPackage_integer_rng(SEXP XSEXP, SEXP base_rng__SEXP, SEXP pstream__SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type X(XSEXP);
    Rcpp::traits::input_parameter< RNG& >::type base_rng__(base_rng__SEXP);
    Rcpp::traits::input_parameter< std::ostream* >::type pstream__(pstream__SEXP);
    rcpp_result_gen = Rcpp::wrap(integer_rng(X, base_rng__, pstream__));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _testStanPackage_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}
