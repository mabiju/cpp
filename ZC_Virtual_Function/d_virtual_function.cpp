#include <iostream>
using namespace std;

class SuperClass
{
public:
    void display()
    {
        cout << "Display method from SuperClass" << endl;
    }
    virtual void show()
    {
        cout << "Show method from SuperClass" << endl;
    }
};
class SubClass : public SuperClass
{
public:
    void display()
    {
        cout << "Display method from SubClass" << endl;
    }
    void show()
    {
        cout << "Show method from SubClass" << endl;
    }
};

int main()
{
    SuperClass B;
    SubClass D;
    SuperClass *super_class_pointer;
    cout << "Super_class_pointer points to SuperClass" << endl;
    super_class_pointer = &B;
    super_class_pointer->display();
    super_class_pointer->show();
    cout << endl;
    cout << "Super_class_pointer points to SubClass" << endl;
    super_class_pointer = &D;
    super_class_pointer->display();
    super_class_pointer->show();
    return 0;
}