#include <bits/stdc++.h>
using namespace std;

// Naive => TC: O(n^2) | SC: O(1)
int maxSum(vector<int>& arr)
{
    int n = arr.size();
    int res = arr[0];
    for(int i = 0; i < n; i++)
    {
        int curr = 0;
        for(int j = i; j < n; j++)
        {
            curr += arr[j];
            res = max(res, curr);
        }
    }
    return res;
}
// Efficient => TC: O(n) | SC: O(1)
int maxSum2(vector<int>& arr)
{
    int res = 0;
    int maxEnding = arr[0];
    for(int i = 1; i < arr.size(); i++)
    {
        maxEnding = max(maxEnding+arr[i], arr[i]);
        res = maxEnding;
    }
    return res;
}
int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    
    return 0;
}

