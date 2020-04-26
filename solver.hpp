/*
*
* Created by kalif on 24/04/2020.
*
*/

#pragma once
#include <iostream>
#define EPS 0.0001
using namespace std;

namespace solver
{

    class RealVariable
    {   
        

    public:

        double _coef = 1;
        int _power = 1;
        double _rem = 0;        
    };
    double solve(RealVariable& x);

    RealVariable& operator+(const int y,RealVariable& x);
    RealVariable& operator+(RealVariable& x,const int y);
    RealVariable& operator+(RealVariable& x,RealVariable& y);
    
    RealVariable& operator*(const int y,RealVariable& x);
    RealVariable& operator*(RealVariable& x,const int y);
    RealVariable& operator*(RealVariable& x,RealVariable& y);
    
    RealVariable& operator/(RealVariable& x,const double y);
    RealVariable& operator/(const double y,RealVariable& x);
    RealVariable& operator/(RealVariable& x,RealVariable& y);
    
    RealVariable& operator-(RealVariable& x,const int y);
    RealVariable& operator-(RealVariable& x,RealVariable& y);
    RealVariable& operator-(const int y,RealVariable& x);
    
    RealVariable& operator^(RealVariable& x,const int y);
    
    RealVariable& operator==(RealVariable& x, const int y); 
    RealVariable& operator==(RealVariable& x, const RealVariable& y);
    RealVariable& operator==(const int y,RealVariable& x);
   
    class ComplexVariable
    {
    public:
        double _realPower;
        double _imPower;

    };
    double solve(ComplexVariable& x);

    ComplexVariable& operator+(const int y, ComplexVariable& x);
    ComplexVariable& operator+(ComplexVariable& x, const int y);
    ComplexVariable& operator+(ComplexVariable& x, ComplexVariable& y);
    
    ComplexVariable& operator*(const int y, ComplexVariable& x);
    ComplexVariable& operator*(ComplexVariable& x, const int y);
    ComplexVariable& operator*(ComplexVariable& x, ComplexVariable& y);
    
    const ComplexVariable& operator/(const ComplexVariable& x, const int y);
    const ComplexVariable& operator/(const int y, const ComplexVariable& x);
    const ComplexVariable& operator/(const ComplexVariable& x, ComplexVariable& y);
    
    const ComplexVariable& operator-(ComplexVariable& x, const int y);
    const ComplexVariable& operator-(ComplexVariable& x, ComplexVariable& y);
    const ComplexVariable& operator-(const int y, ComplexVariable& x);
    
    const ComplexVariable& operator^(ComplexVariable& x, const int y);
    
    ComplexVariable& operator==(ComplexVariable& x, const int y); 
    const ComplexVariable& operator==(RealVariable& x, const ComplexVariable& y);
    ComplexVariable& operator==(const int y, ComplexVariable& x);

    bool isZero (double num);

   

    
} 
