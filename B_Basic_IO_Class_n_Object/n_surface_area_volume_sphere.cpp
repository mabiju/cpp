#include <iostream>
#include <math.h>
using namespace std;

class Sphere
{
    int radius;

public:
    void input()
    {
        cout << "Enter radius of sphere: ";
        cin >> radius;
    }
    void sarea()
    {
        cout << "The surface area of sphere is = " << (float)4 * 3.14f * pow(radius, 2) << endl;
    }
    void volume()
    {
        cout << "The volume area of sphere is = " << (float)(4.0 / 3.0) * 3.14f * pow(radius, 3);
    }
};

int main()
{
    Sphere ball;
    ball.input();
    ball.sarea();
    ball.volume();
    return 0;
}