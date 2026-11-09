#include <iostream>
using namespace std;

int countOddDigit(int n)
{
    int oddCnt = 0;

    while (n > 0)
    {
        int ld = n % 10;
        if (ld % 2 != 0) oddCnt++;
        n /= 10;
    }
    return oddCnt;
}

int main()
{
    int n;
    cin >> n;
    cout << countOddDigit(n);

    return 0;
}