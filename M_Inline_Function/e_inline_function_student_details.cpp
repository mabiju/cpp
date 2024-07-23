#include <iostream>
using namespace std;

class Student
{
    int Roll;
    char Name[10];
    int mobile;

public:
    inline void getData();
    void displayDetails();
};
inline void Student::getData()
{
    cout << "Enter the Roll No:";
    cin >> Roll;
    cout << "Enter the Name:";
    cin >> Name;
    cout << "Enter the mobile Number:";
    cin >> mobile;
}

void Student::displayDetails()
{
    cout << "Name:" << Name << endl;
    cout << "Roll No:" << Roll << endl;
    cout << "Mobile Number" << mobile << endl;
}
int main()
{
    Student s1;
    s1.getData();
    s1.displayDetails();
    return 0;
}