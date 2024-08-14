#include <iostream>
using namespace std;

class PrivatePublicDemo
{
    int a;

public:
    void inputData()
    {
        cout << "Enter the value of a: " << endl;
        cin >> a;
    }
    void displayData()
    {
        cout << "The value of a = " << a << endl;
    }
};

int main()
{
    PrivatePublicDemo obj;
    obj.inputData();
    obj.displayData();
    return 0;
}