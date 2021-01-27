#include <iostream>

using namespace std;

int main()
{
    string name;
    int age;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello " << name << ".  How old are you? ";
    cin >> age;
    cout << name << " is " << age << " years old!";
    return 0;
}