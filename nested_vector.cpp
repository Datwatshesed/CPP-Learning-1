#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {

    vector<vector<int>> list = {{1, 2, 3, 4}, {5, 6, 7}, {8, 9, 10, 11, 12}, {13, 14}};

    for (vector<int> num_list : list) {
        for (int i : num_list) {
            cout << i << endl;
        }
    }
    return 0;
}