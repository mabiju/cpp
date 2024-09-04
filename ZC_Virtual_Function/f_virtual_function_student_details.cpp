#include <iostream>
using namespace std;

class student
{
private:
    int x;
    float y;

public:
    virtual void getdata();
    virtual void display();
};
class school : public student
{
private:
    int roll;
    char name[20];

public:
    void getdata();
    void display();
};
void student ::getdata() {}
void student ::display() {}

void school ::getdata()
{
    cout << "Enter Roll of  the Student:";
    cin >> roll;
    cout << "Enter name of  the student:";
    cin >> name;
}
void school ::display()
{
    cout << "Name is :" << name << endl;
    cout << "Roll no is :" << roll << endl;
}

int main()
{
    student *ptr;
    school obj;
    ptr = &obj;
    ptr->getdata();
    ptr->display();
    return 0;
}