#include <iostream>
using namespace std;

class Sum
{

    int a, b, sum;

public:
    void input();
    void output();
};
inline void Sum::input()
{
    cout << "Enter a number:";
    cin >> a;
    cout << "Enter another number:";
    cin >> b;
}
void Sum::output()
{
    sum = a + b;
    cout << "The sum = " << sum << endl;
}

int main()
{
    Sum s1;
    s1.input();
    s1.output();
    return 0;
}