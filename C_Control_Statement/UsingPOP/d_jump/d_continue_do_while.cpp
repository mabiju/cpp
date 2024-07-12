#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    do
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

    } while (a < 10);
    return 0;
}