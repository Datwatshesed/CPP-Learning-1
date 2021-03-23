#include <iostream>

using std::cout;
using std::endl;

int main() {

    int list[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int list_two[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int r = 0; r < 4; r++) {
        for (int c = 0; c < 3; c++) {
            cout << list[r][c] << endl;
        }
    }
    
    return 0;
}