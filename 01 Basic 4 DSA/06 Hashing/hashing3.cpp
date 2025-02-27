#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //pre-comppute
    map<int,int> mpp;  // ordered
    for(int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // iterate in the map
    // for(auto it : mpp)
    // {
    //     cout << it.first <<"->" << it.second << endl;
    // }

    int q; cin >> q;
    while(q--)
    {
        int d; cin >> d;
        //fetch
        cout << mpp[d] << endl;
    }

    return 0;
}