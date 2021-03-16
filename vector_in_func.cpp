#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

void print_vector_pass_by_value(vector<int> print_this) {

    print_this.push_back(15);

    for (int i = 0; i < print_this.size(); i++) {
        cout << print_this[i] << endl;
    }
}

void print_vector_pass_by_reference(vector<int> &print_this) {

    print_this.push_back(15);

    for (int i = 0; i < print_this.size(); i++) {
        cout << print_this[i] << endl;
    }
}

int main() {

    vector<int> data = {1, 2, 3};

    // Below functions will not append to data consecutively. Only once, since the vector is passed by value
    print_vector_pass_by_value(data);
    print_vector_pass_by_value(data);
    print_vector_pass_by_value(data);

    // Below functions WILL append to data consecutively since you pass the reference, not the value
    print_vector_pass_by_reference(data);
    print_vector_pass_by_reference(data);
    print_vector_pass_by_reference(data);

    return 0;
}