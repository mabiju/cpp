// Syntax
// ------
// initialization;
// while (Condition)
// {
//     statement to print
//     increment/ decrement
// }

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    while (a >= 2)
    {
        cout << a << endl;
        a -= 2; // a = a -2
    }
    return 0;
}
