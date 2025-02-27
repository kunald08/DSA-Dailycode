#include<iostream>
using namespace std;

void greet(string name)
{
    cout << "Hare Krsna! " << name << "\n";
}

int sum(int a, int b)
{
    return (a+b);
}

int main()
{
    greet("kunal");
    cout << sum(10, 0) << endl;

    int n1, n2; cin >> n1 >> n2;
    cout << min(n1,n2);
    return 0;
}