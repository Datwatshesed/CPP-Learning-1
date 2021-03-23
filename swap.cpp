#include <iostream>

using std::cout;
using std::endl;

void swap(int &a, int &b) {

    int temp = a;
    a = b;
    b = temp;

    cout << "a: " << a << " " << "b: " << b << endl;
}

int main() {

    int a = 10;
    int b = 20;

    swap(a, b);

    cout << "a: " << a << " " << "b: " << b << endl; 

    return 0;
}