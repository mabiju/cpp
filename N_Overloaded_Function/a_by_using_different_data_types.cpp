#include <iostream>
using namespace std;

void display(int a)
{
    cout << "The integer value = " << a << endl;
}
void display(double b)
{
    cout << "The double value = " << b << endl;
}
void display(char const *c)
{
    cout << "The string value = " << c << endl;
}

int main()
{
    display(34);
    display(56.67);
    display("Hello Sanothimi");
    return 0;
}