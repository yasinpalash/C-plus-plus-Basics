#include <iostream>

using namespace std;

int main(

)
{
    const int x = 10;
    const int y = 5;

    switch (x + y)
    {
    case 15:
        cout << "The result is 15";

        break;
    case 20:
        cout << "The result is 20";
        break;

    default:
        break;
    }
    return 0;
}
