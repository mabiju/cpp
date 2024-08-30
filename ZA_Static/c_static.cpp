#include <iostream>
using namespace std;

class Nums
{
    static int a;
    static int b;

public:
    static void display()
    {
        cout << "The value of a = " << a << endl;
        cout << "The value of b = " << b << endl;
    }
};

int Nums::a = 45;
int Nums::b = 90;

int main()
{
    Nums n1;
    cout << "The value of a and b using obejct:\n";
    n1.display();
    cout << endl;
    cout << "\nThe value of a and b using class name:\n";
    Nums::display();
    return 0;
}