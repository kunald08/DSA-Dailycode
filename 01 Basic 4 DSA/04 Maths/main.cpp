#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    // subtraction of digit
    while (n > 0) 
    {
        int d = n % 10;
        cout << d << " ";
        n /= 10;
    }

    return 0;
}