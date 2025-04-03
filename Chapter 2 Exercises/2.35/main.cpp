#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter three non-zero side lengths: ";
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Side lengths must be non-zero and positive." << endl;
    } else if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "These sides can form a triangle." << endl;
    } else {
        cout << "These sides cannot form a triangle." << endl;
    }

    return 0;
}