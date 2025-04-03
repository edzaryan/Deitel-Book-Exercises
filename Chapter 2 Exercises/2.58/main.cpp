#include <iostream>
using namespace std;

int main() {
    int rows;

    // Input validation: only odd numbers from 1 to 19
    do {
        cout << "Enter an odd number between 1 and 19: ";
        cin >> rows;
    } while (rows < 1 || rows > 19 || rows % 2 == 0);

    int half = (rows + 1) / 2;

    // Top half of the diamond
    for (int i = 1; i <= half; i++) {
        for (int j = 1; j <= half - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }

    // Bottom half of the diamond
    for (int i = half - 1; i >= 1; i--) {
        for (int j = 1; j <= half - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
