// returns the size of data type
#include <iostream>
using namespace std;

int main()
{
    cout << sizeof(int) << endl;            // 4
    cout << sizeof(float) << endl;          // 4
    cout << sizeof(char) << endl;           // 1
    cout << sizeof(double) << endl;         // 8
    cout << sizeof(long long) << endl;      // 8
    cout << sizeof(long double);    // 12
    return 0;
}