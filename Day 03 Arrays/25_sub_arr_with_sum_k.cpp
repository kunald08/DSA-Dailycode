#include <bits/stdc++.h>
using namespace std;

// Naive: ~ O(N^3)
int findAllSubarraysWithGivenSum(vector<int> &arr, int k)
{
    int n = arr.size(); // size of the given array.
    int cnt = 0;        // Number of subarrays:

    for (int i = 0; i < n; i++)
    { // starting index i
        for (int j = i; j < n; j++)
        { // ending index j

            // calculate the sum of subarray [i...j]
            int sum = 0;
            for (int K = i; K <= j; K++)
                sum += arr[K];

            // Increase the count if sum == k:
            if (sum == k)
                cnt++;
        }
    }
    return cnt;
}

// Better: ~ O(N^2)
int findAllSubarraysWithGivenSum2(vector<int> &arr, int k)
{
    int n = arr.size(); // size of the given array.
    map<int, int> mpp;
    int preSum = 0, cnt = 0;

    mpp[0] = 1; // Setting 0 in the map.
    for (int i = 0; i < n; i++)
    {
        // add current element to prefix Sum:
        preSum += arr[i];

        // Calculate x-k:
        int remove = preSum - k;

        // Add the number of subarrays to be removed:
        cnt += mpp[remove];

        // Update the count of prefix sum
        // in the map.
        mpp[preSum] += 1;
    }
    return cnt;
}

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int,int> mp;
    mp[0] = 1;
    int sum = 0;
    int cnt = 0;
    for(int it:nums){
        sum += it;
        if(mp.find(sum-k)!=mp.end()){
            cnt += mp[sum-k];
        }
        mp[sum]++;
    }
    return cnt;
}

int main()
{
    vector<int> arr = {3, 1, 2, 4};
    int k = 6;
    int cnt = findAllSubarraysWithGivenSum(arr, k);
    cout << "The number of subarrays is: " << cnt << "\n";
    return 0;
}
