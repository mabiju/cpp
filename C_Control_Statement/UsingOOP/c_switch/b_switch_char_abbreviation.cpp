#include <iostream>
using namespace std;

class LetterPrint
{
    char a, b;

public:
    void input()
    {
        cout << "Enter a letter from a to e to get its abbreviation:";
        cin >> a;
    }
    void output()
    {
        char b = (char)tolower(a);
        switch (b)
        {
        case 'a':
            cout << "Apple";
            break;
        case 'b':
            cout << "Ball";
            break;
        case 'c':
            cout << "Cat";
            break;
        case 'd':
            cout << "Dog";
            break;
        case 'e':
            cout << "Elephant";
            break;

        default:
            cout << "Invalid input.";
            break;
        }
    }
};

int main()
{
    LetterPrint l1;
    l1.input();
    l1.output();
    return 0;
}