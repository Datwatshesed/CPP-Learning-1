#include <iostream>
#include <limits>

using std::cout;
using std::endl;

void print_array(int array[], int size) {
    // cout << sizeof(array) << endl; Won't work because arrays don't know how big they are when passed to a function
    for (int i = 0; i < size; i++) {
        cout << array[i] << endl;
    }
}

int main() {

    const int SIZE = 100;
    int guesses[SIZE];

    int count = 0;

    for (int i = 0; i < SIZE; i++) {

        if(std::cin >> guesses[i]) {
            count++;
        }

        else {
            break;
        }
    }

    print_array(guesses, count);

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return 0;
}