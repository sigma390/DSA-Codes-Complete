// check whether a number is Perfect Number or not

// Problem Statement: Perfect Number. Write a program to find whether a number is a perfect number or not.

// A perfect number is defined as a number that is the sum of its proper divisors ( all its positive divisors excluding itself).

// Examples:

// Example 1:
// Input: n=6
// Output: 6 is a perfect number

// Example 2:
// Input: n=15
// Output: 15 is not a perfect number

// Example 3:
// Input: n=28
// Output: 28 is a perfect number
// Reason:
// For 6 and 28 , the sum of their proper divisors (1+2+3) and (1+4+7+14) is equal to the respective numbers and for 15 it is not.

#include <bits/stdc++.h>
using namespace std;

bool isPower(int n)
{
    int temp = n; // store A temp number
    int i = 1;    // initiate A variable
    int sum{0};   // sum to check later
    while (temp > i)
    {
        if (temp % i == 0) // check its divisor Or not

        {
            sum += i;
        }

        i++; // increment i
    }
    return n == sum;
}

int main()
{
    int n;
    cin >> n;
    cout << (isPower(n) ? "True" : "False") << endl;
    return 0;
}