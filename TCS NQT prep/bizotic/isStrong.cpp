// PROGRAM 7
// Write a program to find whether a given number is a strong number or not. Note:Strong number is a special number
// whose sum of factorial of digits is equal to the original number. For example: 145 is strong number. Since, 1! + 4! +
// 5! = 145 Input Format Input consist of an Integer Output Format Output consist of String
// Test Case 1
// Input
// 145
// Output
// Yes

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 1)
        return 1;

    return n * fact(n - 1);
}

bool isStrongNum(int n)
{
    vector<int> digs;
    int temp = n;
    // get All digits
    while (temp > 0)
    {
        {
            int dig = temp % 10;
            digs.push_back(dig);
            temp /= 10;
        }
        int sum = 0;
        for (auto x : digs)
        {
            sum += fact(x);
        }
        if (sum == n)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    cout << isStrongNum(n) << endl;
    return 0;
}