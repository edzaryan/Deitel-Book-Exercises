#include <iostream>
using namespace std;

int main() {

    int gross_sales;
    
    while(true) {
        cout << "Enter the gross sales in dollars (or -1 to exit): ";
        cin >> gross_sales;

        if (gross_sales == -1) {
            break; // Exit the loop if the user enters -1
        }

        if (gross_sales < 0) {
            cout << "Invalid input. Please enter a non-negative value." << endl;
            continue; // Skip to the next iteration if the input is invalid
        }

        double commission_rate = 0.09; // 9% commission rate
        double commission = gross_sales * commission_rate;
        
        cout << "The commission is: $" << commission << endl;
    }

    return 0;
}
