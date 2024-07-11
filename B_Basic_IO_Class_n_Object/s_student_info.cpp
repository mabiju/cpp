/* program to create a student class and get first name, roll
number and mobile number from the user, display the details
using suitable function. */
#include <iostream>
using namespace std;

class student
{
    int roll;
    char name[20], cell[10];

public:
    void getdata()
    {
        cout << "Enter Student Name :";
        cin >> name;
        cout << "Enter Student Roll No :";
        cin >> roll;
        cout << "Enter Student Mobile No :";
        cin >> cell;
    }
    void display()
    {
        cout << "Student Name :" << name << endl;
        cout << "Student Roll No :" << roll << endl;
        cout << "Student Mobile No :" << cell << endl;
    }
};

int main()
{
    student s;
    s.getdata();
    s.display();
    return 0;
}