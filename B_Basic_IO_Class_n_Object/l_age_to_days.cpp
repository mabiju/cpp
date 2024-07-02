#include <iostream>
using namespace std;

class Student
{
    int age;

public:
    void input()
    {
        cout << "Enter your age :";
        cin >> age;
    }
    void output()
    {
        cout << "You are " << 365 * age << " days old";
    }
};

int main()
{
    Student s1;
    s1.input();
    s1.output();
    return 0;
}