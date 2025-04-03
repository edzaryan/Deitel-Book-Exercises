#include <iostream>
using namespace std;

int main() {

    int x, y; 
    
    cout << "Enter value for x: "; 
    cin >> x;
    
    cout << "Enter value for y: ";
    cin >> y;

    int i = 1;
    int power = 1;

    while (i <= y) {
        power *= x;
        i++;
    }

    cout << "Power: " << power << endl;

    return 0;
}
