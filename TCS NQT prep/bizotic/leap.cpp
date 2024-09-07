// PROGRAM 5
// Your task is to write a program to find whether the given year is Leap year or Not.
// Test Case 1
// Input
// 2000
// Output
// LEAP YEAR
// Test Case 2
// Input
// 2018
// Output
// NOT LEAP YEAR

#include <bits/stdc++.h>
using namespace std;

bool isLeap(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}

int main()
{
    int year;
    cin >> year;
    cout << isLeap(year) << endl;
    return 0;
}