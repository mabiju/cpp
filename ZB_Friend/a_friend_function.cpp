#include <iostream>
using namespace std;

class AreaOfTri
{
    int base, height;

public:
    void getdata()
    {
        cout << "Enter base of triangle :";
        cin >> base;
        cout << "Enter height of triangle :";
        cin >> height;
    }
    // friend function declaration
    friend double CalcArea(AreaOfTri a);
};

// frind funtion definition
double CalcArea(AreaOfTri a)
{
    return (a.base * a.height * 0.5);
}

int main()
{
    AreaOfTri obj;
    obj.getdata();
    cout << "The area of triangle = " << CalcArea(obj);
    return 0;
}