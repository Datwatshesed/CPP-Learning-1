#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <vector>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

void print_all_guesses(vector<int> guesses) {
    
    for (int z = 0; z < guesses.size(); z++) {

        cout << "Guess " << z + 1 << ": " << guesses[z] << endl;
    }
}

void compare_scores(int current_score) {

    std::ofstream write_file;
    std::ifstream read_file;
    string filename = "scores.txt";
    int high_score; 

    read_file.open(filename);

    if (read_file) {
        cout << "\nscores.txt opened successfully." << endl;
    }

    else {
        write_file.open(filename);

        if (!write_file) {
            cout << "Error opening scores.txt.\nExiting game now. Sorry." << endl;
            exit;
        }

        write_file.close();

        read_file.open(filename);
    }

    cout << "\nYour Score: " << current_score << endl;
    read_file >> high_score;

    if (high_score > current_score || high_score == 0) {
        if (high_score != 0) {
            cout << "You Have The New High Score!" << '\n';
            cout << "\nPrevious High Score: " << high_score << endl;
        }
        
        high_score = current_score;
        read_file.close();

        write_file.open(filename);

        if (!write_file) {
            cout << "Error opening scores.txt.\nExiting game now. Sorry." << endl;
            exit;
        }

        write_file << high_score << '\n'; 
        write_file.close();
    }

    else if (high_score == current_score) {
        cout << "You have the same score as the high score" << endl;
        read_file.close();
    }

    else {
        cout << "High Score: " << high_score << endl;
        read_file.close();
    }
}

void play_game() {

    const int SIZE = 1000;
    
    vector<int> guesses;
    int random = rand() % 1001;
    int guess = 0;
    int score = 0;
    // cout << "random num: " << random << endl;

    cout << "\nGuess a number between 1 and 1000: " << std::flush;

    while (true) {

        cin >> guess;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        guesses.push_back(guess);

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

        if (guesses.size() == SIZE - 1) {
            cout << "\nYou failed to guess a number after" << SIZE << "tries! How is that possible?";
            break;
        }
    }

    cout << "Your guesses:" << endl;

    print_all_guesses(guesses);

    compare_scores(guesses.size());
}

int main() {

    int choice;

    srand(time(NULL));

    do {
        cout << "\n0. Quit" << endl;
        cout << "1. Play" << endl;

        cout << "\nChoice: " << std::flush;
        cin >> choice;

        switch(choice) {
            case 0:
                cout << "\nGoodbye." << endl;
                return 0;
            
            case 1:
                cout << "\nLet's play!" << endl;
                play_game();
                break;

            default:
                cout << endl;
        }

    } while(choice != 0);

    return 0;
}