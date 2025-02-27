#include <bits/stdc++.h>
using namespace std;

// kadanes algo => A Sub Array with sum less than 0 
// will always reduce aur answer and so this type of subarray 
// cannot be a part of the subarray.
int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN;
    int curSum = 0;

    for(int i = 0; i < nums.size(); i++)
    {
        curSum = max(curSum, 0);
        curSum += nums[i];
        maxSum = max(maxSum, curSum);
    }
    return maxSum;
}

void printSubArrayWithMaxSum(vector<int>& nums)
{
    int maxSum = INT_MIN;
    int curSum = 0;

    int start = 0;
    int ansStart = -1, ansEnd = -1;

    for(int i = 0; i < nums.size(); i++)
    {
        if(curSum == 0) start = i;

        curSum += nums[i];
        
        if(curSum > maxSum)
        {
            maxSum = curSum;
            ansStart = start;
            ansEnd = i;
        }
        if(curSum < 0) curSum = 0;
    }
    for(int i = ansStart; i <= ansEnd; i++)
    {
        cout << nums[i] <<" ";
    }
}

int main()
{
    vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = arr.size();
    int maxSum = maxSubArray(arr);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    printSubArrayWithMaxSum(arr);
    return 0;
}