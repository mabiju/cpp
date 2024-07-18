#include <iostream>
using namespace std;

int main()
{
    double a, b;
    cout << "Enter a decimal number for a:";
    cin >> a;
    cout << "Enter a decimal number for b:";
    cin >> b;
    cout << "Sum =" << (a + b) << endl;
    cout << "Difference =" << (a - b) << endl;
    cout << "Product =" << (a * b) << endl;
    cout << "Quotient =" << (a / b);
    return 0;
}