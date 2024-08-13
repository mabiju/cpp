#include <iostream>
using namespace std;

class SuperClass
{
public:
    void hello()
    {
        cout << "Hello Sanothimi !!" << endl;
    }
};

class SubClass : public SuperClass
{
public:
    void hello()
    {
        cout << "Namaste Sanothimi !!" << endl;
    }
};

int main()
{
    SubClass obj;
    obj.hello();
    obj.SuperClass::hello();
    return 0;
}