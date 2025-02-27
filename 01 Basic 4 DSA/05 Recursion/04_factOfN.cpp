#include <iostream>
using namespace std;
int factorial(int X) {
   int ans = 1;
   for (int i = 1; i <= X; i++) {
      ans = ans * i;
   }
   return ans;
}
int factorial2(int n)
{
    if (n == 0) return 1;
    return n * factorial2(n-1);
}
int main() {
   int X = 5;
   int result = factorial(X);
   cout << "The factorial of " << X << " is " << result;
}