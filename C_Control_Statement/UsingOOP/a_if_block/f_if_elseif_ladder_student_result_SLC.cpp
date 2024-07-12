#include <iostream>
using namespace std;

class Student
{
    int nep, eng, sci, math, acc;

public:
    void inputMarks()
    {
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
    }
    void getTotal()
    {
        cout << "Total marks = " << (nep + eng + sci + math + acc) << endl;
    }
    void getPercentage()
    {
        cout << "Percentage = " << (float)(nep + eng + sci + math + acc) / 5.0 << endl;
    }
    void result()
    {
        if (nep > 31 && eng > 31 && sci > 31 && math > 31 && acc > 31)
        {
            getPercentage();
            double total = nep + eng + sci + math + acc;
            double per = (float)total / 5.0;
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
    }
};

int main()
{
    Student ram;
    ram.inputMarks();
    ram.getTotal();
    ram.result();
    return 0;
}