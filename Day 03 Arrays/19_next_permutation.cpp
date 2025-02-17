#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int idx = -1;
    int n = nums.size();
    
    //Step 1: Find the break-point
    for (int i = n - 2; i >= 0; i--) 
    { 
        if (nums[i] < nums[i + 1]) 
        {
            idx = i;
            break;
        }
    }
    
    //Step 2: If no break-point reverse the array (last permutation case)
    if (idx == -1) 
    {
        reverse(nums.begin(), nums.end());
        return;  // Fix: Return early to avoid unnecessary steps
    }
    
    // Step 3: Find the next larger element and swap
    for (int i = n - 1; i > idx; i--) 
    { 
        if (nums[i] > nums[idx]) 
        {
            swap(nums[i], nums[idx]);
            break;
        }
    }
    
    // Step 4: Reverse the right half
    reverse(nums.begin() + idx + 1, nums.end());
}

int main()
{
    vector<int> A = {2, 1, 5, 4, 3, 0, 0};
    nextPermutation(A);

    cout << "The next permutation is: [";
    for (auto it : A) {
        cout << it << " ";
    }
    cout << "\n";
    return 0;
}

