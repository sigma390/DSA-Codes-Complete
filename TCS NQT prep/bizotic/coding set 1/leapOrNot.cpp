// Your task is to write a program to find whether the given year is Leap year or Not.

#include <bits/stdc++.h>
using namespace std;

bool isLeap(int y)
{
    if ((y % 4 == 0 and y % 100 != 0) or (y % 400 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << isLeap(2024);
    return 0;
}