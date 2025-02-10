#include <iostream>
using namespace std;

// ***Switch***
// --> The control variable must evaluate to integral type.
// --> The expressioins used in case be constant.

int main()
{
    int x = 0, y = 0;
    cout << "Enter a Choice\n";
    char move;
    cin >> move;

    switch (move)
    {
    case 'L':
        x--;
        break;
    case 'R':
        x++;
        break;
    case 'U':
        y++;
        break;
    case 'D':
        y--;
        break;
    default:
        cout << "Invalid Choice";
        break;
    }

    cout << x << " " << y;

    return 0;
}