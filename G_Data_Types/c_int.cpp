#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // short a = 2; // short int is similar to short
    // short b = 3;
    // short result = (short)pow(a, b);
    // cout << result; // 8

    // short a = 12; // short int is similar to short
    // short b = 7;
    // short result = (short)pow(a, b); // -32768
    // cout << result;

    int a = 12; // short int is similar to short
    int b = 7;
    int result = (int)pow(a, b); // 35831808
    cout << result;


    return 0;
}