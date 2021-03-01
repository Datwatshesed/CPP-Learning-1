#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {

    string password = "hello";
    string guess;

    do {

        cout << "Guess the password: " << std::flush;
        cin >> guess;

    } while(guess != password);

    cout << "You guessed the password!" << endl;

    return 0;
}