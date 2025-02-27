#include "bits/stdc++.h"
using namespace std;

// Naive
vector<int> moveZeros(int n, vector<int> a)
{
    // temporary array:
    vector<int> temp;
    // copy non-zero elements
    // from original -> temp array:
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
            temp.push_back(a[i]);
    }

    // number of non-zero elements.
    int nz = temp.size();

    // copy elements from temp
    // fill first nz fields of
    // original array:
    for (int i = 0; i < nz; i++)
    {
        a[i] = temp[i];
    }

    // fill rest of the cells with 0:
    for (int i = nz; i < n; i++)
    {
        a[i] = 0;
    }
    return a;
}

// Efficient
void moveZeros(vector<int> &arr)
{
    int n = arr.size();
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
}

int main()
{

    vector<int> arr = {0, 0, 1, 2, 20, 0, 4, 0, 8};

    moveZeros(arr);

    for (auto it : arr)
        cout << it << " ";
    return 0;
}