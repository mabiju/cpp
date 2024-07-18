#include <iostream>
using namespace std;

int main()
{
    wchar_t wClz[] = L"Sanothimi Campus";
    wcout << wClz;
    return 0;
}

// Just like a char array, wchar_t arrays can also store strings, and wcout can display this array as a string.