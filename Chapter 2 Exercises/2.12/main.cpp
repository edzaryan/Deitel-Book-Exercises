#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    cout << endl;

    // 2.12 task a 
    // ========================================================================

    int sum = 0;
    int count = 99;
    
    // Option 1
    // for (int i=1; i <= count; i++) 
    //     if (i % 2 == 1) 
    //         sum += i;
    

    // Option 2
    // for (int i=1; i <= count; i+=2) 
    //     sum += i;

    int index = 1;
    while(index <= count) {
        sum += index;
        index += 2;
    }
    

    cout << "The sum of all odd numbers from 1 to " 
         << count << " is " << sum 
         << endl << endl;


    // 2.12 task b
    // ========================================================================

    double num = 333.546372;

    cout << fixed << left
         << setw(15) << setprecision(1) << num
         << setw(15) << setprecision(2) << num
         << setw(15) << setprecision(3) << num
         << endl << endl;

    // 2.12 task c
    // ========================================================================

    double result = pow(2.5, 3);
    cout << fixed << left
         << setw(10) << setprecision(2) << result
         << endl << endl;

    // 2.12 task d
    // ========================================================================

    int x = 1;

    while (x <= 20) {
        cout << x;

        (x % 5 == 0) ? cout << endl : cout << '\t';

        ++x;
    }

    cout << endl << endl;

    // 2.12 task e
    // ========================================================================

    x = 1;

    for (; x <= 20; ++x) {
        cout << x;

        (x % 5 == 0) ? cout << endl : cout << '\t';
    }

    cout << endl;

    return 0;
}
