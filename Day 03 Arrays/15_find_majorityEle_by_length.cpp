#include <bits/stdc++.h>
using namespace std;

//Naive
int majorityElement(vector<int> v) {

    //size of the given array:
    int n = v.size();

    for (int i = 0; i < n; i++) {
        //selected element is v[i]
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            // counting the frequency of v[i]
            if (v[j] == v[i]) {
                cnt++;
            }
        }

        // check if frquency is greater than n/2:
        if (cnt > (n / 2))
            return v[i];
    }

    return -1;
}

//Better:
int majorityElement2(vector<int> v) {
    int n = v.size();
    map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        mpp[v[i]]++;
    }

    for (auto it : mpp) {
        if (it.second > (n / 2)) {
            return it.first;
        }
    }

    return -1;
}

//Efficient:
int majorityElement3(vector<int> v) 
{
    int n = v.size();
    int cnt = 0;
    int ele;

    for(int i = 0; i < n; i++)
    {
        if(cnt == 0)
        {
            cnt = 1;
            ele = v[i];
        }
        else if(v[i] == ele) cnt++;
        else cnt--;
    }
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] == ele) count++;
    }
    return count > (n/2) ? ele: -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}


