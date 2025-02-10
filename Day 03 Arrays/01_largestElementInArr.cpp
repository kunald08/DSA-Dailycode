#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largestNo(vector<int>& arr)
{
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
}

int largestNo2(vector<int>& arr)
{
    int max = arr[0];
    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}


int main()
{
    vector<int> arr = {2,5,1,3,0};

    cout << largestNo2(arr) << " ";

    return 0;
}