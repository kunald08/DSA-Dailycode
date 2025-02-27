#include <iostream>
#include <vector>
#include <utility> // For std::pair
using namespace std;

/* What is a pair in C++ STL?
 * A pair in C++ STL is a container that stores two heterogeneous objects as a single unit.
 * It is defined in the <utility> header and is commonly used to return two values from a function
 * or to associate two pieces of related information.
 */

int main() {
    // 1. Creating and Initializing Pairs
    pair<int, string> p1; // Default constructor
    p1 = {1, "One"}; // Using initializer list
    pair<int, string> p2(2, "Two"); // Using constructor
    pair<int, string> p3 = make_pair(3, "Three"); // Using make_pair

    // 2. Accessing Pair Elements
    cout << "Pair 1: " << p1.first << " - " << p1.second << endl;
    cout << "Pair 2: " << p2.first << " - " << p2.second << endl;
    cout << "Pair 3: " << p3.first << " - " << p3.second << endl;

    // 3. Modifying Pair Elements
    p1.first = 10;
    p1.second = "Ten";
    cout << "Modified Pair 1: " << p1.first << " - " << p1.second << endl;

    // 4. Comparing Pairs
    pair<int, string> p4 = {10, "Ten"};
    if (p1 == p4) {
        cout << "Pair 1 and Pair 4 are equal." << endl;
    } else {
        cout << "Pair 1 and Pair 4 are not equal." << endl;
    }

    // 5. Using Pairs in Containers
    pair<int, string> arr[] = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"}
    };

    cout << "Array of Pairs:" << endl;
    for (const auto &pr : arr) {
        cout << pr.first << " - " << pr.second << endl;
    }

    // 6. Nested Pairs
    pair<int, pair<string, double>> nestedPair = {1, {"Nested", 3.14}};
    cout << "Nested Pair: " << nestedPair.first << " - " << nestedPair.second.first
         << " - " << nestedPair.second.second << endl;

    // 7. Pair with Vectors
    vector<pair<int, string>> vec;
    vec.push_back({1, "One"});
    vec.push_back({2, "Two"});
    vec.push_back({3, "Three"});

    cout << "Vector of Pairs:" << endl;
    for (const auto &pr : vec) {
        cout << pr.first << " - " << pr.second << endl;
    }

    return 0;
}
