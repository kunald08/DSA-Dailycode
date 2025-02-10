#include <iostream>
using namespace std;

int main()
{
    // Boolean values and manipulators
    bool a = true;
    cout << a << "\n";            // Prints 1 (default)
    cout << boolalpha << a << "\n"; // Prints true
    cout << noboolalpha << a << "\n"; // Prints 1

    // Integer values with number base manipulators
    int aa = 26, b = 20;
    cout << aa << " " << b << "\n"; // Decimal (default)
    cout << hex << aa << " " << b << "\n"; // Hexadecimal
    cout << oct << aa << " " << b << "\n"; // Octal
    cout << dec << aa << " " << b << "\n"; // Back to Decimal

    // Base and formatting manipulators
    cout << showbase; // Show base prefixes (e.g., 0x for hex)
    cout << aa << " " << b << "\n"; // Decimal with base prefix
    cout << hex << aa << " " << b << "\n"; // Hexadecimal with base prefix
    cout << showpos << oct << aa << " " << b << "\n"; // Show positive sign
    cout << uppercase << dec << aa << " " << b << "\n"; // Uppercase for hex

    return 0;
}
