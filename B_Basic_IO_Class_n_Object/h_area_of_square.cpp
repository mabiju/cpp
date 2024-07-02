#include <iostream>
using namespace std;

class Square
{
    int length, area;

public:
    void input()d
    {
        cout << "Enter length of square:";
        cin >> length;
    }
    void output()
    {
        cout << "The area of square = " << length * length;
    }
};
int main()
{
    Square s1;
    s1.input();
    s1.output();
    return 0;
}