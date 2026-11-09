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
vector<int> twoSum3(vector<int>& nums, int target)
{
    vector<pair<int, int>> arr;


    for (int i = 0; i < nums.size(); i++)
        arr.push_back({nums[i], i});

    sort(arr.begin(), arr.end());
    int l = 0, r = arr.size() - 1;

    while (l < r) 
    {
        int sum = arr[l].first + arr[r].first;
        if (sum == target) return {arr[l].second, arr[r].second};
        else if (sum > target) r--;
        else l++;
    }
    return {};
}

int main()
{
    return 0;
}