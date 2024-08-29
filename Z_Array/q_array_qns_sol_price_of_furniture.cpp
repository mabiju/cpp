#include <iostream>
#include <iomanip>
using namespace std;

class Furniture
{
    int price;
    char warranty[20];
    char name[20];

public:
    void getprice();
    void display();
};
void Furniture::getprice()
{
    cout << "Name:";
    cin >> name;
    cout << "Enter the price:";
    cin >> price;
    cout << "Enter the warranty:";
    cin >> warranty;
}
void Furniture::display()
{
    cout << "Name:" << name << endl;
    cout << "Price=" << price << endl;
    cout << "Warrenty=" << warranty << endl;
}

int main()
{
    Furniture desk;
    desk.getprice();
    desk.display();

    Furniture bench;
    bench.getprice();
    bench.display();
    return 0;
}
