// Ajay was a student who is interested in coding. One fine day Ajay's professor challenged all the students to
// calculate the power of 2 without using Arithmetic operators. Ajay want's to solve this question but he don't know
// which is the right operator to be selected. Help Ajay by writing a C++ program to calculate the power of 2 without
// using arithmetic operator.
// Test Case 1
// Input
// 3
// Output
// 8

#include <bits/stdc++.h>
using namespace std;

int powtwo(int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= 2;
    }
    return result;
    // Your code here
}

// using rec
int pow2(int n)
{
    if (n == 1)
        return 2;
    return 2 * pow2(n - 1);
}

int main()
{
    cout << pow2(5);
    return 0;
}