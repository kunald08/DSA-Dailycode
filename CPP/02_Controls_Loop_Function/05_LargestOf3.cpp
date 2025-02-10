#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b and a >= c)
        cout << a << " is Greater\n";
    else if (b >= a and b >= c)
        cout << b << " is Greater\n";
    else
        cout << c << " is Greater\n";
    return 0;
}