#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double principal = 24.0;
    int years = 2025 - 1626;

    cout << fixed << setprecision(2);

    for (int rate = 5; rate <= 10; ++rate) {
        double amount = principal;

        for (int i = 0; i < years; ++i) {
            double yearlyGain = amount * rate / 100;  
            amount += yearlyGain;      
        }

        cout << "Rate " << rate << "%: $" << amount << endl;
    }

    return 0;
}
