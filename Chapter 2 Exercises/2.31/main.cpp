#include <iostream>
using namespace std;

int main() {

    int size = 8;
    
    for (int i = 0; i < size; i++)
    {
        if (i % 2 != 0) cout << " ";

        for (int j = 0; j < size; j++)
        {
            cout << "* ";
        }
        
        cout << endl;
    }
    

    return 0;
}
