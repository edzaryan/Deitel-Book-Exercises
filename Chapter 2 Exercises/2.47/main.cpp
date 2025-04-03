#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int size = 10;

    // cout << endl;
    
    // for (int i=1; i <= size; i++) {
    //     for (int j=0; j < i; j++)
    //         cout << "* ";

    //     cout << endl;
    // }

    // cout << endl;

    // for (int i=1; i <= size; i++) {
    //     for (int j=0; j <= size-i; j++)
    //         cout << "* ";

    //     cout << endl;
    // }

    // cout << endl;

    // for (int i=1; i <= size; i++) {
    //     for (int j=0; j < size-i; j++)
    //         cout << "  ";

    //     for (int j=0; j < i; j++)
    //         cout << "* ";

    //     cout << endl;
    // }

    // cout << endl;

    // for (int i=1; i <= size; i++) {
    //     for (int j=1; j < i; j++)
    //         cout << "  ";

    //     for (int j=0; j <= size-i; j++)
    //         cout << "* ";

    //     cout << endl;
    // }

    // cout << endl;

    for (int i = 1; i <= size; ++i) {
        for (int j = 1; j <= i; ++j)
            cout << "* ";
        for (int j = i + 1; j <= size; ++j)
            cout << "  ";

        cout << "    ";

        for (int j = i; j <= size; ++j)
            cout << "* ";
        for (int j = 1; j < i; ++j)
            cout << "  ";

        cout << "    ";

        for (int j = 1; j <= size - i; ++j)
            cout << "  ";
        for (int j = 1; j <= i; ++j)
            cout << "* ";

        cout << "    ";

        for (int j = 1; j < i; ++j)
            cout << "  ";
        for (int j = i; j <= size; ++j)
            cout << "* ";

        cout << endl;
    }
    

    return 0;
}