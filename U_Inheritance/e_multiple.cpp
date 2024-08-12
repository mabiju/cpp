#include <iostream>
using namespace std;

class A
{
public:
    int m;
    void getM()
    {
        cout << "Enter the value of m : ";
        cin >> m;
    }
};
class B
{
public:
    int n;
    void getN()
    {
        cout << "Enter the value of n : ";
        cin >> n;
    }
};

class C : public A, public B
{
    int sum;

public:
    void getSum()
    {
        getM();
        getN();
        sum = m + n;
        cout << "The sum = " << sum << endl;
    }
};

int main()
{
    C obj;
    obj.getSum();
    return 0;
}