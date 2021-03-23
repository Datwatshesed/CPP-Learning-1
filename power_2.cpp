#include <iostream>

using std::cout;
using std::endl;

double pow(double base, int pow = 2) {

    int total = 1;

    for (int i = 0; i < pow; i++) {
        total *= base;
    }

    return total;
}

int main() {

    cout << pow(4, 12) << endl;
    return 0;
}