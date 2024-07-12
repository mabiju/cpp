#include <iostream>
using namespace std;

class RelationalOptr
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
        // if (a == b) // == (equal to operator)
        // {
        //     cout << "The numbers are equal." << endl;
        // }
        // else
        // {
        //     cout << "Numbers are different." << endl;
        // }

        // if (a != b) // != (not equal to operator)
        // {
        //     cout << "Different numbers." << endl;
        // }
        // else
        // {
        //     cout << "Same numbers." << endl;
        // }

        // if (a > b) // > (is greater than operator)
        // {
        //     cout << a << " is the larger number" << endl;
        // }
        // else
        // {
        //     cout << b << " is the larger number" << endl;
        // }

        // if (a < b) // < (is smaller than operator)
        // {
        //     cout << a << " is the smaller number." << endl;
        // }
        // else
        // {
        //     cout << b << " is the smaller number." << endl;
        // }

        // if (a >= b) // >= (is greater than or equals to operator)
        // {
        //     cout << a << " is larger than or equals to the number " << b << endl;
        // }
        // else
        // {
        //     cout << a << " is smaller than " << b << endl;
        // }

        if (a <= b) // <= (is smaller than or equals to operator)
        {
            cout << a << " is smaller than or equals to the number " << b << endl;
        }
        else
        {
            cout << a << " is larger than " << b << endl;
        }
    }
};

int main()
{
    RelationalOptr r1;
    r1.input();
    r1.output();
    return 0;
}