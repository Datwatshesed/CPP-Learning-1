#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {

    enum seasons {spring, summer, fall, winter};

    seasons now = summer;

    // Switch statements with enum variables below

    switch(now) {
        case spring:
            cout << "It's spring now!" << endl;
            break;

        case summer:
            cout << "It's summer now!" << endl;
            break;

        case fall:
            cout << "It's fall now!" << endl;
            break;

        case winter:
            cout << "It's winter now!" << endl;
            break;
    }

    //Switch statements with enum classes below. Cleaner

    enum class Season {spring, summer, fall, winter};

    Season future = Season::winter;

        switch(future) {
        case Season::spring:
            cout << "It's spring now!" << endl;
            break;

        case Season::summer:
            cout << "It's summer now!" << endl;
            break;

        case Season::fall:
            cout << "It's fall now!" << endl;
            break;

        case Season::winter:
            cout << "It's winter now!" << endl;
            break;
    }

    return 0;
}