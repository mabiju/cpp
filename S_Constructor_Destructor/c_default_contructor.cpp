#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    Student();
};

Student::Student()
{
    roll = 90;
}

int main()
{
    Student s1;
    cout << "Roll no = " << s1.roll << endl;
    return 0;
}