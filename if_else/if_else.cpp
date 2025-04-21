#include <iostream>

using namespace std;

int main()
{

    // write a program that takes an integer input from the user and prints if you are adult or not
    cout << "Input a int: ";

    int age;
    cin >> age;

    if (age >= 18)
    {
        cout << "You are adult";
    }
    else
    {
        cout << "you not adult";
    }
}