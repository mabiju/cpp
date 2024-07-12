// program to get 30,28,24,22,.........2 using while loop
#include <iostream>
using namespace std;

int main()
{
    int num = 32;
    while (num >=3)
    {
        num -= 2;
        if (num == 26)
        {
            continue;
        }
        else
        {
            cout << num << endl;
        }
    }
    return 0;
}