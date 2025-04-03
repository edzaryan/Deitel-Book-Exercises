#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int productNumber, quantity;
    double total = 0.0;
    double price;

    cout << setprecision(2);

    cout << "\nEnter product number (1-5) and quantity sold (0 to stop):" << endl;
    cout << "-------------------------------" << endl;

    while (true) {
        cout << "Product number (1-5, or 0 to finish): ";
        cin >> productNumber;

        if (productNumber == 0) break;

        cout << "Quantity sold: ";
        cin >> quantity;

        switch (productNumber) {
            case 1:
                price = 2.98;
                break;
            case 2:
                price = 4.50;
                break;
            case 3:
                price = 9.98;
                break;
            case 4:
                price = 4.49;
                break;
            case 5:
                price = 6.87;
                break;
            default:
                cout << "Invalid product number!" << endl;
                continue;
        }

        total += price * quantity;
    }

    cout << "\nTotal retail value of products sold: $" << total << endl << endl;

    return 0;
}
