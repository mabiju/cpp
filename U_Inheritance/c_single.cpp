#include <iostream>
using namespace std;

class Student
{
public:
    char name[30], address[30];

    void getData()
    {
        cout << "Enter Student's name :";
        cin >> name;
        cout << "Enter address :";
        cin >> address;
    }
    void displayData()
    {
        cout << "Name = " << name << endl;
        cout << "Address = " << address << endl;
    }
};

class College : public Student
{
public:
    char faculty[30];
    int marks;

    void enterData()
    {
        getData();
        cout << "Enter faculty name :";
        cin >> faculty;
        cout << "Enter marks :";
        cin >> marks;
    }

    void showData()
    {
        displayData();
        cout << "Faculty = " << faculty << endl;
        cout << "Marks = " << marks << endl;
    }
};

int main()
{
    College c1, c2;
    c1.enterData();
    c1.showData();
    c2.enterData();
    c2.showData();
    return 0;
}