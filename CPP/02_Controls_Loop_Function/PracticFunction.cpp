#include <iostream>
using namespace std;

// Function demonstrating the use of static and non-static variables
void fun()
{
    static int x = 1; // Static variable (retains value across function calls)
    int y = 1;        // Non-static variable (reinitialized on every call)
    x++;
    y++;
    cout << x << " " << y << endl;
}

// Overloaded function with parameters
void fun(int a, int b, int z)
{
    cout << a << " " << b << " " << z << endl;
}

int main()
{
    fun(); // First call to `fun()`
    fun(); // Second call to `fun()`
    fun(); // Third call to `fun()`

    int i = 3;
    fun(++i, ++i, ++i); // Demonstrates undefined behavior due to order of evaluation

    return 0;
}
