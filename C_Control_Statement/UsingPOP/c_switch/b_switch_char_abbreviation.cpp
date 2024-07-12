#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "Enter a letter from a to e to get its abbreviation:";
    cin >> a;
    char b = (char) tolower(a);
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