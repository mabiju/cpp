#include <iostream>
using namespace std;

class MulTable
{
    int num, i;

public:
    void input()
    {
        cout << "Enter a number to display its multiplication table:";
        cin >> num;
    }
    void output()
    {
        for (i = 1; i <= 10; i++)
        {
            cout << num << " x " << i << " = " << num * i << endl;
        }
    }
};

int main()
{
    MulTable mt1;
    mt1.input();
    mt1.output();
    return 0;
}