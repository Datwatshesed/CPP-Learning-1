#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {

    int age;

    cout << "What is your age? " << std::flush;
    cin >> age;

    cout << "\nBelow I'm gonna show you a fall-through example." << endl;

    switch(age) {
        case 13:
            cout << "You are 13 years old." << endl;

        case 14:
            cout << "You are 14 years old." << endl;

        case 15:
            cout << "You are 15 years old." << endl;

        default:
            cout << "You are not 13, 14, or 15 years old." << endl;
    }

    cout << "\nBelow I'm gonna show you a normal way to do this." << endl;

        switch(age) {
        case 13:
            cout << "You are 13 years old." << endl;
            break;

        case 14:
            cout << "You are 14 years old." << endl;
            break;

        case 15:
            cout << "You are 15 years old." << endl;
            break;

        default:
            cout << "You are not 13, 14, or 15 years old." << endl;
            break;
    }

    return 0;
}