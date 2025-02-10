#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // string s = "kunaldharpure";

    // cout << s << "\n";

    // cout << s.length() << "\n";

    // cout << s.substr(0, 5) << "\n";

    // cout << s.find("dharpure");


    // string str = "geeksforgeeks";
    // int res = str.find("eek");

    // if (res == string :: npos)
    //     cout << "Not Present\n";
    // else
    //     cout << "First occurence at index " << res;


    // string name;
    // cout << "Enter your name: ";
    // // cin >> name;
    // getline(cin, name); // for taking string with white spaces
    // cout << "Hare Krsna " << name;


    // // Travesing
    // string str = "kunall";
    // for (auto i : str)
    // {
    //     cout << i << " ";
    // }
    // cout << "\n";
    // for (int i = 0; i < str.length(); i++)
    // {
    //     cout << str[i] << " ";
    // }
    // cout << "\n";
    // for (auto it = str.begin(); it != str.end(); it++)
    // {
    //     cout << (*it) << " ";
    // }


    // // C-style string
    // char s1[] = "kunal";
    // char s2[] = {'k', 'u', 'n', 'a', 'l', '\0'};

    // cout << strlen(s1) << "\n";
    // cout << strlen(s2) << "\n";
    
    // int res = strcmp(s1, s2);
    // if (res == 0) {cout << "Same";}
    // else if (res < 0) {cout << "Smaller";}
    // else {cout << "Greater";}

    char str[5];
    strcpy(str, "kunal");
    cout << str;

    return 0;
}