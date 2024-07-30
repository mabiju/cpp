#include <iostream>
using namespace std;

// global variable declaration
int num;

// reference function declaration
int &numfunc();

int main()
{
    numfunc() = 45; // like num = 45;
    cout << "The number = " << num;
    return 0;
}

int &numfunc()
{
    // returns address of num variable
    return num;
}