#include <iostream>
using namespace std;

class Student
{
    int roll;

public:
    void getRoll()
    {
        cout << "Enter roll number :" << endl;
        cin >> roll;
    }
};

class Exam : public Student
{
public:
    int marks;
    void getMarks()
    {
        getRoll();
        cout << "Enter marks:" << endl;
        cin >> marks;
    }
};
class Result : public Exam
{
public:
    void getResult()
    {
        getMarks();
        if (marks >= 40)
        {
            cout << "Pass" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
    }
};

int main()
{
    Result r1;
    r1.getResult();
    return 0;
}