#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    while (a < 10)
    {
        a++;
        if (a == 4)
        {
            continue;
        }
        else
        {
            cout << a << endl;
        }
    }
    return 0;
}