#include <iostream>
using namespace std;

int main() {
    
    // a
    cout << (((!true && !true) == !(true || true)) ? "True" : "False") << endl;
    cout << (((!false && !true) == !(false || true)) ? "True" : "False") << endl;
    cout << (((!true && !false) == !(true || false)) ? "True" : "False") << endl;
    cout << (((!false && !false) == !(false || false)) ? "True" : "False") << endl;

    // b
    cout << ((!(true || true) == (!true && !true)) ? "True" : "False") << endl;
    cout << ((!(false || true) == (!false && !true)) ? "True" : "False") << endl;
    cout << ((!(true || false) == (!true && !false)) ? "True" : "False") << endl;
    cout << ((!(false || false) == (!false && !false)) ? "True" : "False") << endl;



    return 0;
}
