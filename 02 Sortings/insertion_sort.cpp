#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i-1;

        /* Move ele of arr[0.. i -1] that are greater than key,
        to one position ahead of their curr position */
        while (j >= 0 and arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int arr[] = {10, 20, 2, 3, 4, 24, 11, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);
    for (int o: arr)
    cout << o << " ";

    return 0;
}