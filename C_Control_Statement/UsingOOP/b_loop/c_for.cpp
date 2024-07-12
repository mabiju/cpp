// Syntax
// ------
// for(initialization; condition; increment/ decrement){
//     statement to print
// }

#include <iostream>
using namespace std;

class ForDemo
{
public:
    void output()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << i << endl;
        }
    }
};

int main()
{
    ForDemo f1;
    f1.output();
    return 0;
}