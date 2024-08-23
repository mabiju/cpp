#include <iostream>
using namespace std;

int main()
{
    int nums[3][5];
    cout << "Enter the elements for 3 x 5 2D matrix :" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "nums[" << i << "]" << "[" << j << "] :";
            cin >> nums[i][j];
        }
    }
    cout << "Displaying the elements for 3 x 5 2D matrix :" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "\n";
        for (int j = 0; j < 5; j++)
        {
            cout << nums[i][j] << "\t";
        }
    }
    
    return 0;
}