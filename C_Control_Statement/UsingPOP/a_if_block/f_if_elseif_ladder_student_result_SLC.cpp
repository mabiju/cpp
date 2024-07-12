#include <iostream>
using namespace std;

int main()
{
    double nep, eng, sci, math, acc, total, per;

    cout << "\nEnter marks for each subjects not exceed than 100." << endl;
    cout << "--------------------------------------------------" << endl;

    cout << "Enter marks in Nepali:";
    cin >> nep;
    cout << "Enter marks in English:";
    cin >> eng;
    cout << "Enter marks in Science:";
    cin >> sci;
    cout << "Enter marks in Maths:";
    cin >> math;
    cout << "Enter marks in Account:";
    cin >> acc;

    total = nep + eng + sci + math + acc;
    cout << "Total marks = " << total << endl;

    if (nep > 31 && eng > 31 && sci > 31 && math > 31 && acc > 31)
    {
        per = total / 5;
        cout << "Percentage = " << per << endl;

        if (per >= 80)
        {
            cout << "Distinction" << endl;
        }
        else if (per >= 60)
        {
            cout << "First Division" << endl;
        }
        else if (per >= 45)
        {
            cout << "Second Division" << endl;
        }
        else
        {
            cout << "Third division" << endl;
        }
    }
    else
    {
        cout << "Better luck next time.";
    }
    return 0;
}
