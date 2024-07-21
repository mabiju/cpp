// explicit type conversion(type casting), widening type conversion
#include <iostream>
using namespace std;

int main()
{
    int num_int = 89;
    double num_double = (double)num_int; // explicit, i.e. Type Casting
    cout << "Integer number = " << num_int << endl;
    cout << "Converted double number = " << num_double << endl;
    return 0;
}