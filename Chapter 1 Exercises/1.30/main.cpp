#include <iostream>
using namespace std;

int main() {

    int a, b, c, d, e;

    cout << "Enter five numbers: ";
    cin >> a >> b >> c >> d >> e;

    int largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    if (d > largest) largest = d;
    if (e > largest) largest = e;

    cout << "The largest number is: " << largest << endl;

    int lowest = a;
    if (b < lowest) lowest = b;
    if (c < lowest) lowest = c;
    if (d < lowest) lowest = d;
    if (e < lowest) lowest = e;
    
    cout << "The lowest number is: " << lowest << endl;
    
    return 0;
}