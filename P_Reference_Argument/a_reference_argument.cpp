#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int &ref = a;

    cout << a << endl;    // 5
    cout << ref << endl;  // 5
    cout << &a << endl;   // address
    cout << &ref << endl; // address same as above

    ref = 25;
    cout << "\nAfter changing the value of ref: " << endl;
    cout << a << endl;    // 25
    cout << ref << endl;  // 25
    cout << &a << endl;   // address
    cout << &ref << endl; // address same as above

    a = 15;
    cout << "\nAfter changing the value of a: " << endl;
    cout << a << endl;    // 15
    cout << ref << endl;  // 15
    cout << &a << endl;   // address
    cout << &ref << endl; // address same as above

    return 0;
}