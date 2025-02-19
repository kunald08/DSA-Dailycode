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

vector<vector<int>> triplet2(vector<int> &nums)
{
    set<vector<int>> st;
    for(int i = 0; i < nums.size(); i++)
    {
        set<int> hashset;
        for(int j = i+1; j < nums.size(); j++)
        {
            int third = -(nums[i] + nums[j]);

            if(hashset.find(third) != hashset.end())
            {
                vector<int> temp = {nums[i], nums[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(nums[j]);
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

//Efficient
vector<vector<int>> triplet3(vector<int> &nums)
{
    vector<vector<int>>ans;

    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size(); i++)
    {
        // remove duplicate
        if(i != 0 && nums[i] == nums[i-1]) continue;

        int j = i+1;
        int k = nums.size()-1;

        while(j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if(sum < 0) j++;
            else if(sum > 0) k--;
            else
            {
                vector<int>temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++; k--;

                // skip duplicate
                while(j < k && nums[j] == nums[j-1]) j++;
                while(j < k && nums[k] == nums[k+1]) k--;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = { -1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = triplet3(arr);
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