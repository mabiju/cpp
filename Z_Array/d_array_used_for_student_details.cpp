#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    char name[20], mob[10];

    void inputData()
    {
        cout << "Enter your name:";
        cin >> name;
        cout << "Enter your roll number:";
        cin >> roll;
        cout << "Enter your mobile number:";
        cin >> mob;
    }
    void displayData()
    {
        cout << "\nRoll = " << roll << endl;
        cout << "Name = " << name << endl;
        cout << "Mobile number : " << mob << endl;
    }
};

int main()
{
    Student s1;
    s1.inputData();
    s1.displayData();
    return 0;
}