#include <iostream>
using namespace std;

class Nums
{
    int a, b;

public:
    Nums(int, int);
    void sum()
    {
        cout << "The sum = " << (a + b) << endl;
    }
};

Nums::Nums(int p, int q)
{
    a = p;
    b = q;
}

int main()
{
    Nums n1(12, 34);
    Nums n2(34, 304);
    n1.sum();
    n2.sum();
    return 0;
}