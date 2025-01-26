#include <iostream>
using namespace std;

int main()
{
    // Hashing -> prestoring / fetching
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        // fetch
        cout << hash[d] << endl;
    }

    return 0;
}