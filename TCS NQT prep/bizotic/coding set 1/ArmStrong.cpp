// PROGRAM 23
// Write a C++ program to find whether the given number is an Armstrong number or not. An Armstrong number is a
// number which is equal to the sum of all the digits raised to the power of number of digits in a given number. For
// example, 371 is an Armstrong number since 3^3+ 7^3 + 1^3 = 371.
// INPUT & OUTPUT FORMAT: Input consists of 1 integer. If it is an Armstrong number, display ―Armstrong
// Number‖ or display ―Not Armstrong Number‖.
// Test Case 1
// Input
// 371
// Output
// Armstrong Number
// Test Case 2
// Input
// 8207
// Output
// Not Armstrong Number

#include <bits/stdc++.h>
using namespace std;
bool isArm(int num)
{
    int tmp = num;
    int cnt = to_string(tmp).length();
    int sum{0};
    while (tmp > 0)
    {
        int dig = tmp % 10;
        sum += pow(dig, cnt);
        tmp /= 10;
    }
    return sum == num;
}

int main()
{
    cout << isArm(8207);

    return 0;
}