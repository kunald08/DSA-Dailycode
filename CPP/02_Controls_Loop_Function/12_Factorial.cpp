#include <iostream>
using namespace std;

int main()
{
    int n, f = 1; cin >> n;
    while (n > 0)
    {
        f *= n;
        n--;
    }
    cout << f <<"\n";
    return 0;
}