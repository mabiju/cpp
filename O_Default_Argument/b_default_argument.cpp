#include <iostream>
using namespace std;

int add(int a, int b = 10, int c = 20);

int add(int a, int b, int c)
{
    int d;
    d = a + b + c;
    return d;
}

int main()
{
    cout << "The Sum =" << add(30, 40);
    return 0;
}