#include <iostream>
using namespace std;

class Temperature
{
    float celsius;

public:
    void input()
    {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }
    void output()
    {
        cout << "Temperature in Fahrenheit = " << (float)(9.0 / 5.0 * celsius + 32.0);
    }
};

int main()
{
    Temperature t1;
    t1.input();
    t1.output();
    return 0;
}