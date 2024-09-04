#include <iostream>
using namespace std;

class SuperClass
{
public:
    virtual void display()
    {
        cout << "Namaste Sanothimi";
    }
};

class SubClass : public SuperClass
{
public:
    void display()
    {
        cout << "Good morning Sanothimi";
    }
};

int main()
{
    SubClass obj;
    obj.display();
    return 0;
}
