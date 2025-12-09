/* Print Alphabet
* Input:
* c1 = 'a'
* c2 = 'z'
* Output: 
* a b c d e f g h i j k l m n o p q r s t u v w x y z
* Explanation:  Printed alphabets from a to z.
*/

#include <iostream>
using namespace std;

void printAlphabet(char c1, char c2)
{
    for(char ch = c1; ch <= c2; ch++)
    {
        cout << ch << " ";
    }
}

int main()
{
    char c1 = 'a', c2 = 'z';
    
    printAlphabet(c1, c2);
    
    return 0;
}