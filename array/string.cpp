#include <iostream>

using namespace std;

int main()
{

    string s = "Yasin";
    int len = s.size();

    s[len - 1] = 'g';
    cout << s[len - 1] << endl;
    cout << len << endl;
    cout << s[3];

    return 0;
}