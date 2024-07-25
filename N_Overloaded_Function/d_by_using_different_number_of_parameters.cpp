#include <iostream>
using namespace std;

class Sum
{
public:
    void add(int a, int b)
    {
        cout << "The sum = " << (a + b) << endl;
    }
    void add(int a, int b, int c)
    {
        cout << "The sum = " << (a + b + c) << endl;
    }
};

int main()
{
    Sum s1;
    s1.add(45, 34);
    s1.add(56, 67, 89);
    return 0;
}