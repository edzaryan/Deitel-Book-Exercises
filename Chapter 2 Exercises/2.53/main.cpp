#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

int main() {
    cout << endl;

    cout << left << setw(10) << "Decimal"
         << setw(20) << "Binary"
         << setw(10) << "Octal"
         << setw(10) << "Hex" << endl;

    cout << "-------------------------------------------------------------" << endl << endl;

    for (int i = 1; i <= 256; ++i) {
        cout << left << setw(10) << dec << i
             << setw(20) << bitset<8>(i)
             << setw(10) << oct << i
             << hex << uppercase << i << dec << endl;
    }

    cout << endl;

    return 0;
}
