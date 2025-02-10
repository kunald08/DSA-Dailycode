#include <iostream>
using namespace std;

// Structure definition
// A structure 'Point' to represent a point with x and y coordinates.
struct Point
{
    int x; // x-coordinate
    int y; // y-coordinate
};

// Function to print the Point structure's values
void print(Point p)
{
    cout << p.x << " " << p.y << "\n";  // Print x and y of the point
}

int main()
{
    // // Pointer of structure
    // Point p = {10, 20};             // Declare and initialize structure variable p
    // Point *ptr = &p;                // Pointer ptr holds the address of structure p
    // cout << ptr -> x << " ";        // Access x using pointer and print it
    // ptr -> x = 30;                  // Modify x through the pointer
    // cout << p.x;                    // Print the updated value of x

    // // Array of structures
    // Point arr[5];                  // Declare an array of 5 Point structures
    // for (int i = 0; i < 5; i++)    // Initialize each element of the array
    // {
    //     arr[i].x = i;              // Assign x
    //     arr[i].y = i * 10;         // Assign y
    // }

    // for (int i = 0; i < 5; i++)    // Loop through the array to print values
    // {
    //     cout << arr[i].x << " ";   // Print x of each element
    //     cout << arr[i].y << "\n";  // Print y of each element
    // }

    // Function call with a single Point structure
    Point p = {10, 20};  // Declare and initialize Point structure p
    print(p);             // Call print function to print the values of p
    cout << p.x;          // Print the value of x in structure p

    return 0;
}
