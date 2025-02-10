#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
int getMax(int, int);

// Function with default arguments
void printDetails(int id, string name = "NA", string address = "NA")
{
    cout << "ID is " << id << endl;
    cout << "Name is " << name << endl;
    cout << "Address is " << address << endl;
}

int main()
{
    printDetails(50);                           // Call with default arguments
    printDetails(648, "kunal", "Bhopal");       // Call with all arguments

    double a = 2, b = 4;
    cout << pow(a, b) << endl;                  // Power function (2^4)
    
    double x = 100;
    cout << log10(x) << endl;                   // Base-10 logarithm

    cout << getMax(10, 30) << endl;             // Call to `getMax` function

    return 0;
}

// Function definition
int getMax(int a, int b)
{
    return (a > b) ? a : b; // Return the larger value
}
