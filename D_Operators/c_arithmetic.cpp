#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter first number:" << endl;
    cin >> num1;
    cout << "Enter second number:" << endl;
    cin >> num2;

    cout << "Sum = " << (num1 + num2) << endl;        // Addition arithmetic operator
    cout << "Difference = " << (num1 - num2) << endl; // Subtraction arithmetic operator
    cout << "Product = " << (num1 * num2) << endl;    // Multiplication arithmetic operator
    cout << "Quotient = " << (num1 / num2) << endl;   // Division arithmetic operator
    cout << "Remainder = " << (num1 % num2) << endl;  // Modulus arithmetic operator
    cout << "Exponential = " << pow(num1, num2);
    return 0;
}