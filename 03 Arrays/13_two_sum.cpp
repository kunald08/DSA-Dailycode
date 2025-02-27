#include <bits/stdc++.h>
using namespace std;

// Naive => TC: O(n^2) | SC: O(1)
vector<int> twoSum(vector<int>& arr, int target)
{
    for(int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            if (arr[i]+arr[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {};
}

// Better 
vector<int> twoSum2(vector<int>& arr, int target)
{
    unordered_map<int, int> mpp;
    for(int i = 0; i < arr.size(); i++)
    {
        int moreNeeded = target - arr[i];
        if(mpp.find(moreNeeded) != mpp.end())
            return {mpp[moreNeeded], i};
        mpp[arr[i]] = i;
    }
    return {};
}

// Efficient
vector<int> twoSum3(vector<int>& arr, int target)
{
    sort(arr.begin(), arr.end());
    int l = 0, r = arr.size()-1;
    while(l < r)
    {
        int sum = arr[l] + arr[r];
        if(sum == target) return {l, r};
        else if(sum > target) r--;
        else l++;
    }
    return {};
}

int main()
{
    return 0;
}