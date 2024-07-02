#include <iostream>
using namespace std;

class Student
{
public:
    // defining a field
    string name;

    // defining a function/method
    void inputData()
    {
        cout << "Enter your name : ";
        cin >> name;
    }
    void displayData()
    {
        cout << "Your name is = " << name;
    }
};

int main()
{
    Student s1;
    s1.inputData();
    s1.displayData();
    return 0;
}dd