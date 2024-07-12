#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    while (a <= 10)
    {
        if (a == 4)
        {
            break;
        }
        cout << a << endl;
        a++;
    }
    return 0;
}