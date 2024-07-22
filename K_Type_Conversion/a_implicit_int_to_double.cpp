// implicit type conversion, widening type conversion
#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    int num_int = 89;
    double num_double = num_int;
    cout << "Integer number = " << num_int << endl;
    cout << "Converted double number = " << num_double << endl;
    cout << typeid(num_int).name() << endl;
    cout << typeid(num_double).name() << endl;
    return 0;
}