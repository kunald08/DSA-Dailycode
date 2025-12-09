// Find one extra character

// Input: s1 = abcd, s2 = badce
// Output: e

#include "bits/stdc++.h"
using namespace std;

char extraChar1(string &s1, string &s2) {
    int sum1 = 0, sum2 = 0;
    for (char c: s1) sum1 += c;
    for (char c: s2) sum2 += c;
    return static_cast<char>(sum2-sum1);
}
char extraChar2(string &s1, string &s2) {
   
    unordered_map<char, int> count;
    for (char c: s1) count[c]++;
    for (char c: s2) {
        if (count[c] == 0) return c;
        count[c]--;
    }
    return '\0';  // just in case;
}
char extraChar3(string &s1, string &s2) {

    char res = 0;
    for (char c: s1) res ^= c;
    for (char c: s2) res ^= c;
    return res;
}
int main()
{
    string s1 = "kunal";
    string s2 = "kunald";
    
    cout << extraChar1(s1, s2) << "\n";
    cout << extraChar2(s1, s2) << "\n";
    cout << extraChar3(s1, s2) << "\n";
    return 0;
}