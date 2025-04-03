#include <iostream>
using namespace std;

int main() {
    int payCode;
    
    cout << "Payroll System\n";
    cout << "1 - Manager\n2 - Hourly Worker\n3 - Commission Worker\n4 - Pieceworker\n";
    cout << "Enter employee pay code (-1 to quit): ";
    cin >> payCode;

    while (payCode != -1) {
        double salary = 0.0;

        switch (payCode) {
            case 1: {
                // Manager
                double weeklySalary;
                cout << "Enter fixed weekly salary: $";
                cin >> weeklySalary;
                salary = weeklySalary;
                break;
            }

            case 2: {
                // Hourly worker
                double hours, hourlyRate;
                cout << "Enter hourly rate: $";
                cin >> hourlyRate;
                cout << "Enter total hours worked: ";
                cin >> hours;

                if (hours <= 40)
                    salary = hourlyRate * hours;
                else
                    salary = hourlyRate * 40 + (hours - 40) * hourlyRate * 1.5;
                break;
            }

            case 3: {
                // Commission worker
                double sales;
                cout << "Enter gross weekly sales: $";
                cin >> sales;
                salary = 250 + 0.057 * sales;
                break;
            }

            case 4: {
                // Pieceworker
                int pieces;
                double payPerPiece;
                cout << "Enter number of items produced: ";
                cin >> pieces;
                cout << "Enter pay per item: $";
                cin >> payPerPiece;
                salary = pieces * payPerPiece;
                break;
            }

            default:
                cout << "Invalid pay code.\n";
                break;
        }

        if (payCode >= 1 && payCode <= 4)
            cout << "Employee's weekly pay is: $" << salary << "\n";

        cout << "\nEnter next employee pay code (-1 to quit): ";
        cin >> payCode;
    }

    cout << "Payroll processing complete.\n";
    return 0;
}
