#include <iostream>
#include <string>

using namespace std;
string get_name()
{
     cout << "enter your name \n";
     string name{};
     getline(cin, name);
     return name;
}
int get_age()
{
     cout << "enter your age \n";
     int age;
     cin >> age;
     return age;
}
int main()

{
     string name = get_name();
     int age = get_age();
     cout << "hello " << name << " you are " << age << " year old ";
     return 0;
}