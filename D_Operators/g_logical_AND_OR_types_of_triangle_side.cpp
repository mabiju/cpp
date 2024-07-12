#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "In Triangle ABC:" << endl;
    cout << "Enter the length of side BC(a):" << endl;
    cin >> a;
    cout << "Enter the length of side AC(b):" << endl;
    cin >> b;
    cout << "Enter the length of side AB(c):" << endl;
    cin >> c;

    if (a == b && b == c)
    {
        cout << "Equilateral Triangle" << endl;
    }
    else if ((a == b || b == c || a == c))
    {
        cout << "Isosceles Triangle" << endl;
    }
    else
    {
        cout << "Scalene Triangle";
    }
    return 0;
}