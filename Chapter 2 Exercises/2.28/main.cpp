#include <iostream>
using namespace std;

int main() {
    
    int size;

    while (true) {
        cout << "Enter the size (1-20): ";
        cin >> size;

        if (size > 1 || size < 20) break;

        cout << "Invalid input. Please enter a size between 1 and 20." << endl;
    }

    for (int row = 1; row <= size; ++row) {
        for (int col = 1; col <= size; ++col) {
            if (row == 1 || row == size || col == 1 || col == size)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
