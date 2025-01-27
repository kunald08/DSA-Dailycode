#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void bbl(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        bool flag = false;
        for(int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                flag = true;
            }
        }
        if (flag == false) break;
    }
}
void selSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int min_idx = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

void inserSort(int arr[], int n)
{
    for(int i = 1; i < n-1; i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j>=0 and arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main()
{
    int arr[] = {10, 2, 4, 2, 0, -1};
    int N = sizeof(arr) / sizeof(arr[0]);

    bbl(arr, N);

    // sort(arr, arr+N);  // Ascending 
    for(int x: arr) cout << x <<" ";
    cout <<endl;

    // sort(arr, arr+N, greater<int>());   // Dscending
    // for(int x: arr) cout << x << " ";
    // cout << endl;

    // vector<int> v = {10, 32, 2, 5, 2};
    // sort(v.begin(), v.end());
    // for (auto x: v) cout << x <<" ";
    // cout << endl;

    // sort(v.begin(), v.end(), greater<int>());
    // for (auto it : v) cout << it << " ";
    // cout << endl;
    
    return 0;
}


