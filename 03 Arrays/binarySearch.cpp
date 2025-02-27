#include "bits/stdc++.h"
using namespace std;

int binarySearch(vector<int> &arr, int k)
{
    int n = arr.size();
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (k > arr[m])
        {
            s = m + 1;
        }
        else if (k < arr[m])
        {
            e = m - 1;
        }
        else
        {
            return m;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {10, 22, 30, 40, 90, 100};
    int k = 100;

    cout << binarySearch(arr, k);
    return 0;
}
