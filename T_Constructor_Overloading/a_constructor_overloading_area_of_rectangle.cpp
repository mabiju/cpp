// Write a program in C++ to calculte the are of rectangle using constructor overloading.
#include <iostream>
using namespace std;

class Rectangle
{
public:
    float area;

    // constructor without argument
    Rectangle()
    {
        area = 23.45;
    }

    // constructor with an argument
    Rectangle(float l, float b)
    {
        area = l * b;
    }
    void displayArea()
    {
        cout << "The area of the rectangle = " << area << " sq. unit" << endl;
    }
};

int main()
{
    Rectangle r1;
    r1.displayArea();
    Rectangle r2(12.3, 5.6);
    r2.displayArea();
    return 0;
}