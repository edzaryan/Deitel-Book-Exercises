#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    double principal = 24.0;
    int years = 376;

    cout << fixed << setprecision(2);

    for (int rate = 5; rate <= 10; rate++) {
        double amount = principal;

        for (int i = 0; i < years; i++) {
            amount *= (1 + rate / 100.0);
        }
        cout << "Rate " << rate << "%: $" << amount << endl;
    }

    return 0;
}
