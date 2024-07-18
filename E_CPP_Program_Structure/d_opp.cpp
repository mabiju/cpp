// 1. Documentation section (Optional) : Comments
/*
    This program
    explains
    structure of
    c plus plus program
    based on POP
 */

// 2. Linking Section:
// a. Preprocessor directive, libraries/ header files
#include <iostream>
// b. Namespace declaration
using namespace std;

// 3. Global declaration(s)
const int a = 3;

// 4. Class declaration Section:
class Sum
{
    // a. Access modifier declaration (default(private), public)
public:
    // b. Class attributes declaration
    int b = 5;
    // c. Member function declaration/ method declaration
    void output()
    // d. Function / Method body
    {
        cout << "Sum = " << a + b;
    }
};

// 5. Main Function Section:
int main()
// a. function body
{
    // i. object declaration
    Sum num;
    // ii. accessing class properties
    num.output();
    return 0;
}
