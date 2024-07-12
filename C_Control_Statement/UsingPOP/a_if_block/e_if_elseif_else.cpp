#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number to check +ve, -ve or zero:";
    cin >> num;
    if (num > 0)
    {
        cout << "The number " << num << " is a +ve integer.";
    }
    else if (num < 0)
    {
        cout << "The number " << num << " is a -ve integer.";
    }
    else
    {
        cout << "This number is zero.";
    }
    return 0;
}