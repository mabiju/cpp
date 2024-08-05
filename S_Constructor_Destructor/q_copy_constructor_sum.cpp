// Write a program in C++ to add two user input number passes through copy constructor.
#include <iostream>
using namespace std;

class Calc
{
    int num1, num2;

public:
    // parameterized constructor
    Calc(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    // copy constructor
    Calc(Calc &c)
    {
        num1 = c.num1;
        num2 = c.num2;
    }
    void getSum()
    {
        cout << "The sum = " << (num1 + num2) << endl;
    }
};

int main()
{
    int p, q;
    cout << "Enter the value of a:";
    cin >> p;
    cout << "Enter the value of b:";
    cin >> q;

    Calc c1(p, q);
    Calc c2(c1);

    c2.getSum();
}