#include <iostream>
using namespace std;

int add(int a, int b)
{
    return (a + b);
}
int add(int a, int b, int c)
{
    return (a + b + c);
}
int add(int a, int b, int c, int d)
{
    return (a + b + c + d);
}

int main()
{
    cout << "The sum = " << add(12, 34) << endl;
    cout << "The sum = " << add(12, 34, 67) << endl;
    cout << "The sum = " << add(12, 34, 78, 90);
    return 0;
}