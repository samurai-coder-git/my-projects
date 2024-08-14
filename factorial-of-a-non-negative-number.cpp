#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: \n";
    cin >> number;
    int fact = 1;
    for (int i = 0; i < number; i++)
    {
        fact = fact * (i + 1);
    }
    cout << " the factorial of " << number << " is " << fact;

    return 0;
}