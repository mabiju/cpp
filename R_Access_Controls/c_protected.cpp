#include <iostream>
using namespace std;

class ProtectedDemo
{
public:
// protected:
    int a = 89;
};

int main()
{
    ProtectedDemo obj;
    cout << "The value of a = " << obj.a << endl;
    return 0;
}