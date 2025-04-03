#include <iostream>
using namespace std;

int main() {

    int n, value, sum = 0;

    cout << "Enter the number of values to sum: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input! Please enter a positive integer for the number of values." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> value;
        sum += value;
    }

    cout << "The sum of the values is: " << sum << endl;

    return 0;
}