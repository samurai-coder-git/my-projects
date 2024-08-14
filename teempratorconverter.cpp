#include <iostream>
using namespace std;
int main()
{
    int celsius;
    float fehrenheit;
    cout << "Enter the temperature in celsius:\n ";
    cin >> celsius;
    fehrenheit = (celsius * 9 / 5) + 32;
    cout << celsius << " in fehrenheit is " << fehrenheit;
    return 0;
}