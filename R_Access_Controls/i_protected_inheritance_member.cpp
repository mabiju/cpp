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

class ProtectedSub : protected Super
{
public:
    // method to access protected member from Super class
    int getProtectedField()
    {
        return protected_field;
    }

    // method to access public member from Super class
    int getPublicField()
    {
        return public_field;
    }
};

int main()
{
    ProtectedSub obj;
    // cout << "Private =" << obj.getPrivateField() << endl;
    cout << "Private field cannot be accessed" << endl;
    cout << "Protected =" << obj.getProtectedField() << endl;
    cout << "Public = " << obj.getPublicField();
    return 0;
}