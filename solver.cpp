

#include <iostream>
#include <math.h>
#include "solver.hpp"



using namespace solver;

bool solver::isZero(double num)
{
    return num <= EPS && num >= -EPS;
}

double solver::solve(RealVariable& x){
    
    return x._coef;

}
double solver::solve(ComplexVariable& x){
    return x._realPower;

}

/*operators*/

RealVariable& solver::operator+(RealVariable& x,RealVariable& y){
    if(x._power==y._power) x._coef=x._coef+y._coef;
    
    return x;

}
RealVariable& solver::operator+(RealVariable& x,int y){
    
    return x;

}
RealVariable& solver::operator+(int y,RealVariable& x){
    
    return x;

}

RealVariable& solver::operator*(int x,RealVariable& y){
    
    return y;
}
RealVariable& solver::operator*(RealVariable& x,RealVariable& y){
    
    return y;
}
RealVariable& solver::operator*(RealVariable& y,int x){
    
    return y;
}
RealVariable& solver::operator/(RealVariable& x,double y){
    
    return x;

}
RealVariable& solver::operator/(RealVariable& x,RealVariable& y){
    
    return x;

}
RealVariable& solver::operator/(double x,RealVariable& y){
    
    return y;

}
RealVariable& solver::operator-(RealVariable& x,const int y){
    
    return x;


}
RealVariable& solver::operator-(const int x,RealVariable& y){
    
    return y;
}
RealVariable& solver::operator-(RealVariable& x,RealVariable& y){
    
    return x;
}
    
RealVariable& solver::operator^(RealVariable& x,int y){
    
    return x;

} 
RealVariable& solver::operator==(RealVariable& x, const RealVariable& y) {
    
    return x;
}
RealVariable& solver::operator==(int x,RealVariable& y) {
    
    return y;
}
RealVariable& solver::operator==(RealVariable& x, int y) {
    
    return x;
    
}

/*Complex Operators*/
const ComplexVariable& operator+(const int y, const ComplexVariable& x)
{
    return x;
}
const ComplexVariable& operator+(const ComplexVariable& x, const int y)
{
    return x;
}
const ComplexVariable& operator+(const ComplexVariable& x, const ComplexVariable& y)
{
    return x;
}

const ComplexVariable& operator*(const int y, const ComplexVariable& x)
{
    return x;
}
const ComplexVariable& operator*(const ComplexVariable& x, const int y)
{
    return x;
}
const ComplexVariable& operator*(const ComplexVariable& x, const ComplexVariable& y)
{
    return x;
}

const ComplexVariable& operator/(const ComplexVariable& x, const int y)
{
    if(isZero(y)) throw runtime_error("Cannot divide by 0");
    
    return x;
}
const ComplexVariable& operator/(const int y, const ComplexVariable& x)
{        
    return x;
}
const ComplexVariable& operator/(const ComplexVariable& x, const ComplexVariable& y)
{        
    return x;
}

const ComplexVariable& operator-(const ComplexVariable& x, const int y)
{        
    return x;
}
const ComplexVariable& operator-(const ComplexVariable& x, const ComplexVariable& y)
{        
    return x;
}
const ComplexVariable& operator-(const int y, const ComplexVariable& x)
{        
    return x;
}

const ComplexVariable& operator^(const ComplexVariable& x, const int y)
{        
    return x;
}

const ComplexVariable& operator==(const ComplexVariable& x, const int y)
{        
    return x;
}
const ComplexVariable& operator==(const RealVariable& y, const ComplexVariable& x)
{        
    return x;
}
const ComplexVariable& operator==(const int y, const ComplexVariable& x)
{        
    return x;
}

