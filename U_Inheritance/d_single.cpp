#include <iostream>
using namespace std;

class Bikes
{
public:
    char model[30] = "Superlaggera V4";
    int price = 25200000;
};

class Ducati : public Bikes
{
public:
    int tax = 0.13 * price;
    void total_price()
    {
        cout << "Total price = " << (price + tax) << endl;
    }
};

int main()
{
    Ducati d1;
    cout << "Model = " << d1.model << endl;
    cout << "Actual Price = " << d1.price << endl;
    cout << "Tax to pay = " << d1.tax << endl;
    d1.total_price();
    return 0;
}