#include <iostream>
using namespace std;

class Addition
{
public:
    void add(int a, double b)
    {
        cout << "The sum = " << (a + b) << endl;
    }
    void add(double a, int b)
    {
        cout << "The sum = " << (a + b) << endl;
    }
};

int main()
{
    Addition a1;
    a1.add(12, 34.56);
    a1.add(12.34, 34);
    return 0;
}