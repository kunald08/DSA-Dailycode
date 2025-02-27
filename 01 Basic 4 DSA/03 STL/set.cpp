#include <iostream>
#include <set>
using namespace std;

/* What is a set in C++ STL?
 * A set is a container in C++ STL that stores unique elements in sorted order.
 * Internally, it is implemented as a balanced binary search tree (typically a Red-Black Tree).
 * Operations like insertion, deletion, and search have O(log n) complexity.
 * Duplicate elements are not allowed.
 */

int main() {
    // 1. Creating and Initializing set
    set<int> s; // Empty set of integers
    set<int> s2 = {10, 20, 30, 40}; // Set with initializer list

    // 2. Inserting Elements
    s.insert(15);
    s.insert(5);
    s.insert(25);
    s.insert(15); // Duplicate elements are ignored

    // 3. Iterating through the set
    cout << "Elements in the set (sorted and unique): ";
    for (const int &elem : s) {
        cout << elem << " ";
    }
    cout << endl;

    // 4. Checking for Element Existence
    if (s.find(25) != s.end()) {
        cout << "25 is present in the set." << endl;
    } else {
        cout << "25 is not present in the set." << endl;
    }

    // 5. Removing Elements
    s.erase(5); // Removes element with value 5
    cout << "After erasing 5, elements in the set: ";
    for (const int &elem : s) {
        cout << elem << " ";
    }
    cout << endl;

    // 6. Size of the set
    cout << "Size of the set: " << s.size() << endl;

    // 7. Clearing the set
    s.clear();
    cout << "Size after clearing the set: " << s.size() << endl;

    // 8. Upper and Lower Bounds
    cout << "Elements in s2: ";
    for (const int &elem : s2) {
        cout << elem << " ";
    }
    cout << endl;

    auto it = s2.lower_bound(20); // Returns iterator to first element >= 20
    if (it != s2.end()) {
        cout << "Lower bound of 20: " << *it << endl;
    }

    it = s2.upper_bound(20); // Returns iterator to first element > 20
    if (it != s2.end()) {
        cout << "Upper bound of 20: " << *it << endl;
    }

    return 0;
}
