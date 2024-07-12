#include <iostream>
using namespace std;

int main()
{
    int a = 5; // assignment operator (=)
    // a +=3; // a = a + 3, // addition assignment operator(+=)
    // a -=3; // a = a - 3, // subtraction assignment operator(-=)
    // a *=3; // a = a * 3, // multiplication assignment operator(*=)
    // a /=3; // a = a / 3, // division assignment operator(/=)
    a %= 3; // a = a % 3, // modulo assignment operator(%=)
    cout << a;
    return 0;
}