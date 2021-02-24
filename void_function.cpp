#include <iostream>

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

void print_pow(double base, int exponent) {

    double result = power(base, exponent);

    cout << base << " to the power of " << exponent << " is " << result << "." << std::flush;
}

int main() {

    double input_base;
    int input_exponent;

    cout << "Base: " << std::flush;
    std::cin >> input_base;

    cout << "Exponent: " << std::flush;
    std::cin >> input_exponent;

    print_pow(input_base, input_exponent);

    return 0;
}