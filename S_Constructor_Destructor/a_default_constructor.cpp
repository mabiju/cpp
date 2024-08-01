#include <iostream>
using namespace std;

class ConstructorDemo
{
public:
    ConstructorDemo() // default constructor
    {
        cout << "This is default constructor" << endl;
    }
};

int main()
{
    ConstructorDemo obj;
    return 0;
}