#include <iostream>
using namespace std;

class SuperClass
{
private:
    int a;

protected:
    int b;

public:
    int c;

    SuperClass() // constructor
    {
        a = 10;
        b = 45;
        c = 90;
    }
};

class SubClass : protected SuperClass
{
public:
    void showData()
    {
        // cout << "a =" << a << endl;
        cout << "a is inaccessible." << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};

int main()
{
    SubClass s1;
    s1.showData();
    return 0;
}