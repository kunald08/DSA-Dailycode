/*
****Structure Alignment*****
* 
* Data types (including int, float, double...) have alignment requirements.
* A Structure has alignment requirements same as its largest member's requirements.
*
* Physical memory is accessed in the form of word (4 bytes in a 32 bit machine and 8 bytes in a 64 bit machine)
*
* without alignment, it is inefficient to store variable that span access multiple words.

*/

#include <iostream>
using namespace std;

struct s1
{
    char c1;
    double d1;
    char c2;

    /*
    [c1:1][:7][d1:8][c2:1][:7]
    */
};

struct s2
{
    char c1;
    char c2;
    double d1;
    /*
    [c1:1][c2:1][:6][d1:8]
    */
};
struct s3
{
    double d1;
    char c1;
    char c2;
    /*
    [d1:8][c1:1][c2:1][:6]
    */
}__attribute__((packed));   // we specify the compiler to do compact representation of the structure

int main()
{
    cout << sizeof(s1) << " "
         << sizeof(s2) << " "
         << sizeof(s3);
    return 0;
}