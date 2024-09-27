// Consider the following series: 1,1,2,3,4,9,8,27,16,81,32,243,64,729,128,2187…
// This series is a mixture of 2 series - all the odd terms in this series forms one series and all the even terms forms yet
// another series. Write a program to find the Nth term in the series.
// The value N in a positive integer that should be read from STDIN. The Nth term that is calculated by the program
// should be written to STDOUT. Other than value of nth term, no other character / string or message should be
// written to STDOUT.
// Test Case 1
// Input
// 5
// Output
// 4

#include <bits/stdc++.h>
using namespace std;

int term(int n)
{
    int ter{0};
    if (n % 2 == 0)
    {
        int a = 1;
        int r = 3;
        int newTerm = (n) / 2;
        ter = a * pow(r, newTerm - 1);
    }
    else
    {
        int a = 1;
        int r = 2;
        int newTerm = (n + 1) / 2;
        ter = a * pow(r, newTerm - 1);
    }
    return ter;
}

int main()
{
    cout << term(3) << endl;

    return 0;
}