#include <bits/stdc++.h>
using namespace std;

// sorting - TC: O(n*logn + m*logm) SC: O(1) or O(n+m);
bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
        return false;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

// Hash Map - TC: O(n+m); SC: O(1);
bool isAnagram2(string s, string t)
{
    if (s.length() != t.length())
        return false;

    unordered_map<char, int> countS;
    unordered_map<char, int> countT;

    for (int i = 0; i < s.length(); i++)
    {
        countS[s[i]]++;
        countT[t[i]]++;
    }
    return countS == countT;
}

// Hash Table (Using Array) - TC: O(n+m); O(1);
bool isAnagram3(string s, string t)
{
    if (s.length() != t.length()) return false;

    vector<int> count(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int n: count)
    {
        if (n != 0) return false;
    }
    return true;
}

int main()
{
    string s = "kunal";
    string t = "lanuk";

    cout << isAnagram3(s, t);

    return 0;
}
