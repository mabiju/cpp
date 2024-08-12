#include <iostream>
using namespace std;

class GrandPa
{
public:
    void hi()
    {
        cout << "Hi, Grandpa" << endl;
    }
};

class Dad : public GrandPa
{
public:
    void hello()
    {
        cout << "Hello, Dad" << endl;
    }
};

class Mom
{
public:
    void namaste()
    {
        cout << "Namaste, Mommy" << endl;
    }
};

class Child : public Dad, public Mom
{
public:
    void me()
    {
        cout << "Hello, Myself" << endl;
    }
};

int main()
{
    Child c;
    c.hi();
    c.hello();
    c.namaste();
    c.me();
    return 0;
}