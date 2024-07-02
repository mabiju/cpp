#include <iostream>
using namespace std;

class Calculate
{
public:
    double p, t, r;

    void inputData()
    {
        cout << "Enter principal amount:";
        cin >> p;
        cout << "Enter time:";
        cin >> t;
        cout << "Enter rate of interest:";
        cin >> r;
    }
    void displaySi()
    {
        cout << "Interest = " << (p * t * r) / 100;
    }
};

int main()
{
    Calculate c1;
    c1.inputData();
    c1.displaySi();
    return 0;
}