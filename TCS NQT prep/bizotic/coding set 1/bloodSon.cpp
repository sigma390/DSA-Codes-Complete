// PROGRAM 21
// Write a program to check whether the person is eligible to donate blood.
// Input Format:
// First input consists of age
// Second Input consists of weight
// Third Input consists of hemoglobin level.
// Output Format: Output consists of eligible of not
// Test Case 1
// Input
// 15
// 44
// 5.4
// Output
// He or She unable to donate blood
// Test Case 2
// Input
// 18
// 45
// 5.5
// Output
// He or She can donate blood

#include <bits/stdc++.h>
using namespace std;
bool Eligible(int age, int w, int hemo)
{
    if (w >= 45 and age >= 18 and hemo >= 5.5)
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
    Eligible(15, 44, 5.4);
    if (!Eligible)
    {
        cout << "Not Eligible" << endl;
    }
    else
    {
        cout << "Eligible" << endl;
    }
    return 0;
}