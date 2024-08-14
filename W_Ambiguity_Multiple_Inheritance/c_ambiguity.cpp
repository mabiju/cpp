#include <iostream>
using namespace std;

class BasicSalary
{
public:
    int bs;
    void getAmount()
    {
        cout << "Enter your basic salary:";
        cin >> bs;
    }
};

class Bonus
{
public:
    int bonus;
    void getAmount()
    {
        cout << "Enter your bonus amount:";
        cin >> bonus;
    }
};

class Employee : public BasicSalary, public Bonus
{
public:
    void total_salary()
    {
        BasicSalary::getAmount();
        Bonus::getAmount();
        cout << "Total Salary = " << (bs + bonus) << endl;
    }
};

int main()
{
    Employee e1;
    e1.total_salary();
    return 0;
}