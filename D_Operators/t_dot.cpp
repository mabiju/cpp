#include <iostream>
using namespace std;

class Student{
    public:
    int marks;
};

int main()
{
    Student s1;
    s1.marks = 85; // dot operator
    cout << "The marks is = " << s1.marks;
    return 0;
}