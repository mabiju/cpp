#include <iostream>
#include <limits>
using namespace std;

int main()
{
    cout << "Min Short Int : " << numeric_limits<short>::min() << endl;
    cout << "Max Short Int : " << numeric_limits<short>::max() << endl;
    cout << "Min Unsigned Short Int : " << numeric_limits<unsigned short>::min() << endl;
    cout << "Max Unsigned Short Int : " << numeric_limits<unsigned short>::max() << endl;
    cout << "Min Unsigned Int : " << numeric_limits<unsigned int>::min() << endl;
    cout << "Max Unsigned Int : " << numeric_limits<unsigned int>::max() << endl;
    cout << "Min Int : " << numeric_limits<int>::min() << endl;
    cout << "Max Int : " << numeric_limits<int>::max() << endl;
    cout << "Min Long Int : " << numeric_limits<long int>::min() << endl;
    cout << "Max Long Int : " << numeric_limits<long int>::max() << endl;
    cout << "Min Unsigned Long Int : " << numeric_limits<unsigned long int>::min() << endl;
    cout << "Max Unsigned Long Int : " << numeric_limits<unsigned long int>::max() << endl;
    cout << "Min Long Long Int : " << numeric_limits<long long>::min() << endl;
    cout << "Max Long Long Int : " << numeric_limits<long long>::max() << endl;
    cout << "Min Unsigned Long Long Int : " << numeric_limits<unsigned long long int>::min() << endl;
    cout << "Max Unsigned Long Long Int : " << numeric_limits<unsigned long long int>::max() << endl;
    return 0;
}