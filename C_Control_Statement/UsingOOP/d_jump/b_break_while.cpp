#include <iostream>
using namespace std;

class BreakWhile
{
    int a = 1;

public:
    void output()
    {
        while (a <= 10)
        {
            if (a == 4)
            {
                break;
            }
            cout << a << endl;
            a++;
        }
    }
};

int main()
{
    BreakWhile obj;
    obj.output();
    return 0;
}