#include <Rcpp.h>
#include <exporter.h>
#include <RcppEigen.h>
#include <stan/model/standalone_functions_header.hpp>
using namespace Rcpp;
using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using namespace stan::math;

typedef Eigen::Matrix<double,Eigen::Dynamic,1> vector_d;
typedef Eigen::Matrix<double,1,Eigen::Dynamic> row_vector_d;
typedef Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic> matrix_d;

stan::io::program_reader prog_reader__() {
  stan::io::program_reader reader;
  reader.add_event(0, 0, "start", "unknown file name");
  reader.add_event(8, 6, "end", "unknown file name");
  return reader;
}

// [[Rcpp::depends(rstan)]]
// [[Rcpp::export]]
template <class RNG>
int
integer_rng(const int& X, RNG& base_rng__, std::ostream* pstream__) {
  typedef double local_scalar_t__;
  typedef int fun_return_scalar_t__;
  const static bool propto__ = true;
  (void) propto__;
  local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
  (void) DUMMY_VAR__;  // suppress unused var warning

  int current_statement_begin__ = -1;
  try {
    {
      current_statement_begin__ = 3;
      int out(0);
      (void) out;  // dummy to suppress unused var warning

      stan::math::fill(out, std::numeric_limits<int>::min());
      stan::math::assign(out,categorical_rng(rep_vector(inv(X),X), base_rng__));


      current_statement_begin__ = 4;
      return stan::math::promote_scalar<fun_return_scalar_t__>(out);
    }
  } catch (const std::exception& e) {
    stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
    // Next line prevents compiler griping about no return
    throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
  }
}

struct integer_rng_functor__ {
  template <class RNG>
  int
    operator()(const int& X, RNG& base_rng__, std::ostream* pstream__) const {
      return integer_rng(X, base_rng__, pstream__);
    }
};

int
  integer_rng(const int& X, boost::ecuyer1988& base_rng__, std::ostream* pstream__ = nullptr){
    return
    user_7952f2e16b74f9a93db69131bbf741ef::integer_rng<boost::ecuyer1988>(X, base_rng__, pstream__);
  }
