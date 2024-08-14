#include <iostream>
using namespace std;

class Dad
{
public:
    void hello()
    {
        cout << "Hello From your Dad.";
    }
};

class Mom
{
public:
    void hello()
    {
        cout << "Hi from your mom.";
    }
};

class Child : public Dad, public Mom
{
public:
    void me()
    {
        cout << "Hello myself.";
    }
};

int main()
{
    Child c1;
    c1.me();
    // c1.hello(); // error
    return 0;
}