/* Write a program to display Student name and age passing via parameterized
constructor and copy constructor. */
#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;

public:
    Student(string student_name, int student_age)
    {
        cout << "Constructor for both name and age is called" << endl;
        name = student_name;
        age = student_age;
    }

    Student(const Student &i)
    {
        cout << "Copy constructor is called" << endl;
        name = i.name;
        age = i.age;
    }

    // display function to print the class data members value
    void display()
    {
        cout << "Name of current object: " << name << endl;
        cout << "Age of current object: " << age << endl;
        cout << endl;
    }
};
int main()
{
    // creating objects of class using parameterized constructor
    Student stu1("Ram", 25);

    // printing class data members for first object
    stu1.display();

    // creating copy of the obj1
    Student stu2(stu1);

    // printing class data members for second object
    stu2.display();
    return 0;
}