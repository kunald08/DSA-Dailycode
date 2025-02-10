#include <bits/stdc++.h>
using namespace std;

void leftRotateOne(vector<int> &arr)
{
    int n = arr.size();
    int temp = arr[0];

    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

void leftRotateK(vector<int> &arr, int k)
{
    for (int i = 0; i < k; i++)
    {
        leftRotateOne(arr);
    }
}
void leftRotateK2(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;

    vector<int> temp(arr.end() - k, arr.end());
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    for (int i = 0; i < k; i++)
    {
        arr[n - k + i] = temp[i];
    }
}

void leftRotateByK(vector<int> &arr, int k)
{
    int n = arr.size();

    // Handle cases where k is greater than or equal to n
    k = k % n;

    // Reverse the first k elements
    reverse(arr.begin(), arr.begin() + k);

    // Reverse the last n - k elements
    reverse(arr.begin() + k, arr.end());

    // Reverse the whole array
    reverse(arr.begin(), arr.end());
}
int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70};
    int k = 4;
    leftRotateByK(arr, k);

    for (auto it : arr)
        cout << it << " ";
    return 0;
}