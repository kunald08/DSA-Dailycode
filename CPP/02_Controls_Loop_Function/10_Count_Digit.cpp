#include <iostream>
using namespace std;

int cnt(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        n /= 10;
        cnt ++;
    }
    return cnt;
    
}
int main()
{
    int k; cin >> k;
    cout << cnt (k);

    return 0;
}