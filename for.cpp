#include <iostream>

using std::cout;
using std::endl;

int main() {

    int calc_factorial = 0;
    int factorial = 0;

    cout << "Let's calculate the factorial of a number: " << std::flush;
    std::cin >> calc_factorial;

    factorial = calc_factorial;

    for (int i = calc_factorial - 1; i > 0; i--) {
        factorial *= i;
    }

    cout << "The factorial of " << calc_factorial << " is " << factorial << "." << endl;

    return 0;
}