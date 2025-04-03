#include <iostream>
using namespace std;

int main() {
    
    int sum = 0, i = 1;

    while (i <= 10) {
        sum += i; 
        i++;
    }

    cout << "The sum of integers from 1 to 10 is: " << sum << endl;

    return 0;
}
