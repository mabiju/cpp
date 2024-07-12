#include <iostream>
using namespace std;

class ContinueDoWhile
{
    int a = 0;

public:
    void output()
    {
        do
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

        } while (a < 10);
    }
};

int main()
{
    ContinueDoWhile obj;
    obj.output();
    return 0;
}