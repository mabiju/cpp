#include <iostream>
using namespace std;

class Student
{
    int roll;         // normal or non static data member
    static int marks; // static data member

public:
    Student(int a, int b) // constuctor
    {
        roll = a;
        marks = b;
    }
    void display() // normal function
    {
        cout << "The roll number is " << roll << endl;
    }

    static void show()
    {
        cout << "The marks is " << marks << endl;
    }
};
int Student::marks = 0;

int main()
{
    Student st1(10, 20);
    st1.display();
    st1.show();

    Student st2(100, 200);
    // Student::display();
    Student::show();
    // st1.display(); // 10
    // st1.show();    // 200
    return 0;
}