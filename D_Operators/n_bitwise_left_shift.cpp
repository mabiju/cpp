#include <iostream>
using namespace std;

int main()
{
    // bitwise left shift (>>) Demonstration
    /*
        4 = 100 (base-2 binary system)

        4 << 1
        100 << 1
        100 + 0
        1000 which is equal to 8 in the base-10 decimal system

        4 << 2
        100 << 2
        100 + 00
        10000 which is equal to 16 in the base-10 decimal system

     */
    int a = 4;
    cout << (a << 1) << endl; // 1000  = 8 (in decimal)
    cout << (a << 2) << endl; // 10000 = 16 (in decimal)
    return 0;
}