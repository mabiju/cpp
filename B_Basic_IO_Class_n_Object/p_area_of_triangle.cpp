#include <iostream>
using namespace std;

class Triangle
{
    int b, h;

public:
    void input()
    {
        cout << "Enter base:";
        cin >> b;
        cout << "Enter height:";
        cin >> h;
    }
    void displayarea()
    {
        cout << "The area =" << (float)0.5 * b * h;
    }
};

int main()
{
    Triangle t1;
    t1.input();
    t1.displayarea();
    return 0;
}
