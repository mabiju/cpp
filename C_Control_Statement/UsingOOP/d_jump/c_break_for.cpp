#include <iostream>
using namespace std;

class BreakFor
{
public:
    void output()
    {
        for (int i = 1; i <= 10; i++)
        {
            if (i == 4)
            {
                break;
            }
            cout << i << endl;
        }
    }
};

int main()
{
    BreakFor obj;
    obj.output();
    return 0;
}