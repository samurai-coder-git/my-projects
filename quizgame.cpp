#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int guess;
    int number;
    srand(time(0));
    number = rand() % 100 + 1;
    cout << "welcome to quiz game" << endl;
    cout << "enter your guess between 1 and 100" << endl;
    cin >> guess;
    while (number != guess)
    {

        cout << "guess another number" << endl;
        cin >> guess;
        if (guess < number)
        {
            cout << "your guess is too low \n";
        }
        if (guess > number)
        {
            cout << "your guess is too high \n";
        }
    }
    cout << " correct answer";

    return 0;
}