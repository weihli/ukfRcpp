// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/ukfRcpp.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cholupdate
arma::mat cholupdate(arma::mat RMat, arma::vec xVec, double nu);
RcppExport SEXP ukfRcpp_cholupdate(SEXP RMatSEXP, SEXP xVecSEXP, SEXP nuSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type RMat(RMatSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type xVec(xVecSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    __result = Rcpp::wrap(cholupdate(RMat, xVec, nu));
    return __result;
END_RCPP
}
// generateSigmaPoints
arma::mat generateSigmaPoints(const arma::mat xMat, const double gam, const arma::mat PMatChol, const int L);
RcppExport SEXP ukfRcpp_generateSigmaPoints(SEXP xMatSEXP, SEXP gamSEXP, SEXP PMatCholSEXP, SEXP LSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat >::type xMat(xMatSEXP);
    Rcpp::traits::input_parameter< const double >::type gam(gamSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type PMatChol(PMatCholSEXP);
    Rcpp::traits::input_parameter< const int >::type L(LSEXP);
    __result = Rcpp::wrap(generateSigmaPoints(xMat, gam, PMatChol, L));
    return __result;
END_RCPP
}
// generateSigmaWeights
arma::mat generateSigmaWeights(const int L, const double alpha, const double beta);
RcppExport SEXP ukfRcpp_generateSigmaWeights(SEXP LSEXP, SEXP alphaSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const int >::type L(LSEXP);
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const double >::type beta(betaSEXP);
    __result = Rcpp::wrap(generateSigmaWeights(L, alpha, beta));
    return __result;
END_RCPP
}
// testUKFclass
Rcpp::List testUKFclass(int Nlength);
RcppExport SEXP ukfRcpp_testUKFclass(SEXP NlengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type Nlength(NlengthSEXP);
    __result = Rcpp::wrap(testUKFclass(Nlength));
    return __result;
END_RCPP
}
// testSqrtUKFclass
Rcpp::List testSqrtUKFclass(int Nlength);
RcppExport SEXP ukfRcpp_testSqrtUKFclass(SEXP NlengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type Nlength(NlengthSEXP);
    __result = Rcpp::wrap(testSqrtUKFclass(Nlength));
    return __result;
END_RCPP
}
// unscentedKalmanFilter
List unscentedKalmanFilter(const arma::mat dataMat, const arma::vec initState, const arma::mat initProcCov, const List modelParams, SEXP predict_XPtr, SEXP evaluate_XPtr, SEXP control_XPtr);
RcppExport SEXP ukfRcpp_unscentedKalmanFilter(SEXP dataMatSEXP, SEXP initStateSEXP, SEXP initProcCovSEXP, SEXP modelParamsSEXP, SEXP predict_XPtrSEXP, SEXP evaluate_XPtrSEXP, SEXP control_XPtrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat >::type dataMat(dataMatSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type initState(initStateSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type initProcCov(initProcCovSEXP);
    Rcpp::traits::input_parameter< const List >::type modelParams(modelParamsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type predict_XPtr(predict_XPtrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type evaluate_XPtr(evaluate_XPtrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type control_XPtr(control_XPtrSEXP);
    __result = Rcpp::wrap(unscentedKalmanFilter(dataMat, initState, initProcCov, modelParams, predict_XPtr, evaluate_XPtr, control_XPtr));
    return __result;
END_RCPP
}
// unscentedMean
arma::mat unscentedMean(const arma::mat xSigma, const arma::vec unscWts);
RcppExport SEXP ukfRcpp_unscentedMean(SEXP xSigmaSEXP, SEXP unscWtsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat >::type xSigma(xSigmaSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type unscWts(unscWtsSEXP);
    __result = Rcpp::wrap(unscentedMean(xSigma, unscWts));
    return __result;
END_RCPP
}
// unscentedCov
arma::mat unscentedCov(const arma::mat xSigma, const arma::vec unscWtsMean, const arma::vec unscWtsCov);
RcppExport SEXP ukfRcpp_unscentedCov(SEXP xSigmaSEXP, SEXP unscWtsMeanSEXP, SEXP unscWtsCovSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat >::type xSigma(xSigmaSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type unscWtsMean(unscWtsMeanSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type unscWtsCov(unscWtsCovSEXP);
    __result = Rcpp::wrap(unscentedCov(xSigma, unscWtsMean, unscWtsCov));
    return __result;
END_RCPP
}
// unscentedCrossCov
arma::mat unscentedCrossCov(const arma::mat xSigma, const arma::mat ySigma, const arma::vec unscWtsMean, const arma::vec unscWtsCov);
RcppExport SEXP ukfRcpp_unscentedCrossCov(SEXP xSigmaSEXP, SEXP ySigmaSEXP, SEXP unscWtsMeanSEXP, SEXP unscWtsCovSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat >::type xSigma(xSigmaSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type ySigma(ySigmaSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type unscWtsMean(unscWtsMeanSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type unscWtsCov(unscWtsCovSEXP);
    __result = Rcpp::wrap(unscentedCrossCov(xSigma, ySigma, unscWtsMean, unscWtsCov));
    return __result;
END_RCPP
}
