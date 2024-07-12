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

class WhileDemo
{
    int a = 10;

public:
    void output()
    {
        while (a >= 2)
        {
            cout << a << endl;
            a -= 2; // a = a -2
        }
    }
};

int main()
{
    WhileDemo w1;
    w1.output();
    return 0;
}