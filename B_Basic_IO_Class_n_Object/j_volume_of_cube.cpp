#include <iostream>
#include <math.h>
using namespace std;

class Cube
{
    int length;

public:
    void input()
    {
        cout << "Enter length: ";
        cin >> length;
    }
    void output()
    {
        cout << "The volume of cube is " << pow(length, 3);
    }
};

int main()
{
    Cube c1;
    c1.input();
    c1.output();
    return 0;
}