#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double pi = 0.0;
    int terms = 0;
    int denominator = 1;
    int sign = 1;

    bool reached_314 = false;
    bool reached_3141 = false;
    bool reached_31415 = false;
    bool reached_314159 = false;

    cout << fixed << setprecision(6);
    cout << "Term\tApproximation of Pi\n";

    while (true) {
        pi += sign * (4.0 / denominator);
        terms++;
        sign *= -1;
        denominator += 2;

        cout << terms << "\t" << pi << endl;

        if (!reached_314 && floor(pi * 100) == 314) {
            cout << "\nReached 3.14 at term: " << terms << endl;
            reached_314 = true;
        }
        if (!reached_3141 && floor(pi * 1000) == 3141) {
            cout << "Reached 3.141 at term: " << terms << endl;
            reached_3141 = true;
        }
        if (!reached_31415 && floor(pi * 10000) == 31415) {
            cout << "Reached 3.1415 at term: " << terms << endl;
            reached_31415 = true;
        }
        if (!reached_314159 && floor(pi * 100000) == 314159) {
            cout << "Reached 3.14159 at term: " << terms << endl;
            break;
        }
    }

    return 0;
}
