#include <iostream>
using namespace std;

int main() {
    
    cout << "Number" << "\t" << "Factorial" << endl;
    cout << "---------------------" << endl;

    for (int i=1; i <= 5; i++) {
        int factorial = 1;
        
        for (int j=1; j <= i; j++) {
            factorial *= j;
        }

        cout << i << "\t" << factorial << endl;
        factorial = 1;
    }

    return 0;
}