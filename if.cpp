#include <iostream>

int main() {

    int age = -1;

    std::cout << "What is your age? " << std::flush;
    std::cin >> age;

    if (age < 13) {
        std::cout << "You're not old enough" << std::endl;
        return -1;
    }

    else if (age < 19) {
        std::cout << "You are old enough" << std::endl;
        return -1;
    }

    else {
        std::cout << "You are too old" << std::endl;
        return -1;
    }

    return 0;
}