#include "bits/stdc++.h"
using namespace std;

bool linearSearch(vector<int>& arr, int k)
{
    for(int i = 0; i < arr.size(); i++)
        if(arr[i] == k)
            return true;
    return false;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 9};
    int k = 22;

    cout << linearSearch(arr, k);
    return 0;
} 
