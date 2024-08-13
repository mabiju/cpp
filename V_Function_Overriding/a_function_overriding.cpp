#include <iostream>
using namespace std;

class SuperClass
{
public:
    void hello()
    {
        cout << "Hello Sanothimi !!";
    }
};

class SubClass : public SuperClass
{
public:
    void hello()
    {
        cout << "Namaste Sanothimi !!";
    }
};

int main()
{
    SubClass obj;
    obj.hello();
    return 0;
}