#include <iostream>
using namespace std;

class Student
{
    int roll;
    char name[20];

public:
    void getData()
    {
        cout << "Enter roll number :";
        cin >> roll;
        cout << "Enter name :";
        cin >> name;
    }
    void showData()
    {
        cout << "Roll =" << roll << endl;
        cout << "Name =" << name << endl;
    }
};

int main()
{
    int stunum;
    Student stu[10];
    cout << "Enter the number of students:";
    cin >> stunum;

    for (int i = 0; i < stunum; i++)
    {
        stu[i].getData();
    }
    
    cout << "\nDisplaying the details of student(s)" << endl;
    for (int i = 0; i < stunum; i++)
    {
        stu[i].showData();
    }
    return 0;
}