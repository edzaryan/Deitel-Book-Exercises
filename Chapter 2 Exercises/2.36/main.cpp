#include <iostream>
using namespace std;

int main() {
    
    int a, b, c;

    cout << "Enter three non-zero side lengths: ";
    cin >> a >> b >> c;

    // Check for valid positive sides
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Side lengths must be positive and non-zero." << endl;
        return 1;
    }

    // Triangle inequality check
    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        cout << "These sides cannot form a triangle." << endl;
        return 1;
    }

    int hypotenuse, side1, side2;

    if (a >= b && a >= c) {
        hypotenuse = a;
        side1 = b;
        side2 = c;
    } else if (b >= a && b >= c) {
        hypotenuse = b;
        side1 = a;
        side2 = c;
    } else {
        hypotenuse = c;
        side1 = a;
        side2 = b;
    }

    if (hypotenuse * hypotenuse == (side1 * side1 + side2 * side2)) {
        cout << "These sides form a RIGHT triangle." << endl;
    } else {
        cout << "These sides form a triangle, but NOT a right triangle." << endl;
    }

    return 0;
}