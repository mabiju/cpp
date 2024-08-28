#include <iostream>
using namespace std;

void displayarray(int arg[][3], int m, int n)
{
    for (int r = 0; r < m; r++)
    {
        cout << endl;
        for (int c = 0; c < n; c++)
        {
            cout << arg[r][c] << "\t";
        }
    }
}

int main()
{
    int myarray[4][3] =
        {
            {12, 34, 56},
            {22, 33, 44},
            {90, 67, 89},
            {55, 66, 77}
        };
    displayarray(myarray, 4, 3);
    return 0;
}