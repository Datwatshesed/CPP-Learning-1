#include <iostream>
#include <string>

int main() {

    std::string greeting = "sup";
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string alphabet_2 = "abcdefghijklmnopqrstuvwxyz";
    std::string alphabet_3 = "abcdefghijklmnopqrstuvwxyz";
    std::string hello = "hello";

    std::cout << "Length of string: " << greeting.length() << std::endl;
    std::cout << "Before insert: " << alphabet << std::endl;
    std::cout << "After insert index 5: " << alphabet.insert(5, " hello hello, my name's Dibo ") << std::endl;
    std::cout << "Before erase: " << alphabet_2 << std::endl;
    std::cout << "After erase index 5 for 5 letters: " << alphabet_2.erase(5, 5) << std::endl;
    std::cout << "Before pop_back() called: " << hello << std::endl;

    hello.pop_back();

    std::cout << "After pop_back() called: " << hello << std::endl;
    std::cout << "Before replacing index 5 to 10: " << alphabet_3 << std::endl;
    std::cout << "After replacing index 5 to 10 with 'I see what's happening here': " << 
    alphabet_3.replace(5, 10, "I see what's happening here");

    return 0;
}