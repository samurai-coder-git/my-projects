#include <iostream>
using namespace std;
int main()
{
     int fib1 = 0;
     int fib2 = 1;
     int fib_next;
     int sum_of_fib = fib1 + fib2;
     cout << "how many fib you want to calculate \n";
     int fib_to_cal;
     cin >> fib_to_cal;
     cout << "Fibonacci sequence: " << endl;
     cout << fib1 << endl;
     cout << fib2 << endl;

     for (int i = 2; i < fib_to_cal; i++)
     {
          fib_next = fib1 + fib2;
          fib1 = fib2;
          fib2 = fib_next;
          cout << fib_next << endl;
          sum_of_fib = sum_of_fib + fib_next;
     }
     cout << "the sum of fibonaci numbers is " << sum_of_fib;
     return 0;
}