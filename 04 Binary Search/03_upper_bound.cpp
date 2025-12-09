#include "bits/stdc++.h"
using namespace std;
// upper bound -> lowest index:  >x

int upperBound(vector<int> &arr, int x, int n)
{
    for(int i = 0; i < n; i++)
        if (arr[i] > n) return i;
    return n;
}


int upperBound2(vector<int> &arr, int x, int n)
{
    int s = 0, e = n-1;
    int ans = n;
    while(s <= e)
    {
       int m = e-(e-s)/2;

        if(arr[m] > x)
        {
            ans = m;
            e = m-1;
        }
        else s = m+1;
    }
    return ans;
}

int main()
{
    vector<int> arr = {3, 5, 8, 9, 15, 19};
    int n = 6, x = 9;
    int ind = upperBound2(arr, x, n);
    cout << "The upper bound: " << ind << "\n";
    return 0;
}