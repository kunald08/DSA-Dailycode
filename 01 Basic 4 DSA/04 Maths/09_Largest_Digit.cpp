#include <iostream>
using namespace std;

int largestDigitInNumber(int n)
{
    int largeDigit = 0;
    while (n > 0)
    {
        int ld = n % 10;
        if (largeDigit < ld) largeDigit = ld;
        n /= 10;
    }
    return largeDigit;

}

int main()
{
    int n; cin >> n;
    cout << largestDigitInNumber(n);

    return 0;
}