#include <iostream>
using namespace std;
int main()
{
    double number;
    cout << "enter a number \n";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "number is even \n";
    }
    else if (number == 0)
    {
        cout << "number is zero \n";
    }
    else
        cout << "the number is odd";
    return 0;
}