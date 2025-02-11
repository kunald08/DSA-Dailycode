#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& a, int N) {
    vector<int> hash(N + 1, 0); // Use vector instead of VLA

    // Storing frequencies
    for (int i = 0; i < N; i++) {
        hash[a[i]]++;
    }

    // Checking frequencies for numbers 0 to N
    for (int i = 0; i <= N; i++) { 
        if (hash[i] == 0) {
            return i;
        }
    }

    return -1; // Ensures all paths return a value
}
int missingNumber2(vector<int>& nums) {
    int N = nums.size();
    int sum = (N*(N+1)/2);

    int su = 0;
    for(auto it: nums)
    {
        su += it;
    }

    return sum-su;
}
int missingNumber3(vector<int>& a, int N) {
    int xor1 = 0, xor2 = 0;

    // XOR all numbers from 0 to N
    for (int i = 0; i <= N; i++) {
        xor1 ^= i;
    }

    // XOR all elements in the array
    for (int num : a) {
        xor2 ^= num;
    }

    return xor1 ^ xor2; // Missing number
}

int main() {
    int N = 5;
    vector<int> a = {0, 1, 2, 4, 5}; // Missing number is 3
    cout << "The missing number is: " << missingNumber3(a, N) << endl;
    return 0;
}
