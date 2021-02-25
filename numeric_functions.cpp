#include <iostream>
#include <cmath>

int main() {

    std::cout << "Square root of 25: " << sqrt(25) << std::endl;
    std::cout << "Remainder of 10/3: " << remainder(10, 3) << std::endl;
    std::cout << "Remainder of 10/3.3: " << remainder(10, 3.3) << std::endl; 
    std::cout << "Maximum of 10 and 20: " << fmax(10, 20) << std::endl;
    std::cout << "Minimum of 10 and 20: " << fmin(10, 20) << std::endl;
    std::cout << "Ceiling of 2.01: " << ceil(2.1) << std::endl;
    std::cout << "Floor of 2.99: " << floor(2.99) << std::endl;
    std::cout << "Ceiling of -2.01: " << ceil(-2.1) << std::endl;
    std::cout << "Floor of -2.99: " << floor(-2.99) << std::endl;
    std::cout << "Truncation of 2.5: " << trunc(2.5) << std::endl;
    std::cout << "Truncation of -2.5: " << trunc(-2.5) << std::endl;
    std::cout << "Round 2.5: " << round(2.5) << std::endl;
    std::cout << "Round -2.5: " << round(-2.5) << std::endl;
    std::cout << "Round 2.49: " << round(2.49) << std::endl;
    std::cout << "Round -2.49: " << round(-2.49) << std::endl;

    return 0;
}