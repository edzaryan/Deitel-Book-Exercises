#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double gallons, miles;
    double totalGallons = 0, totalMiles = 0;

    cout << fixed << setprecision(6);

    cout << "Enter the gallons used (-1 to end): ";
    cin >> gallons;

    while (gallons != -1) {
        if (gallons <= 0) {
            cout << "Gallons must be greater than 0.\n";
        } else {
            cout << "Enter the miles driven: ";
            cin >> miles;

            if (miles <= 0) {
                cout << "Miles driven must be greater than 0.\n";
            } else {
                double mpg = miles / gallons;
                cout << "The miles/gallon for this tank was " << mpg << endl;

                totalGallons += gallons;
                totalMiles += miles;
            }
        }

        cout << "\nEnter the gallons used (-1 to end): ";
        cin >> gallons;
    }

    if (totalGallons > 0) {
        double overallMPG = totalMiles / totalGallons;
        cout << "The overall average miles/gallon was " << overallMPG << endl;
    } else {
        cout << "No data entered.\n";
    }

    return 0;
}

