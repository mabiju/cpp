#include <iostream>
using namespace std;

class ContinueWhile
{
    int a = 0;

public:
    void output()
    {
        while (a < 10)
        {
            a++;
            if (a == 4)
            {
                continue;
            }
            else
            {
                cout << a << endl;
            }
        }
    }
};

int main()
{
    ContinueWhile obj;
    obj.output();
    return 0;
}