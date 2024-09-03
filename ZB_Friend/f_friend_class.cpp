#include <iostream>
using namespace std;

class Boyfriend
{
    int age;

public:
    Boyfriend()
    {
        age = 21;
    }

    // Friend Class
    friend class GirlFriend;
};

class GirlFriend
{
public:
    void displayAge(Boyfriend &a)
    {
        cout << "The age = " << a.age;
    }
};

int main()
{
    Boyfriend Ram;
    GirlFriend Sita;
    Sita.displayAge(Ram);
    return 0;
}