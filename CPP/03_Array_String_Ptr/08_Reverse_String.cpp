#include <iostream>
using namespace std;

int main()
{
    string s; cin >> s;

    string newstr = "";
    int l = s.length() - 1;
    while (l >= 0)
    {
        newstr = newstr + s[l];
        l--;
    }
    cout << newstr;
    
    return 0;
}