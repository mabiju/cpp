#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length, breadth;

    void input()
    {
        cout << "Enter length of rectangle :";
        cin >> length;
        cout << "Enter breadth of rectangle :";
        cin >> breadth;
    }
    void displayArea()
    {
        cout << "The area of rectangle = " << (length * breadth);
    }
    void displayPerimeter()
    {
        cout << "The perimeter of rectangle = " << 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1;
    r1.input();
    r1.displayArea();
    cout << endl;
    r1.displayPerimeter();
    return 0;
}