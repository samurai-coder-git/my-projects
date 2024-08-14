#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "enter number 1 \n";
    cin >> num1;
    int num2;
    cout << "enter number 2 \n";
    cin >> num2;
    int num3;
    cout << "enter number 3 \n";
    cin >> num3;
    double sum;
    sum = num1 + num2 + num3;
    cout << "the average of these three numbers is " << sum / 3.0;

    return 0;
}