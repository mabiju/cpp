#include <iostream>
using namespace std;

int main()
{
    // bitwise right shift (>>) Demonstration
    /*
        4 = 100 (base-2 binary system)

        4 >> 1
        0 + 100 - 0
        In the example above, 0 is added to the left side of 4 (100 in base-2).
        Then, the rightmost bit is removed, which yields 10 (base-2) or 2 (base-10).

        4 >> 2
        00 + 100 - 00
        In the example above, 00 is added to the left side of 4 (100 in base-2).
        Then, the two rightmost bits are removed, which yields 1 (base-2) or 1 (base-10).

     */
    int a = 4;
    cout << (a >> 1) << endl; // 10 = 2 (in decimal)
    cout << (a >> 2) << endl; // 1 = 1 (in decimal)
    return 0;
}