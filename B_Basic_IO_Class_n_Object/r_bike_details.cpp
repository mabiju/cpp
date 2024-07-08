// data abstraction in c++
#include <iostream>
using namespace std;

class Bikes
{
    int price;
    char model[5];

public:
    void getData()
    {
        cout << "Enter model :";
        cin >> model;
        cout << "Enter price :";
        cin >> price;
    }
    void displayData()
    {
        cout << "Model = " << model << endl;
        cout << "Price = " << price << endl;
    }
};

int main()
{
    Bikes pulsar, apache, kawasaki;
    pulsar.getData();
    apache.getData();
    kawasaki.getData();
    cout << endl;
    pulsar.displayData();
    apache.displayData();
    kawasaki.displayData();
    return 0;
}