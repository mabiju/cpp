#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number less than 100:";
    cin >> num;
    if (num < 100)
    {
        if (num < 50)
        {
            cout << "The number is less than 50";
        }
        if (num > 50)
        {
            cout << "The number is greater than 50";
        }
        if (num == 50)
        {
            cout << "The number is 50";
        }
    }
    return 0;
}