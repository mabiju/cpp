// static member without member function
#include <iostream>
using namespace std;

class StaticDemo
{
public:
    // static member declaration
    static int num;
};

// definition
int StaticDemo::num = 67;

int main()
{
    cout << "The number = " << StaticDemo::num;
    return 0;
}