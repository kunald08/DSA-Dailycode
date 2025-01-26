#include "iostream"
using namespace std;

int main()
{
    int n; cin >> n;
    int temp = n;
    int sum = 0;
    while (temp > 0)
    {
        int ld = temp % 10;
        sum += (ld*ld*ld);
        temp /= 10;
    }
    if (sum == n) cout << "True";   //153, 371
    else cout << "False";   //1111,..

    return 0;
}