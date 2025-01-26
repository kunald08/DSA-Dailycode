#include"bits/stdc++.h"
using namespace std;

void printAllDivisior1(int n)
{
    for(int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i <<" ";
        }
    }
}
void printAllDivisior2(int n)
{
    vector<int>ls; 
    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0) 
        {
            ls.push_back(i);
            if (n/i != i)
            {
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it: ls)
    {
        cout << it <<" ";
    }
}
int main()
{
    int n; cin >> n;
    printAllDivisior1(n); cout << "\n";
    printAllDivisior2(n);
    return 0;
}