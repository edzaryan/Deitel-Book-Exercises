#include <iostream>
using namespace std;

int main() 
{
    int number;

    cout << "Enter 5 digit number: ";
    cin >> number;

    if (number < 10000 || number > 99999) {
        cout << "Invalid input. Please enter a 5 digit number." << endl;
        return 1;
    }

    int digit1 = number / 10000;
    int digit2 = (number / 1000) % 10;
    int digit3 = (number / 100) % 10;
    int digit4 = (number / 10) % 10;
    int digit5 = number % 10;

    cout << digit1 << "   " << digit2 << "   " << digit3 << "   " << digit4 << "   " << digit5 << endl;
   
    return 0;
}