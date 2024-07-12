// need to know about arrow operato just before virtual function
#include <iostream>
using namespace std;

class Nums
{
    int a;

public:
    void getValue(int a)
    {
        this->a = a;
    }
    void display()
    {
        cout << "The value of a = " << a << endl;
    }
};
int main()
{
    Nums *obj = new Nums;
    obj->getValue(45);
    obj->display();
    return 0;
}