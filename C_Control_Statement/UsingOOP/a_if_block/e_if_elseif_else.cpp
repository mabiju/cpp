#include <iostream>
using namespace std;

class IfElseIfElse
{
    int num;

public:
    void input()
    {
        cout << "Enter a number to check +ve, -ve or zero:";
        cin >> num;
    }
    void output()
    {
        if (num > 0)
        {
            cout << "The number " << num << " is a +ve integer.";
        }
        else if (num < 0)
        {
            cout << "The number " << num << " is a -ve integer.";
        }
        else
        {
            cout << "This number is zero.";
        }
    }
};

int main()
{
    IfElseIfElse obj;
    obj.input();
    obj.output();
    return 0;
}