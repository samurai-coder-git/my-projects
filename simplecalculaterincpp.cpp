#include <iostream>
using namespace std;
int main()
{
    cout << "simple calculater \n";
    cout << "1 for addition \n";
    cout << "2 for subtraction \n";
    cout << "3 for multiplication \n";
    cout << "4 for division \n";
    int choice;
    double number1;
    double number2;
    cout << "enter your choice \n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "enter number 1 \n";
        cin >> number1;
        cout << "enter number 2 \n";
        cin >> number2;
        cout << "addition of " << number1 << " and " << number2 << " is " << number1 + number2;
        break;
    case 2:
        cout << "enter number 1 \n";
        cin >> number1;
        cout << "enter number 2 \n";
        cin >> number2;
        cout << "subtraction of " << number1 << " and " << number2 << " is " << number1 - number2;
        break;
    case 3:
        cout << "enter number 1 \n";
        cin >> number1;
        cout << "enter number 2 \n";
        cin >> number2;
        cout << "multiplication of " << number1 << " and " << number2 << " is " << number1 * number2;
        break;
    case 4:
        cout << "enter number 1 \n";
        cin >> number1;
        cout << "enter number 2 \n";
        cin >> number2;
        if (number2 == 0)
        {
            cout << "can't divide by zero \n";
        }
        else
            cout << "division of " << number1 << " and " << number2 << " is " << number1 / number2 << endl;
        break;
    default:
        cout << "invalid choice \n";
        break;
    }
    return 0;
}