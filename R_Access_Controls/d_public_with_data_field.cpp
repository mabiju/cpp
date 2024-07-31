#include <iostream>
using namespace std;

class PublicDemo
{
public:
    int a;
    void displayOutput()
    {
        cout << "The value of  a = " << a << endl;
    }
};

int main()
{
    PublicDemo obj;
    cout << "Enter the value of a:" << endl;
    cin >> obj.a;
    obj.displayOutput();
    return 0;
}