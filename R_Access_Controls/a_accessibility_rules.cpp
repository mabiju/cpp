#include <iostream>
using namespace std;

class SuperClass
{
public:
    int a;

protected:
    int b;

private:
    int c;
};

class PublicSub : public SuperClass
{
    // a is public
    // b is protected
    // c is not accessible from PublicSub
};

class ProtectedSub : protected SuperClass
{
    // a is protected
    // b is protected
    // c is not accessible from ProtectedSub
};

class PrivateSub : private SuperClass
{
    // a is private
    // b is private
    // c is not accessible from PrivateSub
};

int main()
{
    return 0;
}