#include <iostream>
using namespace std;

class Sum
{
    int a = 78, b;

public:
    void getB()
    {
        b = 23;
    }
    // friend function declaration
    friend int add(Sum c);
};

// friend function definition
int add(Sum c)
{
    return (c.a + c.b);
}

int main()
{
    Sum s1;
    s1.getB();
    cout << "The Sum = " << add(s1);
    return 0;
}