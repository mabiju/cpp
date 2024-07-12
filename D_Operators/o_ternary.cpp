// use of ternary operator
#include <iostream>
using namespace std;

int main()
{
    int a, b, min;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    min = (a < b) ? a : b;
    cout << "The minimun value is =" << min;
    return 0;
}