#include <iostream>
#include <unordered_set>
using namespace std;

/* What is an unordered_set in C++ STL?
 * An unordered_set is a container that stores unique elements in no particular order.
 * It is implemented using hash tables, which allows average O(1) time complexity for insert, delete, and search operations.
 * Duplicate values are not allowed, and the order of elements is not guaranteed.
 */

int main() {
    // 1. Creating and Initializing unordered_set
    unordered_set<int> uset; // Empty unordered_set
    unordered_set<int> uset2 = {10, 20, 30, 40}; // Using initializer list

    // Insert elements
    uset.insert(5);
    uset.insert(15);
    uset.insert(25);
    uset.insert(35);

    // 2. Iterating through the unordered_set
    cout << "Elements in uset: ";
    for (const int &elem : uset) {
        cout << elem << " ";
    }
    cout << endl;

    // 3. Checking for Element Existence
    if (uset.find(15) != uset.end()) {
        cout << "15 is present in the unordered_set." << endl;
    } else {
        cout << "15 is not present in the unordered_set." << endl;
    }

    // 4. Erasing Elements
    uset.erase(15); // Remove a specific element
    cout << "After erasing 15, uset: ";
    for (const int &elem : uset) {
        cout << elem << " ";
    }
    cout << endl;

    // 5. Size of unordered_set
    cout << "Size of uset: " << uset.size() << endl;

    // 6. Clearing the unordered_set
    uset.clear();
    cout << "Size after clearing uset: " << uset.size() << endl;

    // 7. Unique Property of unordered_set
    uset2.insert(10); // Duplicate insertion
    cout << "Elements in uset2 (unique property): ";
    for (const int &elem : uset2) {
        cout << elem << " ";
    }
    cout << endl;

    // 8. Bucket Information
    cout << "Bucket count in uset2: " << uset2.bucket_count() << endl;
    cout << "Load factor in uset2: " << uset2.load_factor() << endl;

    return 0;
}
