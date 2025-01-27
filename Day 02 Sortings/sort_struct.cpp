#include <iostream>
#include <algorithm>
using namespace std;

// Define the Point structure
struct Point {
    int x, y;
};

// Comparison function for sorting
bool MyCMP(const Point& a, const Point& b) {
    // Example: Sort by x-coordinate, then by y-coordinate
    if (a.x != b.x)
        return a.x < b.x;
    return a.y < b.y;
}

int main() {
    // Array of Points
    Point arr2[] = {{1, 2}, {32, 2}, {23, 10}, {20, 30}};
    int NN = sizeof(arr2) / sizeof(arr2[0]);

    // Sort the array
    sort(arr2, arr2 + NN, MyCMP);

    // Print the sorted array
    for (const auto& i : arr2) {
        cout << i.x << "-" << i.y << " ";
    }
    return 0;
}