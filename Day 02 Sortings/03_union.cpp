#include <iostream>
#include <algorithm> 

using namespace std;

void printUnion(int arr[], int brr[], int m, int n)
{
    int c[m+n];
    for(int i = 0; i < m; i++) c[i] = arr[i];
    for(int i = 0; i < n; i++) c[m+i] = brr[i];

    sort(c, c+m+n);

    for(int i = 0; i < (m+n); i++)
        if (i == 0 and c[i] != c[i-1]) 
            cout << c[i] << " ";
}

void printUnion2(int arr[], int brr[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m and j < n)
    {   
        if (i > 0 and arr[i] == arr[i-1]) {i++; continue;}
        if (j > 0 and brr[j] == brr[j-1]) {j++; continue;}

        if (arr[i] < brr[j]){cout << arr[i] << " "; i++;}
        if (arr[i] > brr[j]){cout << brr[j] << " "; j++;}
        else{
            cout << arr[i] << " "; i++; j++;
        }
    }
    while (i < m)
        if (i > 0 and arr[i] != arr[i-1]) {cout << arr[i] << " "; i++; }
    while (j < n)
        if (j > 0 and brr[j] != brr[j-1]) {cout << brr[i] << " "; j++; }
    
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 5, 6}, m = 7;
    int b[] = {5, 10, 10, 11}, n = 4;

    printUnion2(a, b, m, n);

    return 0;
}