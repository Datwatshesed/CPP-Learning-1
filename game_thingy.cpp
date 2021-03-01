#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int play_game() {

    int random = rand() % 1001;
    int guess = 0;
    int score = 0;
    // cout << "random: " << random << endl;

    cout << "Guess a number: " << std::flush;

    while(true) {

        cin >> guess;

        if (guess == random) {
            cout << "\nYou guessed the right number!" << endl << endl;
            score = 10;
            break;
        }

        else if (guess < random) {
            cout << "\nThe number was too low." << endl << "Try again: " << std::flush;
        }

        else if (guess > random) {
            cout << "\nThe number was too high." << endl << "Try again: " << std::flush;
        }
    }

    return score;
}

int main() {

    int choice;
    int score = 0;

    srand(time(NULL));

    do {
        cout << "score: " << score << endl << endl;
        cout << "0. Quit" << endl;
        cout << "1. Play" << endl;

        cout << "Choice: " << std::flush;
        cin >> choice;

        switch(choice) {
            case 0:
                cout << "Goodbye." << endl;
                return 0;
            
            case 1:
                cout << "Let's play!" << endl;
                score += play_game();
                break;

            default:
                cout << endl;
        }

    } while(choice != 0);

    return 0;
}