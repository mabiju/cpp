/*
Extraction Operator(>>)
----------------------
The extraction operator (>>) is used to perform formatted input from a stream.
It is commonly used with the cin object, which represents the standard
input stream to read data by the user.

*/

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the value for a:" << endl;

    // the use of extraction operator (>>)
    cin >> a;

    cout << "The value you entered is = " << a << endl;
    return 0;
}