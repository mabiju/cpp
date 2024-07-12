#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;
    if (num > 0)
    {
        cout << "The number " << num << " is a positive integer.";
    }
    else
    {
        cout << "The number " << num << " is a negative integer.";
    }
    return 0;
}