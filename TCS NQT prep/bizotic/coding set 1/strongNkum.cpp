// Write a program to find whether a given number is a strong number or not. Note:Strong number is a special number
// whose sum of factorial of digits is equal to the original number. For example: 145 is strong number. Since, 1! + 4! +
// 5! = 145 Input Format Input consist of an Integer Output Format Output consist of String

#include <bits/stdc++.h>
using namespace std;

int fact(int num)
{
    if (num == 0 or num == 1)
    {
        return 1;
    }
    return num * fact(num - 1);
}
bool isStrong(int n)
{

    string s = to_string(n);
    int sum = 0;
    for (auto x : s)
    {
        int dig = stoi(to_string(x));
        sum += fact(dig);
    }
    if (sum == n)
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
    cout << isStrong(122) << endl;

    return 0;
}