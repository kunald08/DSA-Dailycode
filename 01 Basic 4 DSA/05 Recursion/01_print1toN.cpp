#include <iostream>
using namespace std;

void printNos(int n)
{
    if (n == 0)
        return;
    printNos(n - 1);
    cout << n << " ";
}
void printNos2(int n)
{
    if (n==0) return;
    cout << n <<" ";
    printNos2(n-1);
}
int main()
{
    int n; cin >> n;
    printNos(n); cout <<"\n";
    printNos2(n);

    return 0;
}