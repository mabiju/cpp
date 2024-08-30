// static member with static member function
#include <iostream>
using namespace std;

class StaticDemo
{
public:
    // declaration
    static int num;

    // use of static method to display the value
    static void show()
    {
        cout << "The number using member function = " << num << endl;
    }
};

// definition
int StaticDemo::num = 89;

int main()
{
    StaticDemo s1;
    cout << "The value using object = " << s1.num << endl; // using object
    StaticDemo::show();                                    // using member function
    return 0;
}