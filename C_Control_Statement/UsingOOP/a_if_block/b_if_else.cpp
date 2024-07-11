#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    void input()
    {
        cout << "Enter a number:";
        cin >> num;
    }
    void output()
    {
        if (num > 0)
        {
            cout << "The number " << num << " is a positive integer.";
        }
        else
        {
            cout << "The number " << num << " is a negative integer.";
        }
    }
};

int main()
{
    Number n;
    n.input();
    n.output();
    return 0;
}