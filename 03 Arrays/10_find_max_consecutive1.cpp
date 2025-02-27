#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums)
{
    int ans = 0;
    int cnt = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == 1) cnt += 1;
        else cnt = 0;
        ans = max(ans, cnt);
    }
    return ans;
}
int main()
{
    vector < int > nums = { 1, 1, 0, 1, 1, 1 };
    int ans = findMaxConsecutiveOnes(nums);
    cout << "The maximum  consecutive 1's are " << ans;
    return 0; 
}