/* Wrire a program to show how to call a parameterized constructor
of child class when parent class's constructor is called. */
#include <iostream>
using namespace std;

class Parent
{
    int x;

public:
    Parent(int a)
    {
        x = a;
        cout << "Inside parent class's parameterized constructor" << endl;
    }
};
class Child : public Parent
{
public:
    Child(int x) : Parent(x)
    {
        cout << "Inside child class's parameterized constructor" << endl;
    }
};

int main()
{
    Child c1(45);
    return 0;
}