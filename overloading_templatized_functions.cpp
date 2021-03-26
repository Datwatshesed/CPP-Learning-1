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

    template <typename T>
    void swap (T a[], T b[], int size) {

        for (int i = 0; i < size; i++) {
            T temp = a[i];
            a[i] = b[i];
            b[i] = temp;
        }
    }
}

int main() {

    int a = 20;
    int b = 10;

    thingy::swap(a, b);
    cout << "a: " << a << "\n" << "b: " << b << endl;

    int nines[] = {9, 9, 9, 9, 9, 9};
    int ones[] = {1, 1, 1, 1, 1, 1};

    for(int i = 0; i < 6; i++) {
        cout << nines[i] << " " << ones[i] << endl;
    }
    
    thingy::swap(nines, ones, 6);

    for(int i = 0; i < 6; i++) {
        cout << nines[i] << " " << ones[i] << endl;
    }

    return 0;
}