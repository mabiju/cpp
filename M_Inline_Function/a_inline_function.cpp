#include <iostream>
using namespace std;

inline int displayNum(int a){
    return a;
}

int main()
{
    cout << "The number is " << displayNum(67) << endl;
    cout << "The number is " << displayNum(12) << endl;
    cout << "The number is " << displayNum(6) << endl;
    cout << "The number is " << displayNum(687) << endl;
    cout << "The number is " << displayNum(68887) << endl;
    cout << "The number is " << displayNum(6007) << endl;
    // similar as cout << "The number is " << 67 << endl;
    return 0;
}