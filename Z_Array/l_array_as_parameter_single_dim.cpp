#include <iostream>
using namespace std;

void displayArray(int arg[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arg[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int firstArray[] = {23, 45, 67};
    int secondArray[] = {23, 45, 67, 0, 12, 34, 55, 66, 7, 90};
    displayArray(firstArray, 3);
    displayArray(secondArray, 10);
    return 0;
}