#include <iostream>
using namespace std;

int main() {

    int a;

    cout << "Enter a number: ";
    cin >> a;

    // Option 1: Using if-else statement
    if (a % 2 == 0) {
        cout << a << " is even." << endl;
    } else {
        cout << a << " is odd." << endl;
    }

    // Option 2: Using ternary operator
    cout << a << " is " << (a % 2 == 0 ? "even." : "odd.") << endl;

    // Option 3: Using a switch statement (not applicable for even/odd check)
    switch (a % 2) {
        case 0:
            cout << a << " is even." << endl;
            break;
        case 1:
            cout << a << " is odd." << endl;
            break;
    }
    
    return 0;
}