#include <iostream>
using namespace std;

int main() {

    int n, value, smallest;

    cout << "Enter the number of values to compare: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input! Please enter a positive number of values." << endl;
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        cout << "Enter value " << i << ": ";
        cin >> value;

        if (i == 1 || value < smallest)
            smallest = value;
    }

    cout << "The smallest value is: " << smallest << endl;

    return 0;
}
