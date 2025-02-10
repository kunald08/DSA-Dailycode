#include <iostream>
using namespace std;

int main()
{
    int x, y;
    char op;
    cin >> x >> op >> y;

    switch (op)
    {
    case '+':
        cout << x + y << endl;
        break;
    case '-':
        cout << x - y << endl;
        break;
    case '*':
        cout << x * y << endl;
        break;
    case '/':
        cout << x / y << endl;
        break;
    case '%':
        cout << x % y << endl;
        break;
    default:
        cout << "Invalid operator..!" << endl;
        break;
    }
    // if (op == 1)
    //     cout << x + y << endl;
    // else if (op == 2)
    //     cout << x - y << endl;
    // else if (op == 3)
    //     cout << x * y << endl;
    // else
    //     cout << "Invalid Input" << endl;

    return 0;
}