/*
Insertion Operator(<<)
----------------------
The insertion operator (<<) is used to perform formatted output to a stream.
It is commonly used with the cout object, which represents the standard
output stream to display data on the console.

It gets its name from the idea of inserting data into the output stream.
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    // the use of insertion operator (<<)
    cout << "The value is = " << a << endl;
    return 0;
}