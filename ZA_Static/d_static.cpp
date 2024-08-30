#include <iostream>
using namespace std;

class Nums
{
    static int a;
    int b;

public:
    void getNums(int x, int y)
    {
        a = x;
        b = y;
    }

    void showNums()
    {
        cout << "\nThe value of a = " << a << endl;
        cout << "The value of b = " << b << endl;
    }
};

int Nums::a;

int main()
{
    Nums n1, n2;
    n1.getNums(23, 45);
    n1.showNums();

    n2.getNums(34, 89);
    n2.showNums();
    return 0;
}