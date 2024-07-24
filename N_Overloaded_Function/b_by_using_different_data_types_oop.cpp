#include <iostream>
using namespace std;

class MyClass
{
public:
    int displayNum(int a)
    {
        return a;
    }
    double displayNum(double b)
    {
        return b;
    }
};

int main()
{
    MyClass obj;
    cout << "The integer value = " << obj.displayNum(45) << endl;
    cout << "The double value = " << obj.displayNum(67.78) << endl;
    cout << "The double value = " << obj.displayNum(45.67) << endl;
    return 0;
}