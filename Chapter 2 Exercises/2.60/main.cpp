#include <iostream>
using namespace std;

int main() {
    
    // for (int x = 1; x <= 10; x++) {
    //     if (x == 5)
    //         break;
    //     cout << x << " ";
    // }

    int x = 1;
    while (x <= 10 && x != 5) {
        cout << x << " ";
        x++;
    }

    // for (int x = 1; x <= 10; x++) {
    //     if (x == 5)
    //         continue;
    
    //     cout << x << " ";
    //     cout << "Still inside the loop" << endl;
    // }

    // for (int x = 1; x <= 10; x++) {
    //     if (x != 5) {
    //         cout << x << " ";
    //         cout << "Still inside the loop" << endl;
    //     }
    // }

    return 0;
}
