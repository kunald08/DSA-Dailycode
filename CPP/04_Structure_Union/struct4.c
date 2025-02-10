#include <stdio.h>

// Structure definition
// A struct is a user-defined data type that allows grouping different data types.
struct Point
{
    int x; // Represents the x-coordinate
    int y; // Represents the y-coordinate
};

int main()
{
    // Initialize a structure variable 'p' with specified values for x and y
    struct Point p = {.y = 120, .x = 100};  // Designated initialization

    // Print the values of x and y using the structure variable 'p'
    printf("%d %d", p.x, p.y);  // Output: 100 120

    return 0;
}
