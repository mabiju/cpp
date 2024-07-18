#include <iostream>
using namespace std;

int main()
{
    // int *ptr;
    void *ptr; // void pointer
    double d = 26.0;

    ptr = &d;
    cout << &d << endl;
    cout << ptr << endl;

    // to print the value
    cout << *(static_cast<double *>(ptr));
    return 0;
}