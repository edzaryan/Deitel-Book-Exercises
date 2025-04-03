#include <iostream>
using namespace std;

int main() {

    int a, b;

    cout << "Enter two numbers: " << endl;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    if (a > b) 
        cout << "a" << " is larger";
    else if (a < b)
        cout << "b" << " is larger";
    else
        cout << "These numbers are equal";
        

    return 0;
}