#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>

using std::cout;
using std::cin;
using std::endl;

void print_results(int guesses[], int guess_count, int SIZE) {
    
    for (int z = 0; z < guess_count / sizeof(int); z++) {

        cout << "Guess " << z + 1 << ": " << guesses[z] << endl;
    }
}

int play_game() {

    const int SIZE = 1000;
    
    int guesses[SIZE];
    int guess_count = 0;
    int random = rand() % 1001;
    int guess = 0;
    int score = 0;
    cout << "random num: " << random << endl;

    cout << "Guess a number: " << std::flush;

    while (true) {

        cin >> guess;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        guesses[guess_count++] = guess;

        if (guess == random) {
            cout << "\nYou guessed the right number!" << endl << endl;
            score += 10;
            break;
        }

        else if (guess < random) {
            cout << "\nThe number was too low." << endl << "Try again: " << std::flush;
        }

        else if (guess > random) {
            cout << "\nThe number was too high." << endl << "Try again: " << std::flush;
        }

        if (guess_count == SIZE - 1) {
            cout << "\nYou failed to guess a number after" << SIZE << "tries! How is that possible?";
            break;
        }
    }

    cout << "Your guesses:" << endl;

    print_results(guesses, guess_count, SIZE);

    for (int z = 0; z < sizeof(guesses) / sizeof(int); z++) {

        if (guesses[z] == 0 or guesses[z] > 1000) {
            break;
        }

        cout << "Guess " << z + 1 << ": " << guesses[z] << endl;
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