#include <iostream>
using namespace std;

class AssignmentOprt
{
    int a, b;

public:
    void input()
    {
        cout << "Enter the value of a :";
        cin >> a;
        cout << "Enter the value of b :";
        cin >> b;
    }
    void output()
    {
        // a = b; // equal to
        // cout << "The new assigned value of a is = " << a;
        // a+=b; // // increment assignment (similar to : a = a + b;)
        // cout << "The new value of a after increment assignment is = " << a;
        // a-=b; // // decrement assignment (similar to : a = a - b;)
        // cout << "The new value of a after decrement assignment is = " << a;
        // a*=b; // // multiplication assignment (similar to : a = a * b;)
        // cout << "The new value of a after multiplication assignment is = " << a;
        // a/=b; // // division assignment (similar to : a = a / b;)
        // cout << "The new value of a after division assignment is = " << a;
        a %= b; // // modulo assignment (similar to : a = a % b;)
        cout << "The new value of a after modulo assignment is = " << a;
    }
};

int main()
{
    AssignmentOprt a1;
    a1.input();
    a1.output();
    return 0;
}