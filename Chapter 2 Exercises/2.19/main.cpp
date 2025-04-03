#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double hours, rate;

    cout << fixed << setprecision(2);

    while (true) {
        cout << "Enter hours worked (-1 to end) : ";
        cin >> hours;

        if (hours == -1)
            break;

        cout << "Enter hourly rate of the worker ($00.00): ";
        cin >> rate;

        double salary;
        if (hours <= 40) {
            salary = hours * rate;
        } else {
            salary = 40 * rate + (hours - 40) * rate * 1.5;
        }

        cout << "Salary is $" << salary << endl;
    }

    return 0;
}
