#include <iostream>
#include <set>
using namespace std;

/* What is a multiset in C++ STL?
 * A multiset is an associative container that contains a sorted collection of elements, allowing duplicate values.
 * The elements are stored in sorted order (by default, ascending).
 * It provides logarithmic time complexity for insertion, deletion, and search operations.
 */

int main() {
    // 1. Creating and Initializing multiset
    multiset<int> ms; // Empty multiset of integers
    multiset<int> ms2 = {10, 20, 10, 30}; // With initializer list, duplicates allowed

    // 2. Inserting Elements
    ms.insert(15);
    ms.insert(5);
    ms.insert(25);
    ms.insert(15); // Duplicate element allowed

    // 3. Iterating through multiset
    cout << "Elements in the multiset (sorted): ";
    for (const int &elem : ms) {
        cout << elem << " ";
    }
    cout << endl;

    // 4. Counting Elements
    cout << "Count of 15 in multiset: " << ms.count(15) << endl;

    // 5. Checking for Element Existence
    if (ms.find(25) != ms.end()) {
        cout << "25 is present in the multiset." << endl;
    } else {
        cout << "25 is not present in the multiset." << endl;
    }

    // 6. Removing Elements
    ms.erase(15); // Removes all occurrences of 15
    cout << "After erasing 15, elements in the multiset: ";
    for (const int &elem : ms) {
        cout << elem << " ";
    }
    cout << endl;

    // 7. Size of the multiset
    cout << "Size of the multiset: " << ms.size() << endl;

    // 8. Clearing the multiset
    ms.clear();
    cout << "Size after clearing the multiset: " << ms.size() << endl;

    // 9. Using Lower and Upper Bounds
    multiset<int> ms3 = {10, 20, 30, 30, 40};
    auto lower = ms3.lower_bound(30); // Points to the first 30
    auto upper = ms3.upper_bound(30); // Points to the element after the last 30

    cout << "Lower bound of 30: " << (lower != ms3.end() ? to_string(*lower) : "Not found") << endl;
    cout << "Upper bound of 30: " << (upper != ms3.end() ? to_string(*upper) : "Not found") << endl;

    // 10. Range of Equal Elements
    auto range = ms3.equal_range(30);
    cout << "Range of 30: ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
