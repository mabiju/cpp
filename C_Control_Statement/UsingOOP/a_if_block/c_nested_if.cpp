#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    void intput()
    {
        cout << "Enter a number less than 100:";
        cin >> num;
    }
    void output()
    {
        if (num < 100)
        {
            if (num < 50)
            {
                cout << "The number is less than 50";
            }
            if (num > 50)
            {
                cout << "The number is greater than 50";
            }
            if (num == 50)
            {
                cout << "The number is 50";
            }
        }
    }
};

int main()
{
    Number n;
    n.intput();
    n.output();
    return 0;
}