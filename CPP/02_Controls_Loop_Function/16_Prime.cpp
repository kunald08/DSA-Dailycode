#include <iostream>
using namespace std;

int main()
{

    int n; cin >> n;

    if (n == 1 || n == 0)
    {
        cout << "Neither a Prime nor composite";
    }
    else
    {
        for (int i = 2; i*i < n; i++)
        {
            if (n % i == 0)
            {
                cout << "NOT A PRIME!" ;
                break;
            }
        }
    cout << "PRIME!";
    }
    return 0;
}