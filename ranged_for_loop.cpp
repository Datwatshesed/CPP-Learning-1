#include <iostream>
#include <vector>
#include <array>

using std::vector;
using std::cout;
using std::endl;

int main() {

    int data[] = {1, 2, 3, 4, 9, 7};
    
    for (int n : data) {
        cout << n << '\n';
    }

    cout << endl;

    return 0;
}