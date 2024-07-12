/* stream insertion (<>) operators
-------------------------------
insertion operator "<<" is used for output, cout is an object of ostream class
extraction operator ">>" is used for input, cin is an object of istream class */

#include <iostream>
using namespace std;

int main()
{
    int a;
    // use of insertion operator
    cout << "Enter the value of a:";
    // use of extraction operator
    cin >> a;
    cout << "The value you entered is " << a << ".";
    return 0;
}