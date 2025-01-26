#include <iostream>
#include <map>
using namespace std;

/* What is a map in C++ STL?
 * A map is an associative container that stores key-value pairs in sorted order based on the keys.
 * Each key is unique, and the map automatically arranges the elements in ascending order of the keys.
 * The time complexity for most operations is O(log N) as it uses a balanced binary search tree (like Red-Black Tree).
 */

int main() {
    // 1. Creating and Initializing a map
    map<int, string> m; // Empty map with keys as integers and values as strings

    // Initializer List
    map<int, string> m2 = {
        {1, "one"},
        {2, "two"},
        {3, "three"}
    };

    // 2. Adding Elements
    m[5] = "five"; // Using the [] operator
    m.insert({3, "three"}); // Using insert()
    m.insert(pair<int, string>(4, "four")); // Using pair

    // 3. Accessing Elements
    cout << "Value for key 5: " << m[5] << endl;

    // Using at() function
    cout << "Value for key 2: " << m2.at(2) << endl;

    // 4. Iterating through map
    cout << "Elements in m2: " << endl;
    for (const auto &pair : m2) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // 5. Checking for Key Existence
    if (m.find(3) != m.end()) {
        cout << "Key 3 exists in the map." << endl;
    } else {
        cout << "Key 3 does not exist." << endl;
    }

    // 6. Removing Elements
    m.erase(5); // Removes the key-value pair with key 5
    cout << "After erasing key 5, elements in m: " << endl;
    for (const auto &pair : m) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // 7. Size of map
    cout << "Size of m: " << m.size() << endl;

    // 8. Clearing map
    m.clear();
    cout << "Size after clearing m: " << m.size() << endl;

    // 9. Custom Comparator
    map<int, string, greater<int>> m3 = {
        {1, "one"},
        {2, "two"},
        {3, "three"}
    }; // Map with keys sorted in descending order

    cout << "Elements in m3 (descending order): " << endl;
    for (const auto &pair : m3) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
