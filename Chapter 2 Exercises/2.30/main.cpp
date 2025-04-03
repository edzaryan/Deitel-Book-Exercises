#include <iostream>
using namespace std;

int main() {
    int binary, decimal = 0, base = 1, digit;

    cout << "Enter a binary number (only 0s and 1s): ";
    cin >> binary;

    while (binary > 0) {
        digit = binary % 10;        
        decimal += digit * base;  
        binary /= 10;
        base *= 2;
    }

    cout << "Decimal equivalent: " << decimal << endl;

    return 0;
}
