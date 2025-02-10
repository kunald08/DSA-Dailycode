#include <iostream>
using namespace std;

// Declare an external global variable `a`.
extern int a;
int main()
{
    const double PI = 3.14; // Constant variable
    cout << a << endl;      // Print global variable `a`

    int a = 10; // Local variable
    // int a = 34; // Redeclaration in the same scope is invalid

    double d = 45.4; // Double data type
    char c = 'A';    // Character data type

    // Print variables
    cout << a << " " << d << " " << c;

    // sizeof() operator
    // - return no of bytes required for data type
    // - evaluated at compile time
    // - can be used with variable and literals also
    cout << sizeof(int) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(10) << endl;
    cout << sizeof('c') << "\n";
    return 0;
}

int a = 30; // Define global variable