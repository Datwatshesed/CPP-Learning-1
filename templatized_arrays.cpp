#include <iostream>
#include <array>

using std::array;
using std::endl;
using std::cin;
using std::cout;

void print_array(array<int, 20> data) {

    for (int i = 0; i < data.size(); i++) {
        cout << data[i] << '\n';
    }

    cout << endl;
}

int main() {

    array<int, 20> data = {1, 2, 3};
    return 0;
}