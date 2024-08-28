// 18. Write a Program to Check Whether a Number is an Armstrong Number or Not

#include <bits/stdc++.h>
using namespace std;

bool isArm(int n)
{
    int sum = 0;
    string s = to_string(n);
    int len = s.length();
    int num = stoi(s);
    // calculate the actual thing
    while (n > 0)
    {
        int rem = n % 10;
        sum = pow(rem, len);
        n = n / 10;
    }
    return sum == num;
}

int main()
{
    int num;
    cin >> num;
    cout << isArm(num) << endl;
    return 0;
}