#include <iostream>
using namespace std;

/***References:)*** references are assigned once.
 * create an alias
 * Must be assigned where declared.
 * cannot refer to another location.
 * cannot be NULL
 * safer
 * Easier to use
 *
 * ***Applicaton***
 * To Modify a passed parameters
 * Avoiding copy of large objects during functions calls.
 * Modification in for each loop.
 * Avoiding  copy of large objects in  for each loops.
 *
 *
 */
int main()
{
    int x = 10;
    int &y = x;

    cout << y << " ";

    x = x + 5;

    cout << y << " ";

    x = x + 5;

    cout << y << " ";

    // int arr[] = {10, 20, 30};
    // int * ptr = arr;
    // cout << sizeof(arr) << "\n";
    // cout << sizeof(ptr);

    return 0;
}