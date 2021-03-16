#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {

    vector<int> data = {1, 2, 3};
    data.push_back(4);

    cout << data[data.size() - 1] << endl;

    data.pop_back();

    cout << data[data.size() - 1] << endl;



    return 0;
}