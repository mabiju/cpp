#include <iostream>
using namespace std;

class StaticDemo
{
    int code;
    static int count;

public:
    StaticDemo()
    {
        code = count++;
    }
    void displayCode()
    {
        cout << "The value of code = " << code << endl;
    }
    static void displayCount()
    {
        cout << "The value of count = " << count << endl;
    }
};
int StaticDemo::count;

int main()
{
    StaticDemo obj1, obj2, obj3;
    obj1.displayCode();
    obj1.displayCount();
    cout << endl;
    obj2.displayCode();
    obj2.displayCount();
    cout << endl;
    obj3.displayCode();
    obj3.displayCount();

    return 0;
}