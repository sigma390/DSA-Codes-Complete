#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1) // Handle edge cases
        return false;
    if (n == 2) // 2 is the smallest prime number
        return true;
    if (n % 2 == 0) // Eliminate even numbers > 2
        return false;

    for (int i = 3; i <= sqrt(n); i += 2) // Check odd divisors up to sqrt(n)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    cout << (isPrime(15) ? "Prime" : "Not Prime") << endl; // Expected output: Not Prime
    cout << (isPrime(7) ? "Prime" : "Not Prime") << endl;  // Expected output: Prime
    return 0;
}
