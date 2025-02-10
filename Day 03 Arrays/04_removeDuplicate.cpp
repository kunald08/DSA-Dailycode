#include <bits/stdc++.h>
using namespace std;

// Naive - set(inserting)-> logN -> TC: N*logN || SC: O(n)
int removeDuplicates(vector<int>& nums)
{
    int n = nums.size();
    set<int>st;
    for (int i = 0; i < n; i++)
    {
        st.insert(nums[i]);
    }
    int index = 0;
    for(auto it: st)
    {
        nums[index] = it;
        index++;
    }
    return index;
}

// Better -> TC: O(n) || SC: O(1)
int removeDuplicates(vector<int>& nums)
{
    int n = nums.size();
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (nums[i] != nums[j])
        {
            nums[i+1] = nums[j];
            i++;
        }
    }
    return i+1;
}
// Efficient
int main()
{
    return 0;
}