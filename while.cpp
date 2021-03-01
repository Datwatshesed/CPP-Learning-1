#include <iostream>

using std::cout;
using std::endl;

int main() {

    int calc_factorial = 0;
    int factorial = 0;

    cout << "Calculate the factorial of: " << std::flush;
    std::cin >> calc_factorial;

    factorial = calc_factorial;
    int i = factorial - 1;

    while(i > 1) {
        factorial *= i;
        i--;
    }

    cout << "The factorial of " << calc_factorial << " is " << factorial << "." << endl;

    return 0;
}