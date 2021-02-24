#include <iostream>
#include <cmath>

using std::cout;

double power(double base, int exponent) {
// Yes I know this exists, but I'm recreating it for the sake of learning functions in C++
// Also, this can't calculate decimal exponents, cuz idk how to do that

    double result = 1;

    for(int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {

    int input_base;
    int input_exponent;
    double result;

    cout << "Base: " << std::flush;
    std::cin >> input_base;

    cout << "Exponent: " << std::flush;
    std::cin >> input_exponent;

    result = power(input_base, input_exponent);

    cout << "The result is " << result;

    return 0;
}