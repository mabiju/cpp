#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void getA()
    {
        cout << "Enter the value of a:";
        cin >> a;
    }
};

class B : public A
{
    int b, sum;

public:
    void getSum()
    {
        getA();
        cout << "Enter the value of b:";
        cin >> b;
        sum = a + b;
        cout << "The sum = " << (a + b) << endl;
    }
};

int main()
{
    B b1;
    b1.getSum();
    return 0;
}