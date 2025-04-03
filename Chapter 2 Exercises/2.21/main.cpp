#include <iostream>
using namespace std;

int main() {
    
    cout << endl;
    cout << "N\t10*N\t100*N\t1000*N" << endl;
    cout << "--------------------------------" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << i << "\t" << 10 * i << "\t" << 100 * i << "\t" << 1000 * i << endl;
    }

    cout << endl;
    
    return 0;
}
