#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// Naive
int secLargest(vector<int> &arr)
{
    int n = arr.size();
    if (n == 0 or n == 1)
        return -1;
    sort(arr.begin(), arr.end());

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] != arr[i + 1])
            return arr[i];
    }
    return -1;
}

// Efficient
int secLargest2(vector<int> &arr)
{
    int max = INT_MIN, smax = INT_MIN;

    for (int num : arr)
    {
        if (num > max)
        {
            smax = max;
            max = num;
        }
        else if (num > smax && num != max)
        {
            smax = num;
        }
    }
    return smax == INT_MIN ? -1 : smax;
}

int main()
{
    vector<int> arr = {2, 5, 1, 3, 0, 5};
    
    cout << secLargest2(arr) << " ";

    return 0;
}