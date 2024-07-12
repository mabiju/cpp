#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the value of a :" << endl;
    cin >> a;
    cout << "Enter the value of b :" << endl;
    cin >> b;
    cout << "Enter the value of c :" << endl;
    cin >> c;

    if (a > b && a > c)
    { // Logical AND Operator (&&)
        cout << a << " is the greater than " << b << " and " << c << endl;
    }
    else if (b > a && b > c)
    {
        cout << b << " is the greater than " << a << " and " << c << endl;
    }
    else
    {
        cout << b << " is the greater than " << a << " and " << b;
    }
    return 0;
}