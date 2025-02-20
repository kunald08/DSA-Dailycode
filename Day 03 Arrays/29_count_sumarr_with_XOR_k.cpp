#include <bits/stdc++.h>
using namespace std;

//Naive
int subarraysWithXorK(vector<int> a, int k) {
    int cnt = 0;
    for(int i = 0; i < a.size(); i++)
    {
        for(int j = i; j < a.size(); j++)
        {
            int XOR = 0;
            for(int k = i; k <= j; k++)
            {
                XOR ^= a[k];
            }
            if(XOR == k) cnt++;
        }
    }
    return cnt;
}   //TC: O(n^3)

//Better:
int subarraysWithXorK2(vector<int> a, int k) {
    int cnt = 0;
    for(int i = 0; i < a.size(); i++)
    {
        int XOR = 0;
        for(int j = i; j < a.size(); j++)
        {
            XOR ^= a[j];
            if(XOR == k) cnt++;
        }
    }
    return cnt;
}   //TC: O(n^2)

//Efficient:
int subarraysWithXorK3(vector<int> a, int k) {
    int n = a.size(); //size of the given array.
    int xr = 0;
    map<int, int> mpp; //declaring the map.
    mpp[xr]++; //setting the value of 0.
    int cnt = 0;
    
    for (int i = 0; i < n; i++) {
        // prefix XOR till index i:
        xr = xr ^ a[i]; 

        //By formula: x = xr^k:
        int x = xr ^ k;

        // add the occurrence of xr^k
        // to the count:
        cnt += mpp[x];

        // Insert the prefix xor till index i
        // into the map:
        mpp[xr]++;
    }
    return cnt;
}

int main()
{
    vector<int> a = {4, 2, 2, 6, 4};
    int k = 6;
    int ans = subarraysWithXorK2(a, k);
    cout << "The number of subarrays with XOR k is: "
         << ans << "\n";
    return 0;
}

