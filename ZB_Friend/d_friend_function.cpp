#include <iostream>
using namespace std;

class room
{
    int l, b, a;

public:
    void getdata(int x, int y)
    {
        l = x;
        b = y;
    }
    void area()
    {
        a = l * b;
        cout << "Area=" << a;
    }
    friend room copy(room L1)
    {
        room temp;
        temp.l = L1.l;
        temp.b = L1.b;
        return temp;
    }
};

int main()
{
    room r1, r2;
    r1.getdata(5, 6);
    r2 = copy(r1);
    r1.area();
    r2.area();
    return 0;
}
