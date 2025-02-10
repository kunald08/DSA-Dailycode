#include<iostream>
using namespace std;

/**** Arrays ****
 * Collection of same data type.
 * Uninitialized arrays contain garbage values.
 * In modern C++, arrays can be initialized like: int arr[5] = {0}, where every element is set to 0.
*/

int main()
{
    // Declaration and initialization of a fixed-size array
    int arr[5] = {50, 40, 30, 20, 10};

    // Array Traversal (Traditional for loop)
    int n = sizeof(arr) / sizeof(arr[0]);  // Number of elements in the array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print each element
    }
    cout << endl;
    
    // Range-based Traversal (for-each loop)
    for (int x : arr) {
        cout << x << " "; // Print each element
    }
    cout << endl;

    // Modify array elements (doubling each element)
    for (int &x : arr) {
        x = x * 2;
    }

    // Print modified array
    for (int x : arr) {
        cout << x << " "; // Print each modified element
    }

    // Dynamic arrays using vectors (not implemented here)
    return 0;
}
