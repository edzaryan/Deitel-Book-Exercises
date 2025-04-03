#include <iostream>
using namespace std;

int main() {

    int radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Diameter: " << 2 * radius << endl;
    cout << "Circumference: " << 2 * 3.14 * radius << endl;
    cout << "Area: " << 3.14 * radius * radius << endl;

    return 0;
}