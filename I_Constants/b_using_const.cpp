#include <iostream>
using namespace std;

// using const
const double PI = 3.14;

int main()
{
    // double PI = 3.14;
    float radius, area;
    cout << "Enter the radius of the circle:";
    cin >> radius;
    area = PI * radius * radius;
    cout << "The area of the circle = " << area << endl;
    return 0;
}