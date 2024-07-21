// implicit type conversion, double to int (narrowing)
#include <iostream>
using namespace std;

int main()
{
    double num_double = 12.34;
    int num_int = num_double;
    cout << "Double number = " << num_double << endl;
    cout << "Converted integer number = " << num_int << endl;
    return 0;
}