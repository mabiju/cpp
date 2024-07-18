#include <iostream>
using namespace std;

int main()
{
    wchar_t wletter = L'A';
    cout << wletter << endl; // 65
    wcout << wletter << endl; // A
    cout << sizeof(wletter);
    return 0;
}

/* Code explanation
Line 6: We declare a wide char type and initialize with the value 'A'.
Line 7: We use wcout to display the value of a wide char. The w prefix is used before every char type function to make it work with wide char data types, for example, wcout, wcin, and more.
Line 9: The sizeof() function returns the size in bytes of the wide char variable. */