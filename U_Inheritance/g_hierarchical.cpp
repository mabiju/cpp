#include <iostream>
using namespace std;

class Nums
{
public:
    int x, y;
    void getdata()
    {
        cout << "Enter x:";
        cin >> x;
        cout << "Enter y:";
        cin >> y;
    }
};

class Sum : public Nums
{
public:
    void add()
    {
        cout << "The sum = " << x + y << endl;
    }
};
class Pro : public Nums
{
public:
    void pro()
    {
        cout << "The product = " << x * y << endl;
    }
};

int main()
{
    Sum s;
    Pro p;
    s.getdata();
    s.add();
    p.getdata();
    p.pro();
    return 0;
}