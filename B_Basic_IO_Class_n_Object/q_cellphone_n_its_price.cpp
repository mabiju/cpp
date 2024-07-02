#include <iostream>
using namespace std;

class CellPhones
{
public:
    int price;
    string storage;
};

int main()
{
    CellPhones S22;
    CellPhones G7;

    S22.price = 150000;
    S22.storage = "512GB";

    G7.price = 28500;
    G7.storage = "32GB";

    cout << "The price of S22 is Rs. " << S22.price << " and storage is " << S22.storage << endl;
    cout << "The price of G7 is Rs. " << G7.price << " and storage is " << G7.storage << endl;
    return 0;
}