#include <iostream>
using namespace std;
int main()
{
    int a, b, sum, diff, pro, quo;
    cout << "Enter first number";
    cin >> a;
    cout << "Enter second number";
    cin >> b;
    sum = a + b;
    diff = a - b;
    pro = a * b;
    quo = a / b;
    cout << "The sum of " << a << " and " << b << " is = " << sum << endl;
    cout << "The difference of " << a << " and " << b << " is = " << diff << endl;
    cout << "The product of " << a << " and " << b << " is = " << pro << endl;
    cout << "Dividing " << a << " by " << b << ", quotient = " << quo;
    return 0;
}
