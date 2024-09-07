// PROGRAM 4
// Ajay was a student who is interested in coding. One fine day Ajay's professor challenged all the students to
// calculate the power of 2 without using Arithmetic operators. Ajay want's to solve this question but he don't know
// which is the right operator to be selected. Help Ajay by writing a C++ program to calculate the power of 2 without
// using arithmetic operator.
// Test Case 1
// Input
// 3
// Output
// 8
// Test Case 2
// Input
// 0
// Output
// 1

#include <bits/stdc++.h>
using namespace std;

unsigned int power_of_two(unsigned int n)
{
    return 1 << n;
}

int main()
{
    unsigned int n;
    cin >> n;
    cout << n << "th Power of 2 is : " << power_of_two(n) << endl;
    return 0;

    return 0;
}
