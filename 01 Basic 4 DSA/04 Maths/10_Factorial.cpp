#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int f = 1;

    while (n > 0)
    {
        f = f *n;
        n--;
    }
    cout << f;

    return 0;
}