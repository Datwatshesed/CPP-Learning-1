#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main() {

    string greeting = "hello";

    cout << greeting[0] << endl;
    cout << greeting + ", this phrase is concatenated with a + sign." << endl;
    cout << greeting << ", this phrase is concatenated normally, with <<." << endl;

    return 0;
}