    
#include "doctest.h"
#include "solver.hpp"
using namespace solver;

TEST_CASE("RealVariable test case") {
    RealVariable x;
    
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    double xvalue = solve(2*x-4.0 == 10.0);   // xvalue == 7
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    CHECK( xvalue == 7 );


    //CHECK_THROWS( solve((x^2) == -16) ); // should throw error cause there is no real root
    
}

    // ComplexVariable y;
    // std::complex<double> yvalue = solve(2*y-4 == 10);
    // cout << yvalue << endl;  // 7+0i  (can be in any other format)

    // cout << solve((y^2) == 16) << endl;   // 4+0i or -4+0i
    // cout << solve((y^2) == -16) << endl;  // 0+4i or 0-4i
    // cout << solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y) << endl;   // 4+0i or -4+0i
    // cout << solve(y+5i == 2*y+3i) << endl;   // 0+2i