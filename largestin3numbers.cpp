#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int num3;
    cout << "enter num 1 \n";
    cin >> num1;
    cout << "enter num 2 \n";
    cin >> num2;
    cout << "enter num 3 \n";
    cin >> num3;
    if (num1 > num2 && num1 > num3)
    {
        cout << "num 1 is the largest number \n";
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "num 2 is the largest number \n";
    }
    else
        cout << "num 3 is larger " << endl;
    return 0;
}