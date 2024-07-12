#include <iostream>
using namespace std;

class ContinueFor
{
public:
    void output()
    {
        for (int i = 1; i <= 10; i++)
        {
            if (i == 4)
            {
                continue;
            }
            cout << i << endl;
        }
    }
};

int main()
{
    ContinueFor obj;
    obj.output();
    return 0;
}