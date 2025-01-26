#include <iostream>
#include <vector>
#include <algorithm> // For sort, reverse, etc.
using namespace std;

/* What is a vector in C++ STL?
 * A vector in C++ Standard Template Library (STL) is a dynamic array.
 * Unlike arrays, vectors can resize themselves automatically when elements are inserted or deleted.
 * They are part of the <vector> header and provide a variety of member functions for managing elements.
 */

int main() {
    // 1. Declaration and Initialization of Vector
    vector<int> vec1; // Empty vector of integers
    vector<int> vec2(5); // Vector of size 5 with default values (0 for int)
    vector<int> vec3(5, 10); // Vector of size 5 initialized with 10
    vector<int> vec4 = {1, 2, 3, 4, 5}; // Vector with initializer list

    // 2. Adding Elements
    vec1.push_back(10); // Adds 10 to the end of the vector
    vec1.push_back(20); 
    vec1.push_back(30);

    // 3. Accessing Elements
    cout << "Accessing Elements in vec1: " << endl;
    for (int i = 0; i < vec1.size(); ++i) {
        cout << vec1[i] << " "; // Using array-style access
    }
    cout << endl;

    // Using Range-based Loop
    cout << "Range-based Loop: ";
    for (int val : vec1) {
        cout << val << " ";
    }
    cout << endl;

    // Using at() function
    cout << "Element at index 1: " << vec1.at(1) << endl;

    // 4. Modifying Elements
    vec1[1] = 50; // Modify the second element
    cout << "After Modification: ";
    for (int val : vec1) {
        cout << val << " ";
    }
    cout << endl;

    // 5. Removing Elements
    vec1.pop_back(); // Removes the last element
    cout << "After pop_back: ";
    for (int val : vec1) {
        cout << val << " ";
    }
    cout << endl;

    // 6. Size and Capacity
    cout << "Size of vec1: " << vec1.size() << endl;
    cout << "Capacity of vec1: " << vec1.capacity() << endl;

    // 7. Inserting Elements
    vec1.insert(vec1.begin() + 1, 40); // Insert 40 at index 1
    cout << "After Insertion: ";
    for (int val : vec1) {
        cout << val << " ";
    }
    cout << endl;

    // 8. Erasing Elements
    vec1.erase(vec1.begin() + 1); // Erase element at index 1
    cout << "After Erasure: ";
    for (int val : vec1) {
        cout << val << " ";
    }
    cout << endl;

    // 9. Clearing a Vector
    vec1.clear(); // Removes all elements
    cout << "After clear, Size: " << vec1.size() << endl;

    // 10. Sorting a Vector
    sort(vec4.begin(), vec4.end(), greater<int>()); // Sort in descending order
    cout << "Sorted vec4: ";
    for (int val : vec4) {
        cout << val << " ";
    }
    cout << endl;

    // 11. Other Useful Operations
    vec4.push_back(6);
    vec4.push_back(7);
    cout << "Max element in vec4: " << *max_element(vec4.begin(), vec4.end()) << endl;
    cout << "Min element in vec4: " << *min_element(vec4.begin(), vec4.end()) << endl;

    // 12. 2D Vectors
    vector<vector<int>> vec2D = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "2D Vector Elements:" << endl;
    for (const auto &row : vec2D) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    // 13. Reserve and Resize
    vector<int> vec5;
    vec5.reserve(10); // Pre-allocate space for 10 elements
    vec5.resize(5, 100); // Resize to 5 elements, all initialized to 100
    cout << "vec5 after resize: ";
    for (int val : vec5) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
