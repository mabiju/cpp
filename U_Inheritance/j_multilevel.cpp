// multilevel inheritence
#include <iostream>
using namespace std;

class A
{
public:
    int x;
};
class B : public A
{
public:
    int y;
    void getdata()
    {
        cout << "Enter the value of x:";
        cin >> x;
        cout << "Enter the value of y:";
        cin >> y;
    }
};

class C : public B
{
    int sum;

public:
    void result()
    {
        getdata();
        sum = x + y;
        cout << "The addition value will be:" << sum << endl;
    }
};

int main()
{
    C c1;
    c1.result();
    return 0;
}
