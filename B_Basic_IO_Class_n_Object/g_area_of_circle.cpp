#include <iostream>
using namespace std;

class Circle
{
    float radius, area;

public:
    void input()
    {
        cout << "Enter radius of the circle :";
        cin >> radius;
    }
    void output()
    {
        cout << "The area of the circle = " << 3.14 * radius * radius;
    }
};

int main()
{
    Circle c1;
    c1.input();
    c1.output();
    return 0;
}