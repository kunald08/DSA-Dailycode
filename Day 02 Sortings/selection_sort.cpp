#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    // one by one move boundary of unsorted subarray
    for (int i = 0; i < n-1; i++)
    {
        // find the min ele in unsorted
        int min_idx = i;
        for (int j = i+1; j < n; j++)
            if(arr[j] < arr[min_idx])
                min_idx = j; 
        // swap the found min ele with first ele
        swap(arr[min_idx], arr[i]);
    }
}

int main()
{
    int arr[] = {10, 20, 2, 3, 4, 24, 11, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);
    for (int o: arr)
    cout << o << " ";

    return 0;
}