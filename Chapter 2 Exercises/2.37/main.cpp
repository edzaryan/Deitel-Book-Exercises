#include <iostream>
using namespace std;

int main() {
    int number, digit1, digit2, digit3, digit4;

    // Input validation for four-digit number
    cout << "Enter a four-digit number to encrypt: ";
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "Invalid input. Please enter a four-digit number." << endl;
        return 1;
    }

    // Extract digits
    digit1 = number / 1000;
    digit2 = (number / 100) % 10;
    digit3 = (number / 10) % 10;
    digit4 = number % 10;

    // Swap digits
    swap(digit1, digit3);
    swap(digit2, digit4);

    //cout << digit1 << digit2 << digit3 << digit4 << endl;

    // Encrypt digits using the given formula
    digit1 = (digit1 + 7) % 10;
    digit2 = (digit2 + 7) % 10;
    digit3 = (digit3 + 7) % 10;
    digit4 = (digit4 + 7) % 10;


    // Combine digits to form the encrypted number
    number = 1000 * digit1 + 100 * digit2 + 10 * digit3 + digit4;

    cout << "Encrypted number: " << number << endl;

    // Extract digits again after encryption
    digit1 = number / 1000;
    digit2 = (number / 100) % 10;
    digit3 = (number / 10) % 10;
    digit4 = number % 10;

    // cout << "Encrypted digits: " << digit1 << " " << digit2 << " " << digit3 << " " << digit4 << endl;

    // Reverse the encryption formula
    digit1 = (digit1 + 3) % 10;
    digit2 = (digit2 + 3) % 10;
    digit3 = (digit3 + 3) % 10;
    digit4 = (digit4 + 3) % 10;

    // cout << "Decrypted digits before swapping back: " << digit1 << " " << digit2 << " " << digit3 << " " << digit4 << endl;

    // Swap digits back to their original positions
    swap(digit1, digit3);
    swap(digit2, digit4);

    // Combine to form the decrypted number
    number = 1000 * digit1 + 100 * digit2 + 10 * digit3 + digit4;

    cout << "Decrypted number: " << number << endl;


    return 0;
}