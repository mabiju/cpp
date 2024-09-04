#include <iostream>
using namespace std;

class A
{
public:
    virtual void display()
    {
        cout << "from class A" << endl;
    }
};
class B : public A
{
public:
    void display()
    {
        cout << "from class B" << endl;
    }
};
class C : public A
{
public:
    void display()
    {
        cout << "from class C" << endl;
    }
};

int main()
{
    A *ptr[3];
    B b1;
    C c1;
    ptr[0] = &b1;
    ptr[0]->display();
    ptr[1] = &c1;
    ptr[1]->display();
    return 0;
}