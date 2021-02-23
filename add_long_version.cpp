#include <iostream>

using std::cout;

int main() {

    // std::cout << "Enter two numbers: " << std::endl;
    std::cout << "Enter two numbers:";
    std::cout << std::endl; //flushes the buffer to ensure output is written to the output stream

    int v1 = 0, v2 = 0;

    std::cin >> v1 >> v2;

    cout << "The sum of ";
    cout << v1;
    cout << " and ";
    cout << v2;
    cout << " is ";
    cout << v1 + v2;
    cout << std::endl;

    return 0;
}