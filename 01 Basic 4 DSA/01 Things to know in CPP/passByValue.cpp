#include<iostream>
using namespace std;

void swapp(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 30;
    
    cout << a << b <<"\n";
    
    swapp(a, b);
    cout << a << b <<"\n";

    return 0;
}