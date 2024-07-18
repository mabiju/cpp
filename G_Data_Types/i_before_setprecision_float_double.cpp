#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float num_float = 1.123456789123456789f;
    double num_double = 2.123456789123456789;
    cout << num_float << endl; // 1.12346
    cout << num_double << endl; // 2.12346
    return 0;
}
/* Note: The compiler used for this example (MinGW compiler) 
allowed for 6 digits. So, our variable values were rounded off 
and truncated to 6 digits by the compiler. */