#include <iostream>
using namespace std;

int main() {
    const int count = 5;
    int number;

    for (int i = 1; i <= count; ++i) {
        cout << "Enter number " << i << " (1-30): ";
        cin >> number;

        // Validate range
        if (number < 1 || number > 30) {
            cout << "Invalid input. Please enter a number between 1 and 30." << endl;
            --i;
            continue;
        }

        // Print asterisks
        for (int j = 0; j < number; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
