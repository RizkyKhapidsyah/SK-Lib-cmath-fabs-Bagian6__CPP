#include <iostream>
#include <cmath>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    std::cout << "abs(+3.0) = " << std::abs(+3.0) << '\n' << "abs(-3.0) = " << std::abs(-3.0) << '\n';

    // special values
    std::cout << "abs(-0.0) = " << std::abs(-0.0) << '\n'
        << "abs(-Inf) = " << std::abs(-INFINITY) << '\n'
        << "abs(-NaN) = " << std::abs(-NAN) << '\n';

    _getch();
    return 0;
}