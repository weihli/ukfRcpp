#ifndef FPTR_H
#define FPTR_H

#include<RcppArmadillo.h>
#include "ukfRcpp.h"

typedef Rcpp::List (*stateHandler)(const arma::mat, const Rcpp::List);

#endif