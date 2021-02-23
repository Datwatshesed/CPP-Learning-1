#include <iostream>

int main() {

    int v1 = 0, v2 = 0, v3 = 0;

    std::cout << "Enter two numbers to be multiplied" << std::endl;

    std::cin >> v1;
    std::cin >> v2;

    v3 = v1 * v2;

    std::cout << "The product of " << v1 << " and " << v2 << " is " << v3;
}