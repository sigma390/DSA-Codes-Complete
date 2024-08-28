// 20. Write a Program to Calculate the Greatest Common Divisor of Two Numbers

#include <bits/stdc++.h>
using namespace std;

// find GCD
int gcd(int a, int b)
{

    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
// LCM

int lcm(int a, int b)
{
    int res = (a / gcd(a, b)) * b;
    return res;
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int gcd_value = gcd(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd_value << endl;
    cout << "LCM is :" << lcm(num1, num2);
    return 0;
}