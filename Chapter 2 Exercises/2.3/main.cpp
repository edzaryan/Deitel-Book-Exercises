#include <iostream>
using namespace std;

int main() {
    
    int x = 5, y = 10, z;
    int count = 12;
    int total = 100;
    int q = 17, divisor = 5;

    // a) Assign the sum of x and y to z, then increment x
    z = x + y;
    x++;

    // b) If count is greater than 10, print a message
    if (count > 10)
        cout << "Count is greater than 10." << endl;

    // c) Decrement x by 1, then subtract from total
    x--;
    total = total - x;

    // d) Calculate remainder after q / divisor and assign it to q (two ways)
    q = q % divisor;
    // OR
    q %= divisor;

    return 0;
}
