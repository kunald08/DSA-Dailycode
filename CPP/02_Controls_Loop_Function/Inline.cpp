#include <iostream>
using namespace std;

/*** Inline Function ***
 * Inline functions suggest the compiler to replace the function call 
 * with the function code to reduce overhead.
 * Modern compilers can decide to inline functions even without `inline`.
 * Overusing inline functions may increase the binary size.
 */

inline int getMax(int a, int b)
{
    return (a > b) ? a : b;
}

// Macro definition (not type-safe, use inline functions instead)
#define add(x, y) x + y

int main()
{
    cout << add(10, 20) << endl;        // Macro usage
    cout << getMax(10, 20) << "\n";    // Inline function
    cout << getMax(40, 4) << "\n";     // Inline function
    return 0;
}
