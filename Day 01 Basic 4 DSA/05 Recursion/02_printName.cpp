#include <iostream>
using namespace std;

void printKunal(int N)
{
    if (N == 0)
        return;
    printKunal(N - 1);
    cout << "Kunal" << " ";
}
int main()
{
    int N; cin >> N;
    printKunal(N);
    return 0;
}