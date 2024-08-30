// program to access the static member function using the
// class' object in the C++ programming language.
#include <iostream>
using namespace std;

class NumberSystem
{
    // declare a static data member
    static int num;

public:
    // create static member function
    static int func()
    {
        cout << "The value of the num is: " << num << endl;
    }
};
// initialize the static data member using the class name and the scope resolution operator
int NumberSystem ::num = 86;

int main()
{
    // create an object of the class Note
    NumberSystem n;
    // access static member function using the object
    n.func();
    return 0;
}