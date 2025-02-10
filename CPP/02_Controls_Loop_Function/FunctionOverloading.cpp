#include <iostream>
using namespace std;

/*** Function Overloading ***/
// Function overloading is a feature in C++ where you can define 
// multiple functions with the same name but different parameter lists.
// The compiler selects the appropriate function based on the arguments passed.

int myMax(int a, int b)
{
    return (a > b) ? a : b; // Finds the maximum of two numbers
}

int myMax(int x, int y, int z)
{
    return myMax(myMax(x, y), z); // Reuses the two-argument version to find the maximum of three numbers
}

int main()
{
    int a = 10, b = 30, c = 23;
    cout << myMax(a, b) << endl;       // Maximum of two numbers
    cout << myMax(a, b, c) << endl;    // Maximum of three numbers
    return 0;
}
