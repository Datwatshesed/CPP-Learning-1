#include <iostream>
#include <string>

int main() {

    std::string greeting;

    getline(std::cin, greeting); // std::cin on its own can't get strings because it ends after whitespace
    std::cout << "What you typed: " << greeting << std::endl;

    return 0;
}