#include <iostream>
using namespace std;

class Nums
{
public:
    int a, b;

    void inputNums()
    {
        cout << "Enter a:";
        cin >> a;
        cout << "Enter b:";
        cin >> b;
    }

    void displaySum()
    {
        cout << "The sum of " << a << " and " << b << " = " << (a + b);
    }
};

int main()
{
    Nums obj;
    obj.inputNums();
    obj.displaySum();
    return 0;
}