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
    void displayRoll()
    {
        cout << "The roll number = " << roll << endl;
    }
};

int main()
{
    Student s1(56);
    Student s2(420);
    Student s3(840);
    s1.displayRoll();
    s2.displayRoll();
    s3.displayRoll();
    return 0;
}