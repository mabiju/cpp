#include <iostream>
using namespace std;

class College
{
    int clzId;

public:
    // default constructor
    College()
    {
        clzId = 27;
        cout << "The collge id = " << clzId << endl;
    }
    // parameterized constructor
    College(int cid)
    {
        clzId = cid;
        cout << "The collge id = " << clzId << endl;
    }
    // copy constructor
    College(College &d)
    {
        clzId = d.clzId;
        cout << "The collge id = " << clzId << endl;
    }
};

int main()
{
    College c1;
    College c2(34);
    College c3(c2);
    return 0;
}