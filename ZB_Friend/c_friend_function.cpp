#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
    void getMarks()
    {
        cout << "Enter marks:";
        cin >> marks;
    }
    void displayMarks()
    {
        cout << "Marks = " << marks << endl;
    }

    Student friend Duplicate(Student a)
    {
        Student b;
        b.marks = a.marks;
        return b;
    }
};

int main()
{
    Student s1, s2;
    s1.getMarks();
    s2 = Duplicate(s1);
    s1.displayMarks();
    s2.displayMarks();
    return 0;
}