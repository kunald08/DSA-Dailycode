#include <iostream>
using namespace std;

void printInsertion(int arr[], int brr[], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        if(i > 0 and arr[i] == arr[i-1]) continue;

        for(int j = 0; j < n; j++)
        {
            if(arr[i] == brr[i])
            {
                cout << arr[i] << " ";
                break;
            }
        }
    }
}
void printInsertion2(int arr[], int brr[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m and j < n)
    {
        if(i > 0 and arr[i] == arr[i-1]) {i++; continue;}

        if(arr[i] < brr[j]) {i++;}
        else if(arr[i] > brr[j]) {j++;}
        else{
            cout << arr[i] << " "; i++; j++;
        }
    }
    
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 5, 6}, m = 7;
    int b[] = {5, 10, 10, 11}, n = 4;

    printInsertion2(a, b, m, n);

    return 0;
}