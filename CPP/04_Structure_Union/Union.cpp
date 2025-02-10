#include <iostream>
using namespace std;

union Test
{
    int x;
    int y;
    /*
    x-> [] <-y
    */
};

int main()
{
    Test t;
    t.x = 10;
    cout << t.x << " " << t.y << endl;
    t.y = 20;
    cout << t.x << " " << t.y << endl;
    cout << sizeof(t);
    
    return 0;
}