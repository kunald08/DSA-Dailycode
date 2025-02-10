#include<iostream>
using namespace std;

// -->Divisible by 4 and not by 100 ex-> 1952, 1956, 1960
// -->Divisible by 400 ex-> 2000, 2400, 2800


int main()
{

    int year; cin>> year;
    if (year % 4 == 0 and year % 100 != 0)
    {
        cout << "leap year";
    }
    else if (year % 400 == 0)
    {
        cout << "leap year";
    }
    else
    {
        cout << "Not a leap year";
    }
    
    return 0;
}