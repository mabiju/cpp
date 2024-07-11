#include <iostream>
using namespace std;

class myname
{
public:
    char name[10];
    void input()
    {
        cout << "Enter your name:";
        cin >> name;
    }
    void display()
    {
        input();
        cout << "You're " << name;
    }
};

int main()
{
    myname me;
    me.display();
    return 0;
}