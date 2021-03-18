#include <iostream>
#include <fstream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {

    std::ofstream file;
    string filename;

    cin >> filename;

    filename = filename + ".txt";

    file.open(filename, std::ios::app);

    if (file.is_open()) {
        cout << "Success!" << endl;
    }

    else {
        cout << "Unable to open the file." << endl;
    }

    vector<string> names = {"Dude", "Guy", "Hi"};

    for (string name : names) {
        file << name << '\n';
    }

    file << "test";

    file.close();

    return 0;
}