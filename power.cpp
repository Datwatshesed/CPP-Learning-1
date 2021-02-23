#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main() {

    int base, exponent;
    double result;

    cout << "Enter a base: " << std::flush;
    cin >> base;

    cout << "Enter an exponent: " << std::flush;
    cin >> exponent;

    result = pow(base, exponent);

    cout << "The result is " << result;
}
