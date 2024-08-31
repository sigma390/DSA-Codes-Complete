// Check if a number is prime or not
// Problem Statement: Given an integer N, check whether it is prime or not. A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.

// Examples
// Example 1:
// Input:N = 2
// Output:True
// Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).
// Example 2:
// Input:N =10
// Output: False
// Explanation: 10 is not prime, it is a composite number because it has 4 divisors: 1, 2, 5 and 10.
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    int root = sqrt(n);
    // if number is 1 or less than it
    if (n <= 1)
        return false;
    // if number is 2 or 3
    if (n == 2 | n == 3)
        return true;

    for (int i = 2; i < root; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPrime(n))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}