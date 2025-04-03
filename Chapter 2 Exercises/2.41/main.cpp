#include <iostream>
using namespace std;

int main() {
    int value, sum = 0, count = 0;

    cout << "Enter integers to calculate the average (enter 9999 to end): ";
    cin >> value;

    while (value != 9999) {
        sum += value;
        cin >> value;
        count++;
    }

    if (count == 0) {
        cout << "No values were entered. Unable to calculate an average." << endl;
    }
    else {
        double average = static_cast<double>(sum) / count;
        cout.precision(2);
        cout << "The average of the entered values is: " << average << endl;
    }

    return 0;
}