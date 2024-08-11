#include <iostream>
using namespace std;

// super class
class College
{
    // super class properties
public:
    int clz_id = 45;
};

// sub class "Student" inheriting "College" super class
class Student : public College
{
    // sub class properties
public:
    int stu_roll = 11;
};

int main()
{
    Student s1;
    cout << "Student roll number is = " << s1.stu_roll << endl;
    cout << "College id is = " << s1.clz_id << endl;
    return 0;
}