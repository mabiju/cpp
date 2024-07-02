#include <iostream>
using namespace std;

class Cuboid
{
    int length, breadth, height;

public:
    void input()
    {
        cout << "Enter length :";
        cin >> length;
        cout << "Enter breadth :";
        cin >> breadth;
        cout << "Enter height :";
        cin >> height;
    }
    void output()
    {
        cout << "The volume of cuboid is =" << length * breadth * height;
    }
};

int main()
{
    Cuboid c1;
    c1.input();
    c1.output();
    return 0;
}