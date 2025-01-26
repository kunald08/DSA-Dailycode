#include<iostream>
using namespace std;
int sumOfSeries(int n) {
    if (n==0) return 0;
    if (n==1) return 1;
    return n*n*n + sumOfSeries(n-1);
}
int main()
{
    int N; cin >> N;
    cout << sumOfSeries(N);
    // 5 -> 225
    // 7 -> 784
    return 0;
}