#include <iostream>

using std::cout;
using std::endl;

int main() {

    int number = 50;
    int number_hex = 0x5b;
    int number_oct = 057;

    cout << "Original number: " << number << endl;
    cout << "Number converted to hex: " << std::hex << number << endl;
    cout << "Number converted to oct: " << std::oct << number << endl;

    cout << "\nOriginal hex number: " << std::hex << number_hex << endl;
    cout << "Hex number converted to decimal: " << std::dec << number_hex << endl;
    cout << "Hex number converted to octal: " << std::oct << number_hex << endl;

    cout << "\nOriginal oct number: " << std::oct << number_oct << endl;
    cout << "Oct number converted to decimal: " << std::dec <<number_oct << endl;
    cout << "Oct number converted to hex: " << std::hex << number_oct << endl;

    return 0;
}