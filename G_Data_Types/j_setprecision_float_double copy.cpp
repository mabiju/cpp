#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float num_float = 1.123456789123456789f;
    double num_double = 2.123456789123456789;

    // cout << setprecision(8); // set precision for all at once

    // cout << setprecision(5) << num_float << endl; // 1.1235
    // cout << setprecision(15) << num_double << endl; //2.12345678912346
    cout << setprecision(9) << num_float << endl;
    cout << setprecision(20) << num_double << endl;d
    return 0;
}
/* 
since float has a precision of up to only 7 digits, it shows garbage values after its precision is exceeded. Precisio for
double variable has a precision of 15 digits.As an alternative, we can specify different precisions for different variables
 while printing them. */