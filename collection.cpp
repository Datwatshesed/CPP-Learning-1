#include <iostream>

using std::cout;
using std::endl;

int main() {

    int guesses[] = {12, 43, 23, 43, 23};
    int size = sizeof(guesses) / sizeof(int);

    cout << size << " " << sizeof(guesses) << endl;

    return 0;
}