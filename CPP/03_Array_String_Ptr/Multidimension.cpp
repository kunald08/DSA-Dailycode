#include <iostream>
#include <vector>
using namespace std;

/*** Multidimensional Array ***/
// - Elements are stored in row-major order.
// - Internal curly braces are optional.
// - Only the first dimension can be omitted in initialization.

int main()
{
    int m = 3, n = 2;

    // Static 2D Array (Commented out for now)
    // int arr[m][n];
    // for (int i = 0; i < m; i++) {
    //     for (int j = 0; j < n; j++) {
    //         arr[i][j] = i + j;
    //     }
    // }

    // Dynamic 2D Array using Double Pointer (Commented out for now)
    // int **arr;
    // arr = new int *[m];
    // for (int i = 0; i < m; i++)
    //     arr[i] = new int [n];

    // Array of pointers (Commented out for now)
    // int *arr[m];
    // for (int i = 0; i < m; i++)
    //     arr[i] = new int [n];

    // Array of Vectors (Not cache friendly as simple 2D arrays)
    // vector <int> arr[m];
    // for (int i = 0; i < m; i++) {
    //     for (int j = 0; j < n; j++) {
    //         arr[i].push_back(10);
    //     }
    // }

    // Vector of Vectors (Dynamic size for rows as well)
    vector<vector<int>> arr;
    for (int i = 0; i < m; i++) {
        vector<int> v;
        for (int j = 0; j < n; j++) {
            v.push_back(10); // Initializing with 10
        }
        arr.push_back(v);
    }

    // Output the 2D vector
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
