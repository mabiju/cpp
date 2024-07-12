#include <iostream>
using namespace std;

class GotoGreater
{
    int a, b;

public:
    void input()
    {
        cout << "Enter the value of a:";
        cin >> a;
        cout << "Enter the value of b:";
        cin >> b;
    }
    void output()
    {
        if (a > b)
            goto aGreater;
        else
            goto bGreater;

    aGreater:
        cout << a << " is greater than " << b << endl;
        return; // When you write return you are actually returning void value and you are simply returning 0 when you write return 0.So, you generally use return 0 when return type is int and return when return type is void.
    bGreater:
        cout << b << " is greater than " << a << endl;
        return;
    }
};

int main()
{
    GotoGreater obj;
    obj.input();
    obj.output();
    return 0;
}