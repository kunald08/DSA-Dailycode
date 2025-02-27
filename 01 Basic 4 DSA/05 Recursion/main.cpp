#include<iostream>
using namespace std;

int count = 0;
void func()
{
    if (count == 3) return;
    cout << count << "\n";
    count++;
    func();
}

int main()
{
    // Recursion -> when a function calls itelf until a specificed condition is met.    
    
    func();
    return 0;
}