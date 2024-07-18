#include <iostream>
using namespace std;

class UserName
{
public:
    string name;
    void inputName()
    {
        cout << "Enter your name :";
        cin >> name;
    }
    void displayName()
    {
        cout << "Your name is " << name;
    }
};

int main()
{
    UserName u1;
    u1.inputName();
    u1.displayName();
    return 0;
}
/*
1.	Documentation Section (Optional): Comments
2.	Linking section:
    a.	Preprocessor directive, library, header section
    b.	Namespace declaration
3.	Class Definition Section:
    a.	Class body section
        i.	Class attributes
        ii.	Methods / Member function
4.	Main Function Section:
    a.	Function body section */
