#include <iostream>
using namespace std;

inline int add(int a, int b)
{
    return (a + b);
}

int main()
{
    cout << "The sum = " << add(2, 3) << endl;
    cout << "The sum = " << add(32, 53) << endl;
    cout << "The sum = " << add(209, 389) << endl;
    cout << "The sum = " << add(20, 3234) << endl;
    return 0;
}