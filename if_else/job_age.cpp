
#include <iostream>

using namespace std;

int main()
{

    int age;

    cout << "Please Enter the number: ";

    cin >> age;

    if (age < 18)
    {
        cout << "Not eligible for the job " << age;
    }
    else if (age <= 57)
    {
        cout << "eligible for the job ";
        if (age >= 55)
        {
            cout << ", but retirement soon. ";
        }
    }

    else
    {
        cout << "Not eligible for the job " << age;
    }
}