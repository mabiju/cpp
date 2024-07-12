#include <iostream>
using namespace std;

class Triangle
{
    int a, b, c;

public:
    void input()
    {
        cout << "In Triangle ABC:" << endl;
        cout << "Enter the length of side BC(a):" << endl;
        cin >> a;
        cout << "Enter the length of side AC(b):" << endl;
        cin >> b;
        cout << "Enter the length of side AB(c):" << endl;
        cin >> c;
    }
    void output()
    {
        if (a == b && a == c)
        {
            cout << "Equilateral triangle.";
        }
        else if (a == b || a == c || b == c)
        {
            cout << "Isosceles triangle.";
        }
        else
        {
            cout << "Scalene triangle.";
        }
    }
};

int main()
{
    Triangle t1;
    t1.input();
    t1.output();
    return 0;
}