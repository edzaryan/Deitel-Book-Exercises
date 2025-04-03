#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int accountNumber;
    double beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;

    cout << fixed << setprecision(2);

    cout << "Enter account number (-1 to end): ";
    cin >> accountNumber;

    while (accountNumber != -1) {
        cout << "Enter beginning balance: ";
        cin >> beginningBalance;

        cout << "Enter total charges: ";
        cin >> totalCharges;

        cout << "Enter total credits: ";
        cin >> totalCredits;

        cout << "Enter credit limit: ";
        cin >> creditLimit;

        newBalance = beginningBalance + totalCharges - totalCredits;

        if (newBalance > creditLimit) {
            cout << "\nAccount: " << accountNumber << endl;
            cout << "Credit limit: " << creditLimit << endl;
            cout << "Balance: " << newBalance << endl;
            cout << "Credit Limit Exceeded.\n";
        }

        cout << "\nEnter account number (-1 to end): ";
        cin >> accountNumber;
    }

    return 0;
}
