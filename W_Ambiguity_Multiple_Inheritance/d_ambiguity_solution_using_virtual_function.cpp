#include <iostream>
using namespace std;

class Base1
{
public:
    virtual void func()
    {
        cout << "Base1::func()\n";
    }
};

class Base2
{
public:
    virtual void func()
    {
        cout << "Base2::func()\n";
    }
};

class Derived : public Base1, public Base2
{
public:
    void func() override
    {
        cout << "Derived::func()\n";
    }
};

int main()
{
    Derived derived;
    Base1 *base1Ptr = &derived;
    Base2 *base2Ptr = &derived;

    base1Ptr->func(); // Calls Derived::func()
    base2Ptr->func(); // Also calls Derived::func()
    return 0;
}