#include <iostream>
#include <complex>
#define EPS .0001
using namespace std;
namespace solver {

    bool isZero (double x);
    class RealVariable {
    public:
        double _coef = 1;
        double _power = 1;
       
        RealVariable& operator==(double x);

        RealVariable& operator==(RealVariable &x);

        RealVariable& operator+(double x);

        RealVariable& operator+(RealVariable &x);

        RealVariable& operator-(double x);

        RealVariable& operator-(RealVariable &x);

        RealVariable& operator*(double x);

        RealVariable& operator*(RealVariable &x);

        RealVariable& operator^(double x);

        RealVariable& operator/(double x);

        RealVariable& operator/(RealVariable &x);

    };

    RealVariable& operator==(double x, RealVariable &y);

    RealVariable& operator+(double x, RealVariable &y);

    RealVariable& operator-(double x, RealVariable &y);

    RealVariable& operator*(double x, RealVariable &y);

    RealVariable& operator/(double x, RealVariable &y);


    class ComplexVariable {
    public:
        std::complex<double> coff = 1;
        std::complex<double> power = 1;
        
        ComplexVariable& operator+(std::complex<double> x);

        ComplexVariable& operator==(std::complex<double> x);

        ComplexVariable& operator+(ComplexVariable &x);
        
        ComplexVariable& operator==(ComplexVariable &x);

        ComplexVariable& operator-(std::complex<double> x);

        ComplexVariable& operator-(ComplexVariable &x);

        ComplexVariable& operator*(std::complex<double> x);

        ComplexVariable& operator*(ComplexVariable &x);

        ComplexVariable& operator^(std::complex<double> x);

        ComplexVariable& operator^(ComplexVariable &x);

        ComplexVariable& operator/(std::complex<double> x);

        ComplexVariable& operator/(ComplexVariable &x);
    };
    
    ComplexVariable& operator==(std::complex<double> x, ComplexVariable &y);

    ComplexVariable& operator+(std::complex<double> x, ComplexVariable &y);

    ComplexVariable& operator-(std::complex<double> x, ComplexVariable &y);

    ComplexVariable& operator*(std::complex<double> x, ComplexVariable &y);

    ComplexVariable& operator/(std::complex<double> x, ComplexVariable &y);

    double solve(RealVariable& x);

    std::complex<double> solve(ComplexVariable& x);

};