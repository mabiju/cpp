#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char c;
    cout << "Enter first number:";
    cin >> a;
    cout << "Enter seconnd number:";
    cin >> b;
    cout << "Enter a symbol (+,-,*,/) for an arithmetic operation:";
    cin >> c;
    switch (c)
    {
    case '+':
        cout << "Sum =" << (a + b);
        break;
    case '-':
        cout << "Difference =" << (a - b);
        break;
    case '*':
        cout << "Product =" << (a * b);
        break;
    case '/':
        cout << "Quotient =" << (a / b);
        break;

    default:
        cout << "Invalid input.";
        break;
    }
}