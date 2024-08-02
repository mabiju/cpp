// executing default constructor along with parameterized constructor
#include <iostream>
using namespace std;

class Student
{
    int roll;

public:
    Student()
    {
        cout << "This is default constructor to run with parameterized constructor." << endl;
    }
    Student(int r)
    {
        roll = r;
        cout << "The roll = " << roll << endl;
    }
};

int main()
{
    Student s1;
    Student s2(45);
    Student s3(89);
    return 0;
}