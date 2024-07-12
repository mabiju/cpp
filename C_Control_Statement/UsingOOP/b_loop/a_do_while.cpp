// Syntax
// ------
// initialization;
// do
// {
//     statement to print;
//     increment/ decrement;
// } while (Condition);

#include <iostream>
using namespace std;

class DoWhileDemo
{
    int a = 1;

public:
    void output()
    {
        do
        {
            cout << a << endl;
            a++;
        } while (a <= 10);
    }
};

int main()
{
    DoWhileDemo d1;
    d1.output();
    return 0;
}
