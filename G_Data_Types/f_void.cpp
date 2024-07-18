#include <iostream>
using namespace std;

class Student
{
public:
    void hello()  // use of "void" as function return type
    {
        cout << "Hello Ram" << endl;
    }
};

int main()
{
    Student s1;
    s1.hello();
    return 0;
}