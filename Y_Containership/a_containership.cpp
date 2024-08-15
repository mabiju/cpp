#include <iostream>
using namespace std;

class One
{
public:
    void hello()
    {
        cout << "Hello friends" << endl;
    }
};

class Two
{
public:
    One ob;
    void hi()
    {
        cout << "Hi friends" << endl;
        ob.hello();
    }
};

int main()
{
    Two obj;
    obj.hi();
    return 0;
}
