#include <iostream>
using namespace std;

class Student
{
private:
    int age;

public:
    // 1. Constructor without any arguments
    Student()
    {
        age = 22;
    }

    // 2. Constructor with an argument
    Student(int a)
    {
        age = a;
    }

    int getAge()
    {
        return age;
    }
};

int main()
{
    Student s1, s2(21);

    cout << "Student One Age = " << s1.getAge() << endl;
    cout << "Student Two Age = " << s2.getAge() << endl;

    return 0;
}