#include <iostream>
#include <unordered_set>
using namespace std;

/* What is an unordered_multiset in C++ STL?
 * An unordered_multiset is a container in C++ STL that stores elements in an unordered manner.
 * Unlike unordered_set, it allows duplicate elements.
 * It is implemented using hash tables, providing average O(1) complexity for insertion, deletion, and search.
 */

int main() {
    // 1. Creating and Initializing unordered_multiset
    unordered_multiset<int> ums; // Empty unordered_multiset of integers
    unordered_multiset<int> ums2 = {10, 20, 10, 30}; // With initializer list, duplicates allowed

    // 2. Inserting Elements
    ums.insert(15);
    ums.insert(5);
    ums.insert(25);
    ums.insert(15); // Duplicate element allowed

    // 3. Iterating through unordered_multiset
    cout << "Elements in the unordered_multiset (order may vary): ";
    for (const int &elem : ums) {
        cout << elem << " ";
    }
    cout << endl;

    // 4. Counting Elements
    cout << "Count of 15 in unordered_multiset: " << ums.count(15) << endl;

    // 5. Checking for Element Existence
    if (ums.find(25) != ums.end()) {
        cout << "25 is present in the unordered_multiset." << endl;
    } else {
        cout << "25 is not present in the unordered_multiset." << endl;
    }

    // 6. Removing Elements
    ums.erase(15); // Removes all occurrences of 15
    cout << "After erasing 15, elements in the unordered_multiset: ";
    for (const int &elem : ums) {
        cout << elem << " ";
    }
    cout << endl;

    // 7. Size of the unordered_multiset
    cout << "Size of the unordered_multiset: " << ums.size() << endl;

    // 8. Clearing the unordered_multiset
    ums.clear();
    cout << "Size after clearing the unordered_multiset: " << ums.size() << endl;

    // 9. Bucket Information
    cout << "Bucket count in ums2: " << ums2.bucket_count() << endl;
    for (size_t i = 0; i < ums2.bucket_count(); ++i) {
        cout << "Bucket " << i << " contains: ";
        for (auto it = ums2.begin(i); it != ums2.end(i); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}
