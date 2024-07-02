#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:
    void input()
    {
        cout << "Enter length of the rectangle :";
        cin >> length;
        cout << "Enter breadth of the rectangle :";
        cin >> breadth;
    }
    void area()
    {
        cout << "The area of the rectangle = " << length * breadth << endl;
    }
    void perimeter()
    {
        cout << "The perimeter of the rectangle = " << 2 * (length + breadth) << endl;
    }
};

int main()
{
    Rectangle r1;
    r1.input();
    r1.area();
    r1.perimeter();
    return 0;
}