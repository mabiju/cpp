#include <iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Constructor is executed..." << endl;
    }

    // destructor
    ~Student()
    {
        cout << "Destructor is invoked..." << endl;
    }
};

int main()
{
    Student s1, s2;
    return 0;
}