#include <iostream>
#include <unordered_map>
using namespace std;

/* What is an unordered_map in C++ STL?
 * An unordered_map is an associative container that stores key-value pairs with unique keys.
 * The elements are stored in no particular order, and it uses a hash table for efficient operations.
 * Average time complexity for insertion, deletion, and access is O(1).
 */

int main() {
    // 1. Creating and Initializing an unordered_map
    unordered_map<string, int> umap; // Empty unordered_map with keys as strings and values as integers

    // Initializer List
    unordered_map<string, int> umap2 = {
        {"apple", 10},
        {"banana", 20},
        {"cherry", 30}
    };

    // 2. Adding Elements
    umap["orange"] = 40; // Using the [] operator
    umap.insert({"grape", 50}); // Using insert()

    // 3. Accessing Elements
    cout << "Value for key 'orange': " << umap["orange"] << endl;

    // Using at() function
    cout << "Value for key 'apple': " << umap2.at("apple") << endl;

    // 4. Iterating through unordered_map
    cout << "Elements in umap2: " << endl;
    for (const auto &pair : umap2) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // 5. Checking for Key Existence
    if (umap.find("banana") != umap.end()) {
        cout << "Key 'banana' exists in the unordered_map." << endl;
    } else {
        cout << "Key 'banana' does not exist." << endl;
    }

    // 6. Removing Elements
    umap.erase("orange"); // Removes the key-value pair with key "orange"
    cout << "After erasing 'orange', elements in umap: " << endl;
    for (const auto &pair : umap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // 7. Size of unordered_map
    cout << "Size of umap: " << umap.size() << endl;

    // 8. Clearing unordered_map
    umap.clear();
    cout << "Size after clearing umap: " << umap.size() << endl;

    // 9. Bucket Information (Hash Table details)
    unordered_map<int, string> umap3 = {{1, "one"}, {2, "two"}, {3, "three"}};
    cout << "Number of buckets: " << umap3.bucket_count() << endl;
    for (size_t i = 0; i < umap3.bucket_count(); ++i) {
        cout << "Bucket " << i << " contains: ";
        for (auto it = umap3.begin(i); it != umap3.end(i); ++it) {
            cout << "(" << it->first << ", " << it->second << ") ";
        }
        cout << endl;
    }

    return 0;
}
