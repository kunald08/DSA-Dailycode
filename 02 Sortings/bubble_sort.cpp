#include <iostream>
#include <algorithm>
using namespace std;

// Basic Bubble Sort Implementation
// in this sorting algorithm, we repeatedly step through the list,
// compare adjacent elements and swap them if they are in the wrong order.
// The pass through the list is repeated until the list is sorted.
// Time Complexity: O(N^2) in all cases (Best, Average, Worst)
// Space Complexity: O(1) as it is an in-place sorting algorithm
void bubbleSort(int arr[], int N)
{
    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

// Optimized by reducing the inner loop range
// since the largest elements "bubble up" to the end of the array
void bubbleSort2(int arr[], int N)
{
    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

// Fully optimized with an early exit for already sorted arrays
// by tracking if any swaps were made during a pass
// If no swaps were made, the array is already sorted
// This improves the best-case time complexity to O(N)
// while maintaining O(N^2) for average and worst cases
// Space Complexity remains O(1)
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
