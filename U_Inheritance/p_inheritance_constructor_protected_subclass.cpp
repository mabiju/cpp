#include <iostream>
using namespace std;

class SuperClass
{
protected:
    int a;
    SuperClass()
    {
        a = 78;
    }
};

class SubClass : protected SuperClass
{
public:
    void displayData()
    {
        cout << "The value = " << a;
    }
};

int main()
{
    SubClass s1;
    s1.displayData();
    return 0;
}