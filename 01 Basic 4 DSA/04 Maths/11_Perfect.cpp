#include <iostream>
#include <cmath>
using namespace std;

bool isPerfect(int n)
{
    int sum = 0;

    for (int i = 1; i < n; ++i)
        if (n % i == 0)
            sum = sum + i;

    if (sum == n)
        return true;
    return false;
}

bool isPerfect2(int n)
{
    if (n == 1)
        return false;

    int sum = 0;

    for (int i = 1; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            sum = sum + i;

            /* Add the counterpart divisor
            if it's different from i and
            if it is not n itself */
            if (n / i != n && i != n / i)
                sum = sum + (n / i);
        }
    }
    if (sum == n)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    if (isPerfect2(n))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}