#include <iostream>
using namespace std;

int main() 
{

    cout << "A" << "\t\t" << static_cast<int>('A') << endl;
    cout << "B" << "\t\t" << static_cast<int>('B') << endl;
    cout << "C" << "\t\t" << static_cast<int>('C') << endl;
    cout << "a" << "\t\t" << static_cast<int>('a') << endl;
    cout << "b" << "\t\t" << static_cast<int>('b') << endl;
    cout << "c" << "\t\t" << static_cast<int>('c') << endl;
    cout << "0" << "\t\t" << static_cast<int>('0') << endl;
    cout << "1" << "\t\t" << static_cast<int>('1') << endl;
    cout << "2" << "\t\t" << static_cast<int>('2') << endl;
    cout << "$" << "\t\t" << static_cast<int>('$') << endl;
    cout << "*" << "\t\t" << static_cast<int>('*') << endl;
    cout << "+" << "\t\t" << static_cast<int>('+') << endl;
    cout << "/" << "\t\t" << static_cast<int>('/') << endl;
    cout << "[space]\t\t" << static_cast<int>(' ') << endl;
   
    return 0;
}