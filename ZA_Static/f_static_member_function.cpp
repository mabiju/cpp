#include <iostream>
using namespace std;

class StaticFunction
{
    // declaring a static data member
    static int num;

public:
    // creaing static member function
    static int displayNum()
    {
        return num;
    }
};
// initialize the static data member using the class name and the scope resolution operator
int StaticFunction::num = 78;

int main()
{
    // accessing the static data member function using the class name and the scope resolution operator    
    // cout << "The value of num = " << StaticFunction::displayNum() << endl;
    return 0;
}