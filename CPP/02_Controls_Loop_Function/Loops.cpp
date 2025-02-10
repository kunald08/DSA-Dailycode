#include <iostream>
using namespace std;
/*****Application of loops*****
 * Doing some work repeatedly.
 * Traversing through containers like array, string, map etc.
 * Running services in system. 
*/
int main ()
{

    // for loop:
    for (int i = 0; i <= 10; i++)
    {
        cout << "Hare Krsna!" << endl;
    }
    // Infinite loop->
    // for (;;)
    // {
    //     cout << "Kunal:) \n";
    // }

    // while loop->
    int i = 0;
    while (i < 100)
    {
        cout << i << "\n";
        i = i + 10;
    }

    // Infinit while loop
    // while (1)
    // {
    //     /* code */
    // }

    // OR 
    // while (true)
    // {
    //     /* code */
    // }
    
    int j = 0;
    // do while loop->
    do 
    {
        cout << "Hare Krsna!!\n";
        j += 1;
    }while (j < 5);
    
    
    
    return 0;
}