#include <iostream>
using namespace std;

class Calculator
{
    int a, b;

public:
    void input()
    {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }
    void add()
    {
        cout << "The sum of " << a << " and " << b << " is = " << a + b << endl;
    }
    void diff()
    {
        cout << "The difference of " << a << " and " << b << " is = " << a - b << endl;
    }
    void pro()
    {
        cout << "The product of " << a << " and " << b << " is = " << a * b << endl;
    }
    void div()
    {
        cout << "Quotient while dividing " << a << " by " << b << " is = " << a / b;
        // cout << "Quotient while dividing " << a << " by " << b << " is = " << (float)a / (float)b;
    }
};

int main()
{
    Calculator c;
    c.input();
    c.add();
    c.diff();
    c.pro();
    c.div();
    return 0;
}