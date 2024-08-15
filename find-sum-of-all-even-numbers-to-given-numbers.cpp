#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number to find the sum \n";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "the sum of the number from 0 to the number is " << sum;

    return 0;
}