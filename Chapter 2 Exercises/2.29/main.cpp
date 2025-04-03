#include <iostream>
using namespace std;

int main() {
    
    int number;

    // cout << "Enter a five digit number: ";
    // cin >> number;

    // if (number < 10000 || number > 99999) {
    //     cout << "Error: The number is not five digits." << endl;
    //     return 1;
    // }

    while (true) {
        cout << "Please enter a five digit number: ";
        cin >> number;

        if (number >= 10000 && number <= 99999) {
            break;
        } else {
            cout << "Error: The number is not five digits." << endl;
        }
    }
    

    int digit1 = number / 10000;
    int digit2 = (number / 1000) % 10;
    int digit3 = (number / 100) % 10;
    int digit4 = (number / 10) % 10;
    int digit5 = number % 10;

    if (digit1 == digit5 && digit2 == digit4) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }


    return 0;
}
