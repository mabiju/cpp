#include <iostream>
using namespace std;

class Calc
{
public:
    int num;

    // parameterized constructor
    Calc(int a)
    {
        num = a;
    }
    // copy constructor
    Calc(const Calc &i)
    {
        num = i.num;
    }
};

int main()
{
    Calc c1(23);  // calling parameterized constructor
    cout << "The value = " << c1.num << endl;

    // Calc c2 = c1;
    Calc c2(c1); // calling parameterized constructor
    cout << "After invoking copy constructor " << endl;
    cout << "The value after passing it to another object = " << c2.num << endl;
    return 0;
}