// program to get 30,28,24,22,.........2 using while loop
#include <iostream>
using namespace std;

class SeriesSol
{
    int num = 32;

public:
    void output()
    {
        while (num >= 3)
        {
            num -= 2;
            if (num == 26)
            {
                continue;
            }
            else
            {
                cout << num << endl;
            }
        }
    }
};

int main()
{
    SeriesSol obj;
    obj.output();
    return 0;
}