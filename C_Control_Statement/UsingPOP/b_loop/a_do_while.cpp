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

int main()
{
    int a = 1;
    do
    {
        cout << a << endl;
        a++;
    } while (a <= 10);
    return 0;
}
