#include <iostream>
using namespace std;

int main()
{
    // bitwise XOR (^) Demonstration
    /* 
        12 = 00001100 (In Binary)
        25 = 00011001 (In Binary)

        00001100
    ^   00011001
        _________
        00010101  = 21 (In decimal) 
     
     */

    int a = 12, b = 25;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    return 0;
}