#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int num_int = 456;
    char num_string[] = "123";
    int num_string_int = atoi(num_string);
    int sum = num_int + num_string_int;
    cout << "Sum = " << sum << endl;
    return 0;
}