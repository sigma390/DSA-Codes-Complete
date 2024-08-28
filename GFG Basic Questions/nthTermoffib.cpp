// 19. Write a Program to Find the Nth Term of the Fibonacci Series

#include <bits/stdc++.h>
using namespace std;

int nthFib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 or n == 2)
        return 1;

    return nthFib(n - 1) + nthFib(n - 2);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The " << n << "th term of the Fibonacci series is: " << nthFib(n) << endl;
    return 0;
}