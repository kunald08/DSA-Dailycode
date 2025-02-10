#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int fn = 1;
    int sn = 1;
    int c = 0;

    cout << fn << " " << sn << " ";
    for (int i = 2; i < n; i++)
    {
        c = fn + sn;
        cout << c << " ";
        fn = sn;
        sn = c;
    }

    return 0;
}