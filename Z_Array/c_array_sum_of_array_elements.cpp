#include <iostream>
using namespace std;

int main()
{
    int marks[] = {12, 34, 45, 67, 78, 45, 67, 89};
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum += marks[i]; // sum = sum + marks[i];
    }
    cout << "Total marks = " << sum << endl;
    return 0;
}