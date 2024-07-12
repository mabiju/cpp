#include <iostream>
using namespace std;

class Calculator
{
    int a, b;
    char c;

public:
    void input()
    {
        cout << "Enter first number:";
        cin >> a;
        cout << "Enter seconnd number:";
        cin >> b;
        cout << "Enter a symbol (+,-,*,/) for an arithmetic operation:";
        cin >> c;
    }
    void output()
    {
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
};

int main()
{
    Calculator c1;
    c1.input();
    c1.output();
    return 0;
}