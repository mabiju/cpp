#include <iostream>
using namespace std;

class PublicDemo
{
public:
    int a = 89;
};

int main()
{
    PublicDemo obj;
    cout << "The value of a = " << obj.a << endl;
    return 0;
}