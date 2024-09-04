#include <iostream>
using namespace std;

class BaseClass
{
public:
    virtual void vMethod()
    {
        cout << "Virtual method from BaseClass" << endl;
    }
    void method()
    {
        cout << "Normal method from BaseClass" << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    void vMethod()
    {
        cout << "Overridden Virtual method from DerivedClass" << endl;
    }
    void method()
    {
        cout << "Overridden Normal method from DerivedClass" << endl;
    }
};

int main()
{
    BaseClass *bPointer;
    DerivedClass dPointer;
    bPointer = &dPointer;
    // Virtual function binded at run time
    bPointer->vMethod(); // Override

    // non Virtual function binded at compile time
    bPointer->method();  // normal execution
    return 0;
}