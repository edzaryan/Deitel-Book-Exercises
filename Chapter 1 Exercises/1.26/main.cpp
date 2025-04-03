#include <iostream>
using namespace std;

int main() {

    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "Sum: " << a + b + c << endl;
    cout << "Average: " << (a + b + c) / 3.0 << endl;
    cout << "Product: " << a * b * c << endl;

    // Get the largest number
    // Option 1
    cout << "Largest: " << max(a, max(b, c)) << endl;

    // Option 2
    cout << "Largest: " << (a > b ? (a > c ? a : c) : (b > c ? b : c)) << endl;

    // Option 3
    cout << "Largest: " << (a > b && a > c ? a : (b > c ? b : c)) << endl;

    // Option 4
    int largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    cout << "Largest: " << largest << endl;
    
    // Get the smallest number
    // Option 1
    cout << "Smallest: " << min(a, min(b, c)) << endl;

    // Option 2
    cout << "Smallest: " << (a < b ? (a < c ? a : c) : (b < c ? b : c)) << endl;

    // Option 3
    cout << "Smallest: " << (a < b && a < c ? a : (b < c ? b : c)) << endl;

    // Option 4
    int smallest = a;
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;
    cout << "Smallest: " << smallest << endl;

    return 0;
}