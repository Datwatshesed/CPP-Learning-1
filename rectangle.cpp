#include <iostream>

using std::cout;
using std::endl;

struct Rectangle {

    double length;
    double width;
};

double area(double length, double width) {

    return length * width;
}

double area (double length) {

    return length * length;
}

double area (Rectangle rectangle) {

    return rectangle.length * rectangle.width;
}

int main() {
    Rectangle rectangle;

    rectangle.length = 10;
    rectangle.width = 10;

    cout << area(rectangle.length, rectangle.width) << endl;
    cout << area(rectangle.length) << endl;
    cout << area(rectangle) << endl;

    return 0;
}