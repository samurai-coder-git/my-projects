#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float radius;
    float area;
    float pi = 3.141592653589793238462643383279502884197;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    area = pi * radius * radius;
    cout << "the area of a cirlce is " << area;
    return 0;
}