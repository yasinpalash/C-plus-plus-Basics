#include <iostream>

using namespace std;

/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade.
*/
int main()
{

    cout << "Input a int : ";
    int a;
    cin >> a;

    if (a < 25)
    {
        cout << "Your grade is F";
    }
    else if (a >= 25 && a < 45)
    {
        cout << "Your grade is E";
    }
    else if (a >= 45 && a < 50)
    {
        cout << "Your grade is D";
    }
    else if (a >= 50 && a < 60)
    {
        cout << "Your grade is C";
    }
    else if (a >= 60 && a < 80)
    {
        cout << "Your grade is B";
    }
    else if (a >= 80)
    {
        cout << "Your grade is A";
    }

    return 0;
}