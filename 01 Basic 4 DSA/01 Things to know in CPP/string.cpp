#include<iostream>
using namespace std;

int main()
{
    string s = "kunal";
    int len = s.size();
    s[len -1 ] = 'z';

    cout << s[len-1] << "\n";
    cout << s;
    return 0;
}