#include <iostream>
using namespace std;

class PrivateDemo
{
public:
// private:
    int a = 89;
};

int main()
{
    PrivateDemo obj;
    cout << "The value of a = " << obj.a << endl;
    return 0;
}