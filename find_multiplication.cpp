#include <iostream>
using namespace std;
int main()
{
     cout << "enter number to find multiplication table \n";
     int number;
     cin >> number;
     for (int i = 1; i <= 10; i++)
     {
          cout << number << " * " << i << " = " << number * i << endl;
     }

     return 0;
}