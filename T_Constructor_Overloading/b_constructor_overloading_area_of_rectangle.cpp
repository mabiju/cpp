#include <iostream>
using namespace std;

class Rectangle
{
    float l, b, area;

public:
    Rectangle()
    {
        l = 23.8;
        b = 7.8;
    }
    Rectangle(float p)
    {
        l = p;
        b = 1.23;
    }
    Rectangle(float p, float q)
    {
        l = 45.6;
        b = 1.23;
    }

    float calcArea()
    {
        return (l * b);
    }
};

int main()
{
    Rectangle r1, r2(23.4), r3(6.7, 4.56);
    cout << "The are of rectangle = " << r1.calcArea() << endl;
    cout << "The are of rectangle = " << r2.calcArea() << endl;
    cout << "The are of rectangle = " << r3.calcArea() << endl;
    return 0;
}