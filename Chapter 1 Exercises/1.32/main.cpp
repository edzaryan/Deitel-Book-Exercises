#include <iostream>
using namespace std;

int main() {

    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (b != 0) {
        if (a % b == 0) 
            cout << a << " is divisible by " << b << endl;
        else
            cout << a << " is not divisible by " << b << endl;
    } else {
        cout << "Cannot divide by zero." << endl;
    }
    
    return 0;
}