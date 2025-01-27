#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int h)
{
    int n1 = m-l+1;
    int n2 = h-m;

    // Create temporary arrays
    int left[n1], right[n2];

    // Copy data to temporary arrays L[] and R[]
    for(int i = 0; i < n1; i++) left[i] = arr[l+i];
    for(int j = 0; j < n2; j++) right[j] = arr[n1+j];

    // Merge the temporary arrays back into arr[left..right]
    int i = 0, j = 0, k = 0;
    while(i < n1 and j < n2)
    {
        if(left[i] <= right[j])
        {
            arr[k] = left[i];
            i++; k++;
        }
        else
        {
            arr[k] = right[j];
            j++; k++;
        }
    }
    while(i<n1)
    {
        arr[k] = left[i];
        i++; k++;
    }
    while(j<n2)
    {
        arr[k] = right[j];
        j++; k++;
    }  
}

void mergeSort(int arr[],int l, int r)
{
    if(r>l) // at least 2 ele
    {
        int m = l +(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
    return;
}

int main()
{
    int arr[] = {10, 5, 30, 15, 7};
    int N = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0, N);
    return 0;
}