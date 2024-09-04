#include <iostream>
using namespace std;

class College
{
public:
    virtual void display()
    {
        cout << "Good morning students." << endl;
    }
};

class ICT : public College
{
public:
    void display()
    {
        cout << "Hi from ICT department." << endl;
    }
};
class Maths : public College
{
public:
    void display()
    {
        cout << "Hello from Maths department." << endl;
    }
};

int main()
{
    College *ptr;
    ICT Kale;
    Maths Kali;

    ptr = &Kale;
    ptr->display();

    ptr = &Kali;
    ptr->display();
    return 0;
}