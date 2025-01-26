#include <bits/stdc++.h>
using namespace std;

int printGCD(int n, int m)
{
    // int gcd = 1;
    // for (int i = 1; i <= min(n, m); i++)
    // {
    //     if (n % i == 0 && m % i == 0)
    //     {
    //         gcd = i;
    //     }
    // }
    // return gcd;

    int gcd = 1;
    for (int i = min(n, m); i >= 1; i--)
    {
        if (n % i == 0 && m % i == 0)
        {
            gcd = i;
            break;
        }
    }
    return gcd;
}

// equlidean algo-> gcd(a, b) = gcd(a-b, b), where a>b -> go on till one of get 0 than other is gcd.
int printGCD2(int n, int m)
{
    while (n > 0 && m > 0)
    {
        if (n > m)
            n = n % m;
        else
            m = m % n;
    }
    if (n == 0)
        return m;
    return n;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << printGCD2(n, m);
    return 0;
}