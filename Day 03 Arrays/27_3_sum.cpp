#include <bits/stdc++.h>
using namespace std;

//Naive:
vector<vector<int>> triplet(vector<int> &nums)
{
    set<vector<int>>res;
    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = i+1; j < nums.size(); j++)
        {
            for(int k = j+1; k < nums.size(); k++)
            {
                if(nums[i]+nums[j]+nums[k] == 0)
                {
                    res.insert({nums[i], nums[j], nums[k]});
                }
            }
        }
    }
    return vector<vector<int>>(res.begin(), res.end());
}   // TC: O(N3 * log(no. of unique triplets))

int main()
{
    vector<int> arr = { -1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = triplet(arr);
    for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";

    return 0;
}