#include <iostream>
using namespace std;

class BreakDoWhile
{
    int a = 1;

public:
    void output()
    {
        do
        {
            if (a == 4)
            {
                break;
            }
            cout << a << endl;
            a++;
        } while (a <= 10);
    }
};

int main()
{
    BreakDoWhile obj;
    obj.output();
    return 0;
}