#include <iostream>
using namespace std;

int main() {

    int product = 1;

    for (int i=1; i <= 15; i+=2)
        product *= i;

    cout << "The product of the first 15 odd integers is: " << product << endl;

    return 0;
}
