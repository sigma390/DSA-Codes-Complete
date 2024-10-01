// PROGRAM 17
// Write a program to get a float value from the user and display it in the below-mentioned format.
// INPUT & OUTPUT FORMAT: Input consists of 1 float value. Output must display the given input and also
// display the input with one, two and three decimal points.
// Test Case 1
// Input
// 23.115
// Output
// 23.115000
// 23.115
// 23.11
// 23.1

#include <bits/stdc++.h>
using namespace std;

void show(float f)
{
    cout << fixed << setprecision(6) << f << endl;
    cout << fixed << setprecision(3) << f << endl;
    cout << fixed << setprecision(2) << f << endl;
    cout << fixed << setprecision(1) << f << endl;
}
int main()
{
    float f{23.115};
    show(f);
    return 0;
}