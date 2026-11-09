#include <bits/stdc++.h>
using namespace std;

// brute - TC: O(n^2); SC: O(1);
bool containsDuplicate(vector<int>& nums) 
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i+1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                return true;
            }
        }
    }
    return false;
}

// sorting - TC: O(n*logn); SC: O(1) or O(n)
bool containsDuplicate2(vector<int>& nums) 
{

    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i-1] == nums[i])
        {
            return true;
        }
    }
    return false;
}

// Hashset - 
bool containsDuplicate3(vector<int>& nums) 
{
    unordered_set<int> seen;

    for (int n : nums)
    {
        if (seen.count(n)) return true;
        seen.insert(n);
    }
    return false;
}

// Hash Set Length
bool hasDuplicate4(vector<int>& nums) 
{
    return unordered_set<int>(nums.begin(), nums.end()).size() < nums.size();
}

int main()
{

    vector<int> nums = {1, 2, 3, 4, 3, 6};
    cout << containsDuplicate(nums);

    return 0;
}