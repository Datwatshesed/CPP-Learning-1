#include <iostream>
#include <string>

using std::string;

int main() {

    string greeting = "What the hell?";

    std::cout << greeting.find("hell") << std::endl;

    greeting.replace(greeting.find("hell"), 4, "****");
    std::cout << greeting << std::endl;

    string hat = greeting.substr(1, 3);
    std::cout << "Using the method itself: " << greeting.substr(1, 3) << std::endl;
    std::cout << "Using the variable generated from the method: " << hat << std::endl;

    // Let's test find_first_of() case sensitivity
    std::cout << greeting.find_first_of("ABCDE") << std::endl;
    std::cout << greeting.find_first_of("abcde") << std::endl;

    return 0;
}