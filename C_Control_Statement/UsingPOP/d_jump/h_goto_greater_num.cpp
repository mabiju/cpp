#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;

    if (a > b)
        goto aGreater;
    else
        goto bGreater;

aGreater:
    cout << a << " is greater than " << b << endl;
    return 0;
bGreater:
    cout << b << " is greater than " << a << endl;
    return 0;
}