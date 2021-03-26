#include <iostream>
#include <string>

using std::cout;
using std::endl;

namespace thingy {

    template <typename T>
    void swap(T &a, T &b) {

        T temp = a;
        a = b;
        b = temp;
    }
}

int main() {

    int a = 20;
    int b = 10;

    thingy::swap(a, b);
    cout << "a: " << a << "\n" << "b: " << b << endl;

    return 0;
}