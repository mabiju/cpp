/* WAP in C++ to demonstrate default constructor, parameterized constructor
and the use of destructor in a single program. */

#include <iostream>
using namespace std;

class Nums
{
    int a;

public:
    // Nums() {}// default constructor without body that executes nothing.
    Nums() // default constructor with body
    {
        cout << "Default constructor invoked." << endl;
    }
    Nums(int x) // parameterized constructor
    {
        a = x;
        cout << "The value of a = " << a << endl;
    }
    ~Nums() // destructor
    {
        cout << "\nDestructor invoked for the constructor.";
    }
};

int main()
{
    Nums n1(45);
    Nums n2;
    return 0;
}