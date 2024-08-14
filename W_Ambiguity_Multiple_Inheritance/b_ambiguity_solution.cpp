#include <iostream>
using namespace std;

class Dad
{
public:
    void hello()
    {
        cout << "Hello From your Dad." << endl;
    }
};

class Mom
{
public:
    void hello()
    {
        cout << "Hi from your mom." << endl;
    }
};

class Child : public Dad, public Mom
{
public:
    void me()
    {
        cout << "Hello myself." << endl;
    }
};

int main()
{
    Child c1;
    c1.me();
    // c1.hello(); // error
    c1.Dad::hello();
    c1.Mom::hello();
    return 0;
}