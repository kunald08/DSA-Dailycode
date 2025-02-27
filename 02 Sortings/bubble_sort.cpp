#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int N)
{
    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

// Optimized by reducing the inner loop range
void bubbleSort2(int arr[], int N)
{
    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

// Fully optimized with an early exit for already sorted arrays
void bubbleSort3(int arr[], int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        bool swapped = false; // Use boolean to track swaps
        for (int j = 0; j < N - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true; // Update when a swap occurs
            }
        }
        if (!swapped) // Exit early if no swaps were made
            break;
    }
}

int main()
{
    int arr[] = {10, 3, 4, 22, 14};
    int N = sizeof(arr) / sizeof(arr[0]);

    // Print the array before sorting
    cout << "Before Sorting: ";
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Sort the array
    bubbleSort3(arr, N);

    // Print the array after sorting
    cout << "After Sorting: ";
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
