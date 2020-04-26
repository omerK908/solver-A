

#include <iostream>
#include <math.h>
#include "solver.hpp"



using namespace solver;

bool solver::isZero(double num)
{
    return num <= EPS && num >= -EPS;
}



double solver::solve(RealVariable& x){
    double ans =0;
    x._rem=-x._rem;
    if(x._power>2){} // throw error
    if(x._power==2){
        if(x._rem>0) ans = sqrt(x._rem);
    }
    if(x._power==1){
        ans=x._rem/x._coef;
    }
    if(x._power<0){} //throw error.
    
    x._rem=0;
    x._coef=1;
    x._power=1;
    return ans;

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
    ComplexVariable& operator+(const int y, ComplexVariable& x)
    {
        return x;
    }
    ComplexVariable& operator+(ComplexVariable& x, const int y)
    {
        return x;
    }
    ComplexVariable& operator+(ComplexVariable& x, ComplexVariable& y)
    {
        return x;
    }
    
    ComplexVariable& operator*(const int y, ComplexVariable& x)
    {
        return x;
    }
    ComplexVariable& operator*(ComplexVariable& x, const int y)
    {
        return x;
    }
    ComplexVariable& operator*(ComplexVariable& x, ComplexVariable& y)
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
    const ComplexVariable& operator/(const ComplexVariable& x, ComplexVariable& y)
    {        
        return x;
    }
    
    const ComplexVariable& operator-(ComplexVariable& x, const int y)
    {        
        return x;
    }
    const ComplexVariable& operator-(ComplexVariable& x, ComplexVariable& y)
    {        
        return x;
    }
    const ComplexVariable& operator-(const int y, ComplexVariable& x)
    {        
        return x;
    }
    
    const ComplexVariable& operator^(ComplexVariable& x, const int y)
    {        
        return x;
    }
    
    ComplexVariable& operator==(ComplexVariable& x, const int y)
    {        
        return x;
    }
    const ComplexVariable& operator==(RealVariable& x, const ComplexVariable& y)
    {        
        return y;
    }
    ComplexVariable& operator==(const int y, ComplexVariable& x)
    {        
        return x;
    }

