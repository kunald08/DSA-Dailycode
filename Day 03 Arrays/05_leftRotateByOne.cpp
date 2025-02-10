#include <bits/stdc++.h>
using namespace std;

void leftRotateOne(vector<int>& arr)
{
    int n = arr.size();
    int temp = arr[0];

    for(int i = 0; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70};
    leftRotateOne(arr);

    for(auto it: arr) cout << it << " ";
    return 0;
}