#include <iostream>
#include <algorithm>
using namespace std;

// Naive -> TC: O((m+n)*log(m+n)); SC: 0(m+n)
void merge(int a[], int b[], int m, int n)
{
    int ans[m+n];
    for(int i = 0; i < m; i++) ans[i] = a[i];
    for(int i = 0; i < n; i++) ans[m+i] = b[i];

    sort(ans, ans+m+n);
    for(int i = 0; i < (m+n); i++) cout << ans[i] <<" ";

}
void merge2(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while(i<m and j<n)
    {
        if(a[i]<=b[j])
        {
            cout << a[i] << " "; i++;
        }
        else
        {
            cout << b[j] << " "; j++;
        }
    }
    while (i<m)
    {
        cout << a[i] << " "; i++;
    }
    while (j<n)
    {
        cout << a[j] << " "; j++;
    }
}

int main()
{

    int a[] = {10, 15, 30};
    int b[] = {1, 22};

    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);

    merge2(a, b, m, n);

    return 0;
}