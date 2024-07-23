#include <iostream>
using namespace std;

class Sum
{
public:
    inline int add(int a, int b)
    {
        return (a + b);
    }
};

int main()
{
    Sum s1;
    cout << "The sum = " << s1.add(2, 3) << endl;
    cout << "The sum = " << s1.add(32, 53) << endl;
    cout << "The sum = " << s1.add(209, 389) << endl;
    cout << "The sum = " << s1.add(20, 3234) << endl;
    return 0;
}