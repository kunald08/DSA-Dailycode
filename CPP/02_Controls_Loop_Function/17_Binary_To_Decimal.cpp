#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int temp = n;

    int val = 0;
    int base = 1;

    while (n > 0)
    {
        int last_digit = n % 10;
        val = val + (last_digit * base);
        n = n / 10;
        base = base * 2;
    }
    cout << "Decimal of " << temp << " is " << val;
    return 0;
}