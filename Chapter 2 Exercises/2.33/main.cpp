#include <iostream>
using namespace std;

int main() {
    
    double radius, area, circumference, diameter;
    double PI = 3.14159;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    if (radius < 0) {
        cout << "Error: The radius cannot be negative." << endl;
        return 1;
    }

    diameter = 2 * radius;
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    cout << "Diameter: " << diameter << endl;
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;

    return 0;
}
