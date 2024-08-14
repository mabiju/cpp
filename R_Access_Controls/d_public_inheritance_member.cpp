#include <iostream>
using namespace std;

class Super
{
private:
    int private_field = 10;

protected:
    int protected_field = 20;

public:
    int public_field = 30;
    // method to access private member
    int getPrivateField()
    {
        return private_field;
    }
};

class PublicSub : public Super
{
public:
    // method to access protected member from Super class
    int getProtectedField()
    {
        return protected_field;
    }
};

int main()
{
    PublicSub obj;
    cout << "Private =" << obj.getPrivateField() << endl;
    cout << "Protected =" << obj.getProtectedField() << endl;
    cout << "Public = " << obj.public_field;
    return 0;
}