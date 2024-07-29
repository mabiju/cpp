#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;
    cout << "Enter the value of a :";
    cin >> a;
    cout << "Enter the value of b :";
    cin >> b;

    cout << "\nBefore swapping " << endl;
    cout << "The value of a = " << a << endl;
    cout << "The value of b = " << b << endl;

    // int temp = a;
    // a = b;
    // b = temp;

    swap(a, b);

    cout << "\nAfter swapping " << endl;
    cout << "The value of a = " << a << endl;
    cout << "The value of b = " << b << endl;

    return 0;
}