#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 5, d = 15, e = 25, f = 30, g = 35, h = 40, i = 45, j = 50;
    int largest, second_largest;

    if (a > b) {
        largest = a;
        second_largest = b;
    } else {
        largest = b;
        second_largest = a;
    }

    if (c > largest) {
        second_largest = largest;
        largest = c;
    } else if (c > second_largest) {
        second_largest = c;
    }

    if (d > largest) {
        second_largest = largest;
        largest = d;
    } else if (d > second_largest) {
        second_largest = d;
    }

    if (e > largest) {
        second_largest = largest;
        largest = e;
    } else if (e > second_largest) {
        second_largest = e;
    }

    if (f > largest) {
        second_largest = largest;
        largest = f;
    } else if (f > second_largest) {
        second_largest = f;
    }

    if (g > largest) {
        second_largest = largest;
        largest = g;
    } else if (g > second_largest) {
        second_largest = g;
    }

    if (h > largest) {
        second_largest = largest;
        largest = h;
    } else if (h > second_largest) {
        second_largest = h;
    }

    if (i > largest) {
        second_largest = largest;
        largest = i;
    } else if (i > second_largest) {
        second_largest = i;
    }

    if (j > largest) {
        second_largest = largest;
        largest = j;
    } else if (j > second_largest) {
        second_largest = j;
    }

    cout << "Largest: " << largest << endl;
    cout << "Second largest: " << second_largest << endl;

    return 0;
}
