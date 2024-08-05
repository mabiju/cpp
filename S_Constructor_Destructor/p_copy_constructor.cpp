#include <iostream>
using namespace std;

class Student
{
public:
    int roll;

    // parameterized constructor
    Student(int a)
    {
        roll = a;
    }
    // copy constructor
    Student(Student &s)
    {
        roll = s.roll;
    }
    void display()
    {
        cout << "Roll number = " << roll << endl;
    }
};

int main()
{
    Student s1(23); // calling parameterized constructor
    Student s2(s1); // calling parameterized constructor
    s2.display();
    return 0;
}