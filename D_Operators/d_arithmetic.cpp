#include <iostream>
using namespace std;

class ArithmeticOprt
{
    int a, b;

public:
    void input()
    {
        cout << "Enter the value of a:";
        cin >> a;
        cout << "Enter the value of b:";
        cin >> b;
    }
    void output()
    {
        cout << "The sum is = " << (a + b) << endl;        // + Addition
        cout << "The difference is = " << (a - b) << endl; // - difference
        cout << "The product is = " << (a * b) << endl;    // * product
        cout << "The quotient is = " << (a / b) << endl;   // / quotient
        cout << "The remainder is = " << (a % b) << endl;  // % remainder
    }
};

int main()
{
    ArithmeticOprt a1;
    a1.input();
    a1.output();
    return 0;
}