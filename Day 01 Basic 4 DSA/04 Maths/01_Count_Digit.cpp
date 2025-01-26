#include<iostream>
#include<cmath>
using namespace std;

int countDigit(int N)
{
    int ans = 0;
    while (N > 0)
    {
        ans += 1;
        N /= 10;
    }
    return ans;
}
int countDigits(int n){
    // Initialize a variable 'cnt' to
    // store the count of digits.
    int cnt = (int)(log10(n)+1);

    // The expression (int)(log10(n)+1)
    // calculates the number of digits in 'n'
    // and casts it to an integer.
    
    // Adding 1 to the result accounts
    // for the case when 'n' is a power of 10,
    // ensuring that the count is correct.
   
    // Finally, the result is cast
    // to an integer to ensure it is rounded
    // down to the nearest whole number.
    
    // Return the count of digits in 'n'.
    return cnt;
}

int main()
{
    int n; cin >> n;
    int ans = countDigit(n);
    cout << ans << endl;
    return 0;
}