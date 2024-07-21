// explict type conversion(type casting), double to int (narrowing)
#include <iostream>
using namespace std;

int main()
{
    double num_double = 12.34;

    // c style type casting
    int num_int = (int)num_double;
    cout << "Double number = " << num_double << endl;
    cout << "C style double to integer type casting = " << num_int << endl;

    // using function notation
    int num_int1 = int(num_double);
    cout << "Double number = " << num_double << endl;
    cout << "Double to integer type casting using function notation = " << num_int1 << endl;

    return 0;
}