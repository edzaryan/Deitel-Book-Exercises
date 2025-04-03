#include <iostream>
using namespace std;

int main() {
    int counter = 1;
    int number;
    int largest = 0;

    while (counter <= 10) {
        cout << "Enter number " << counter << ": ";
        cin >> number;

        if (number < 0) {
            cout << "Invalid input. Please enter a non-negative value." << endl;
            continue; // Skip to the next iteration if the input is invalid
        }

        if (number > largest) largest = number;

        counter++;
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}
