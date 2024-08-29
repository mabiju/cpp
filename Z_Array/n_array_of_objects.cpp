#include <iostream>
using namespace std;

class Student
{
    int i, marks[5];

public:
    void getMarks()
    {
        cout << "Enter the marks of 5 subjects:" << endl;
        for (i = 1; i <= 5; i++)
        {
            cout << "Enter the marks of subject " << i << ":";
            cin >> marks[i];
        }
    }
    void displayMarks()
    {
        cout << "Displaying the marks of 5 subjects:" << endl;
        for (i = 1; i <= 5; i++)
        {
            cout << "The marks of subject " << i << "=" << marks[i] << endl;
        }
    }
};

int main()
{
    int i;
    Student stu[5];
    for (i = 1; i <=2; i++)
        stu[i].getMarks();
    for (i = 1; i <=2; i++)
        stu[i].displayMarks();
    return 0;
}