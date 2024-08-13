/* // program to access overridden function using pointer of sub
type that points to an object of super class. */
#include <iostream>
using namespace std;

class SuperClass
{
public:
    void output()
    {
        cout << "Super class function" << endl;
    }
};
class SubClass : public SuperClass
{
public:
    void output()
    {
        cout << "Sub class function" << endl;
    }
};
int main()
{
    SubClass s1;

    // pointer of super class that points to the object of sub class.
    SuperClass *ptr = &s1;

    // call function of super class using pointer
    ptr->output();
    return 0;
}