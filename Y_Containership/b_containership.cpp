#include <iostream>
using namespace std;

class Teacher
{
public:
    char name[20];
    void getTname()
    {
        cout << "Enter teacher's name:";
        cin >> name;
    }
    void Display()
    {
        cout << "Teacher's name = " << name;
    }
};

class Student
{
    Teacher t1;
    int roll;

public:
    void getRoll()
    {
        cout << "Enter student's roll number:";
        cin >> roll;
        t1.getTname();
    }
    void Display()
    {
        cout << "Student's roll number = " << roll << endl;
        t1.Display();
    }
};
int main()
{
    Student s1;
    s1.getRoll();
    s1.Display();
    return 0;
}