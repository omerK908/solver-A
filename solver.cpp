

#include <iostream>
#include <math.h>
#include "solver.hpp"



using namespace solver;

bool solver::isZero(double x){
    return (x <= EPS && x >= -EPS);
}

/*********RealVariable*********/

RealVariable& RealVariable::operator==(double x){
    return *this;
}

RealVariable& RealVariable::operator==(RealVariable &x){
    return *this;
}

RealVariable& RealVariable::operator+(double x){
    return *this;
}

RealVariable& RealVariable::operator+(RealVariable &x){
    return *this;
}

RealVariable& RealVariable::operator-(double x){
    return *this;
}

RealVariable& RealVariable::operator-(RealVariable &x){
    return *this;
}

RealVariable& RealVariable::operator*(double x){
    this->_coef *= x;
    return *this;
}

RealVariable& RealVariable::operator*(RealVariable &x){
    this->_coef *= x._coef;
    this->_power *= x._power;
    return *this;
}

RealVariable& RealVariable::operator^(double x){
    this->_power *= x;
    return *this;
}

RealVariable& RealVariable::operator/(double x){
    if(isZero(x)) throw runtime_error("can not divide by zero");
    this->_coef /= x;
    return *this;
}

RealVariable& RealVariable::operator/(RealVariable &x){
    if(isZero(x._coef)) throw runtime_error("can not divide by zero");
    this->_coef /= x._coef;
    this->_power -= x._power;
    return *this;
}

RealVariable& solver::operator==(double x, RealVariable &y){
    return y;
}

RealVariable& solver::operator+(double x, RealVariable &y){
    return y;
}

RealVariable& solver::operator-(double x, RealVariable &y){
    return y;
}

RealVariable& solver::operator*(double x, RealVariable &y){
    return y;
}

RealVariable& solver::operator/(double x, RealVariable &y){
    return y;
}

double solver::solve(RealVariable& x){
    return 0;
}


/*********complex*********/

ComplexVariable& ComplexVariable::operator+(std::complex<double> x){
    return *this;
}
ComplexVariable& ComplexVariable::operator==(std::complex<double> x){
    return *this;
}

ComplexVariable& ComplexVariable::operator+(ComplexVariable &x){
    return *this;
}
ComplexVariable& ComplexVariable::operator==(ComplexVariable &x){
    return *this;
}

ComplexVariable& ComplexVariable::operator-(std::complex<double> x){
    return *this;
}

ComplexVariable& ComplexVariable::operator-(ComplexVariable &x){
    return *this;
}

ComplexVariable& ComplexVariable::operator*(std::complex<double> x){
    return *this;
}

ComplexVariable& ComplexVariable::operator*(ComplexVariable &x){
    return *this;
}

ComplexVariable& ComplexVariable::operator^(std::complex<double> x){
    return *this;
}

ComplexVariable& ComplexVariable::operator^(ComplexVariable &x){
    return *this;
}

ComplexVariable& ComplexVariable::operator/(std::complex<double> x){
    return *this;
}

ComplexVariable& ComplexVariable::operator/(ComplexVariable &x){
    return *this;
}

ComplexVariable& solver::operator==(std::complex<double> x, ComplexVariable &y){
    return y;
}

ComplexVariable& solver::operator+(std::complex<double> x, ComplexVariable &y){
    return y;
}

ComplexVariable& solver::operator-(std::complex<double> x, ComplexVariable &y){
    return y;
}

ComplexVariable& solver::operator*(std::complex<double> x, ComplexVariable &y){
    return y;
}

ComplexVariable& solver::operator/(std::complex<double> x, ComplexVariable &y){
    return y;
}

std::complex<double> solver::solve(ComplexVariable& x){
    return 0;
}
