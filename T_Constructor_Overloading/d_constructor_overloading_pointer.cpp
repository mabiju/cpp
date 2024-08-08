// Write a program in C++ demonstrating constructor overloading with pointer.
#include <iostream>
using namespace std;

class Calc
{
    int a, b, *p;

public:
    Calc()
    {
        p = new int;
    }
    void input(int x, int y, int z)
    {
        a = x;
        b = y;
        *p = z;
    }
    void output()
    {
        cout << "The value of a = " << a << endl;
        cout << "The value of b = " << b << endl;
        cout << "The value of *p = " << *p << endl;
    }
};

int main()
{
    Calc c1;
    c1.input(12, 78, 89);
    Calc c2 = c1;
    c2.output();
    return 0;
}