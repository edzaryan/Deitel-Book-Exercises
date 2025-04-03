#include <iostream>
using namespace std;

int main() {
    
    // a
    // int number;
    // cout << "Enter a number: ";
    // cin >> number;

    // if (number < 0) {
    //     cout << "The number is negative" << endl;
    //     return 1;
    // }

    // int factorial = 1;
    // int i = 1;

    // while(i <= number) {
    //     factorial *= i;
    //     i++; 
    // }

    // cout << "The factorial of " << number << " is " << factorial << endl;

    // b
    // int number;
    // cout << "Enter a number: ";
    // cin >> number;

    // if (number < 0) {
    //     cout << "The number is negative" << endl;
    //     return 1;
    // }

    // double e = 1;
    // int factorial = 1;

    // for (int i = 1; i <= number; i++) {
    //     factorial *= i;
    //     e += 1.0 / factorial;
    // }

    // cout << "Approximation of e using " << number << " terms: " << e << endl;

    // c
    double x;
    int n;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the number of terms to use: ";
    cin >> n;

    double result = 1.0;
    double term = 1.0;

    for (int i = 1; i <= n; ++i) {
        term = term * x / i;
        result += term;
    }

    cout << "Approximation of e^" << x << " is: " << result << endl;

    return 0;
}