#include <iostream>
#include <map>  // Required for multimap operations

using namespace std;

int main() {
    // Multimap Definition:
    // A multimap is an associative container that allows multiple elements with the same key.
    // Unlike a regular map, where each key must be unique, a multimap allows duplicate keys.
    // The keys in a multimap are always ordered, and elements with the same key appear in the order they were inserted.

    // Create a multimap of integers (key-value pairs)
    multimap<int, string> mmap;

    // Insert elements into the multimap
    mmap.insert({1, "Apple"});   // Multimap: [(1, "Apple")]
    mmap.insert({2, "Banana"});  // Multimap: [(1, "Apple"), (2, "Banana")]
    mmap.insert({3, "Cherry"});  // Multimap: [(1, "Apple"), (2, "Banana"), (3, "Cherry")]
    mmap.insert({2, "Grapes"});  // Multimap: [(1, "Apple"), (2, "Banana"), (2, "Grapes"), (3, "Cherry")]

    // Display elements in the multimap
    cout << "Elements in the multimap:" << endl;
    for (auto it = mmap.begin(); it != mmap.end(); ++it) {
        cout << "(" << it->first << ", " << it->second << ")" << endl;
    }

    // Access elements by key (Note: Multiple values for the same key)
    cout << "\nElements with key 2:" << endl;
    auto range = mmap.equal_range(2); // Get the range of elements with key 2
    for (auto it = range.first; it != range.second; ++it) {
        cout << "(" << it->first << ", " << it->second << ")" << endl;
    }

    // Erase a specific element by key
    mmap.erase(2);  // Remove all elements with key 2
    cout << "\nAfter erasing all elements with key 2:" << endl;
    for (auto it = mmap.begin(); it != mmap.end(); ++it) {
        cout << "(" << it->first << ", " << it->second << ")" << endl;
    }

    // Erase a specific element by key-value pair
    auto it = mmap.find(1);  // Find element with key 1
    if (it != mmap.end()) {
        mmap.erase(it);  // Erase the element found
    }
    cout << "\nAfter erasing element with key 1:" << endl;
    for (auto it = mmap.begin(); it != mmap.end(); ++it) {
        cout << "(" << it->first << ", " << it->second << ")" << endl;
    }

    // Check if the multimap is empty
    if (mmap.empty()) {
        cout << "\nThe multimap is empty!" << endl;
    } else {
        cout << "\nThe multimap still contains elements." << endl;
    }

    return 0;
}
