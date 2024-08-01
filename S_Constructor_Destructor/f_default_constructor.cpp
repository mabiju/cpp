#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;

public:
    Student()
    {
        roll = 89;
        name = "Ram";
    }
    void display()
    {
        cout << "Roll = " << roll << endl;
        cout << "Name = " << name << endl;
    }
};

int main()
{
    Student s1;
    s1.display();
    return 0;
}