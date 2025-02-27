#include<iostream>
using namespace std;

int main()
{
    int age; cin >> age;
    
    if (age > 18)
    {
        cout << "You are an adult!" << endl;
    }
    else
    {
        cout << "You are not!" << endl;
    }
    return 0;
}