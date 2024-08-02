#include <iostream>
using namespace std;

class Student
{
    // declaring private class data members
private:
    string name;
    int roll;

public:
    // declaring parameterized constructor of three different types
    Student(string n)
    {
         cout << "Constructor to set name is called" << endl;
        name = n;
        roll = 12;
    }
    Student(int r)
    {
        cout << "Constructor to set roll is called" << endl;
        name = "Sita";
        roll = r;
    }
    Student(string n, int r)
    {
        cout << "Constructor for both name and roll is called" << endl;
        name = n;
        roll = r;
    }
    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Roll No = " << roll << endl;
    }
};

int main()
{
    Student s1("Ram");
    s1.display();
    cout << "\n";

    Student s2(34);
    s2.display();
    cout << "\n";

    Student s3("Hari", 45);
    s3.display();

    return 0;
}