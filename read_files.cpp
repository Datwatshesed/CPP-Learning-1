#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {

    std::ifstream file;
    string input;
    vector<string> names;
    
    file.open("executables/gay.txt");

    while (getline(file, input)) {
        names.push_back(input);
    }

    for (string name : names) {
        cout << name << '\n';
    }

    cout << endl;

    return 0;
}
