#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    Student(int roll_no)
    {
        roll = roll_no;
    }
};

int main()
{
    Student s1(56);
    Student s2(420);
    Student s3(840);
    cout << "The roll number = " << s1.roll << endl;
    cout << "The roll number = " << s2.roll << endl;
    cout << "The roll number = " << s3.roll << endl;
    return 0;
}