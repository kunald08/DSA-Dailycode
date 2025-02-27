#include "bits/stdc++.h"
using namespace std;

bool isPrime(int N)
{
    if (N == 1) return false;
    if (N == 2) return true;
    for (int i = 2; i <= sqrt(N); i++)
    {
        if (N % i == 0) return false;
    }
    return true;
}
int main()
{
    int n; cin >> n;
    cout << isPrime(n);
    return 0;
}