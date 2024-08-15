#include <iostream>
using namespace std;

class GrandDad
{
public:
    GrandDad()
    {
        cout << "Dafault constructor from GrandDad class is called " << endl;
    }
    ~GrandDad()
    {
        cout << "Destructor from GrandDad is called " << endl;
    }
};
class Dad
{
public:
    Dad()
    {
        cout << "Dafault constructor from Dad class is called " << endl;
    }
    ~Dad()
    {
        cout << "Destructor from Dad is called " << endl;
    }
};

class Son : public GrandDad, public Dad
{
public:
    Son()
    {
        cout << "Dafault constructor from Son class is called " << endl;
    }
    ~Son()
    {
        cout << "Destructor from Son is called " << endl;
    }
};

int main()
{
    Son s1;
    return 0;
}